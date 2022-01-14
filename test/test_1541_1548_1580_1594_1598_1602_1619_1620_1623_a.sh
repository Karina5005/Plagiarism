#!/bin/bash
exec >>bash.log
exec 2>>bash.log
exec 5> bash.log

export BASH_XTRACEFD=5
set -x
sh analyze_simple.sh 1623/36 1623_comment/36
sh analyze_simple.sh 1623/36 1623_code_insertion/36
sh analyze_simple.sh 1623/36 1623_control_replacement/36
sh analyze_simple.sh 1623/36 1623_rename/36
sh analyze_simple.sh 1623/43 1623_comment/43
sh analyze_simple.sh 1623/43 1623_code_insertion/43
sh analyze_simple.sh 1623/43 1623_control_replacement/43
sh analyze_simple.sh 1623/43 1623_rename/43
