## ﷽
## Contest: Codeforces Round 566 (Div. 2)
## Judge: Codeforces
## URL: https://codeforces.com/problemset/problem/1182/A
## Memory Limit: 256
## Time Limit: 1000
## Start: Mon 06 May 2024 12:07:39 AM EEST
## Reading Time : 
## Thinking Time : 
## Coding Time : 
## Comments : 

from math import perm,comb

n = int(input())
if (n&1):
    print(0)
    exit(0)

print(int(2**(n/2)))
