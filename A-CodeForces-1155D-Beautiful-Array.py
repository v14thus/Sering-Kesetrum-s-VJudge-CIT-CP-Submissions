# Will's code

n, x = map(int, input().split())
a = list(map(int, input().split()))

d0 = d1 = d2 = 0
best = 0
for v in a:
    n0 = max(0, d0 + v)
    n1 = max(0, max(d0, d1) + v * x)
    n2 = max(0, max(d1, d2) + v)
    d0, d1, d2 = n0, n1, n2
    best = max(best, d0, d1, d2)
print(best)
