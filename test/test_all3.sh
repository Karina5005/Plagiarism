#!/bin/bash
exec >>bash.log
exec 2>>bash.log
exec 5> bash.log

export BASH_XTRACEFD=5
set -x
sh analyze_simple.sh 1619/10 1619_all/10
sh analyze_simple.sh 1619/11 1619_all/11
sh analyze_simple.sh 1619/19 1619_all/19
sh analyze_simple.sh 1619/20 1619_all/20
sh analyze_simple.sh 1619/21 1619_all/21
sh analyze_simple.sh 1619/23 1619_all/23
sh analyze_simple.sh 1619/24 1619_all/24
sh analyze_simple.sh 1619/28 1619_all/28
sh analyze_simple.sh 1619/29 1619_all/29
sh analyze_simple.sh 1619/31 1619_all/31
sh analyze_simple.sh 1619/33 1619_all/33
sh analyze_simple.sh 1619/34 1619_all/34
sh analyze_simple.sh 1619/41 1619_all/41
sh analyze_simple.sh 1619/42 1619_all/42
sh analyze_simple.sh 1619/43 1619_all/43
sh analyze_simple.sh 1619/44 1619_all/44
sh analyze_simple.sh 1619/45 1619_all/45
sh analyze_simple.sh 1619/47 1619_all/47
sh analyze_simple.sh 1620/1 1620_all/1
sh analyze_simple.sh 1620/3 1620_all/3
sh analyze_simple.sh 1620/5 1620_all/5
sh analyze_simple.sh 1620/6 1620_all/6
sh analyze_simple.sh 1620/7 1620_all/7
sh analyze_simple.sh 1620/10 1620_all/10
sh analyze_simple.sh 1620/11 1620_all/11
sh analyze_simple.sh 1620/25 1620_all/25
sh analyze_simple.sh 1620/27 1620_all/27
sh analyze_simple.sh 1620/31 1620_all/31
sh analyze_simple.sh 1620/32 1620_all/32
sh analyze_simple.sh 1620/34 1620_all/34
sh analyze_simple.sh 1620/36 1620_all/36
sh analyze_simple.sh 1620/37 1620_all/37
sh analyze_simple.sh 1620/39 1620_all/39
sh analyze_simple.sh 1620/41 1620_all/41
sh analyze_simple.sh 1623/2 1623_all/2
sh analyze_simple.sh 1623/7 1623_all/7
sh analyze_simple.sh 1623/25 1623_all/25
sh analyze_simple.sh 1623/26 1623_all/26
sh analyze_simple.sh 1623/36 1623_all/36
sh analyze_simple.sh 1623/43 1623_all/43
