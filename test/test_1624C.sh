#!/bin/bash
exec >>bash.log
exec 2>>bash.log
exec 5> bash.log

export BASH_XTRACEFD=5
set -x
sh analyze_simple_1624.sh 1624C/18 1624C/2
sh analyze_simple_1624.sh 1624C/18 1624C/3
sh analyze_simple_1624.sh 1624C/18 1624C/4
sh analyze_simple_1624.sh 1624C/18 1624C/6
sh analyze_simple_1624.sh 1624C/18 1624C/7
sh analyze_simple_1624.sh 1624C/18 1624C/11
sh analyze_simple_1624.sh 1624C/18 1624C/13
sh analyze_simple_1624.sh 1624C/18 1624C/16
sh analyze_simple_1624.sh 1624C/18 1624C/18
sh analyze_simple_1624.sh 1624C/18 1624C/20
sh analyze_simple_1624.sh 1624C/18 1624C/22
