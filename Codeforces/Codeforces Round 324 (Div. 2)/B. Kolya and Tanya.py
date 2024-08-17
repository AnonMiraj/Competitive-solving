
n = int(input())
ans = (3**(3*n))-(7**n)
ans = ans % int(1e9+7)
print(ans)
