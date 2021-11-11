import json
import os
import time
import urllib.request

MAX_SUBS = 10000
COUNT = 100
MAX_CF_CONTEST_ID = 600
MAGIC_START_POINT = 17000
LANG = 'C++'
ID = '1548'

SOURCE_CODE_BEGIN = '<pre id="program-source-text" class="prettyprint lang-cpp linenums program-source" style="padding: 0.5em;">'
SUBMISSION_URL = 'http://codeforces.com/contest/{ContestId}/submission/{SubmissionId}'
USER_INFO_URL = 'https://codeforces.com/api/contest.status?contestId={id}&from=1&count={count}'

EXT = {'C++': 'cpp', 'C': 'c', 'Java': 'java', 'Python': 'py', 'Delphi': 'dpr', 'FPC': 'pas', 'C#': 'cs'}
EXT_keys = EXT.keys()

replacer = {'&quot;': '\"', '&gt;': '>', '&lt;': '<', '&amp;': '&', "&apos;": "'"}
keys = replacer.keys()


def get_ext(comp_lang):
    if 'C++' in comp_lang:
        return 'cpp'
    for key in EXT_keys:
        if key in comp_lang:
            return EXT[key]
    return ""


def parse(submission_info):
    if submission_info.find(SOURCE_CODE_BEGIN.encode(), 0) == -1:
        return -1
    start_pos = submission_info.find(SOURCE_CODE_BEGIN.encode(), 0) + len(SOURCE_CODE_BEGIN)
    end_pos = submission_info.find("</pre>".encode(), start_pos)
    source_code = submission_info[start_pos:end_pos].decode("latin-1")
    for key in keys:
        source_code = source_code.replace(key, replacer[key])
    return source_code


def get_submissions():
    user_info = urllib.request.urlopen(USER_INFO_URL.format(id=ID, count=MAX_SUBS)).read()
    dic = json.loads(user_info)
    if dic['status'] != u'OK':
        print('Oops.. Something went wrong...')
        exit(0)

    return dic['result']


if __name__ == '__main__':
    if not os.path.exists(ID):
        os.makedirs(ID)

    start_time = time.time()
    submissions = get_submissions()
    print('Started getting of files')
    count = 0

    for submission in submissions:
        if submission['verdict'] == u'OK' and 'C++' in submission['programmingLanguage']:
            con_id, sub_id = submission['contestId'], submission['id'],
            prob_name, prob_id = submission['problem']['name'], submission['problem']['index']

            result = parse(urllib.request.urlopen(SUBMISSION_URL.format(ContestId=con_id, SubmissionId=sub_id)).read())
            if result == -1:
                print(f'Bad id: {sub_id}')
                continue

            count += 1
            print(f'GET {count}/100')
            file = open(ID + '/' + str(count) + prob_id + '[ ' + prob_name + ' ]' + '.' + get_ext(submission['programmingLanguage']), 'w')
            file.write(result)
            file.close()
            if count == COUNT:
                break
    end_time = time.time()

    print('Execution time %d seconds' % int(end_time - start_time))
