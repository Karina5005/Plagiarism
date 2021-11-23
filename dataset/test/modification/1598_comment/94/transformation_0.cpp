#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int t, n;
	long long ans, topic_2, difficulty_2;

	vector<pair<int, int>> topic, difficulty;

	cin >> t;

	while (t--)
	{
		cin >> n;

		topic.resize(n);
		difficulty = topic;

		ans = 1LL * n * (n - 1) * (n - 2) / 6;

		for (int i = 0; i < n; ++i)
		{
			cin >> topic[i].first >> topic[i].second;

			difficulty[i].first = topic[i].second;
			difficulty[i].second = topic[i].first;
		}

		sort(topic.begin(), topic.end());
		sort(difficulty.begin(), difficulty.end());

		for (int i = 0; i < n; ++i)
		{
			topic_2 = upper_bound(topic.begin(), topic.end(), make_pair(topic[i].first + 1, 0)) - lower_bound(topic.begin(), topic.end(), make_pair(topic[i].first, 0)) - 1;
			difficulty_2 = upper_bound(difficulty.begin(), difficulty.end(), make_pair(topic[i].second + 1, 0)) - lower_bound(difficulty.begin(), difficulty.end(), make_pair(topic[i].second, 0)) - 1;

			ans -= (topic_2 * difficulty_2);
		}

		cout << ans << '\n';
	}
}