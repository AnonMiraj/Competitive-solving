

N, M = map(int, input().strip().split())

dollars = N / M

if dollars >= 150:
    print("VERY HAPPY")
elif dollars >= 100:
    print( "HAPPY")
else:
    print( "SAD")
