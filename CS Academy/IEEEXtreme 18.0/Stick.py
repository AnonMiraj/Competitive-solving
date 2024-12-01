def calculate_area(fig):
    res = 0
    for i in range(len(fig)):
        p = fig[i - 1] if i else fig[-1]
        q = fig[i]
        res += (p[0] - q[0]) * (p[1] + q[1])
    return abs(res) / 2

def solve():
    n, k, l = map(int, input().split())
    
    y = k + l
    x = k - l
    d = abs(x - y)
    area = d * d
    
    if l < k:
        print(n * area)
        return
        
    arr = []
    arr1 = []
    
    x1 = (-l, -l)
    x2 = (-l, l)
    prev = x2
    
    for i in range(1, n):
        x3 = (prev[0] + k, prev[1])
        arr.append(x3)
        x3 = (x3[0], x3[1] + k)
        arr.append(x3)
        prev = x3
    
    for a, b in arr:
        arr1.append((b, a))
    
    arr.append(((n-1)*k + l, (n-1)*k + l))
    arr.insert(0, (-l, l))
    arr1.reverse()
    
    arr1.append((l, -l))
    arr1.append((-l, -l))
    arr.extend(arr1)
    
    print(int(calculate_area(arr)))

# Main execution
if __name__ == "__main__":
    solve()
