import sys 
from math import perm
sys.stdin= open('galactic.in','r')
t=int(sys.stdin.readline())
for i in range(0,t):
    s=sys.stdin.readline()
    n,m=map(int,s.split())
    mo = 1e9+7
    print(int(perm(n,m)%mo))
