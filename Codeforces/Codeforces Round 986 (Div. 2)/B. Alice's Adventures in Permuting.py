## ﷽
## Contest: Codeforces Round 986 (Div. 2)
##
## Judge: Codeforces
## URL: https://codeforces.com/contest/2028/problem/B
## Memory Limit: 256
## Time Limit: 1000
## Start: Sun 10 Nov 2024 05:43:31 PM EET
## Reading Time :
## Thinking Time :
## Coding Time :
## Debug Time :
## Submit Count :
## Problem Level :
## Category :
## Comments :

def solve():

    nm, bm, cm = map(int, input().split())
    if cm > nm:
        cm =nm
    if cm == 0 and bm == 1:
        print(0)
        return
    
    if nm == 1:
        print(1 if cm != 0 else 0)
        return
    
    l = 0
    if bm == 0:
        l = 1 if cm < nm else 0
    else:
        l = (nm - cm + bm - 1) // bm
    
    if not cm and not bm and nm > 1:
        l = nm + 1
        
    if cm >= nm:
        l = 0
        
    ans = nm - l
    print(ans)

n = int(input())

for _ in range(n):
    solve()
