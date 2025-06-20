def solve():
    n, x = map(int, input().split())
    
    if n == 1:
        print(x if x > 0 else -1)
        return
    
    sum_val = (n - 1) + (x ^ (n - 1))
    print(sum_val)

t = int(input())
for _ in range(t):
    solve()
