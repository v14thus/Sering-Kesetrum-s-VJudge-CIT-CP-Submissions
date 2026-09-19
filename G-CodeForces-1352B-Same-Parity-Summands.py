# Will's code

def solve(n, k):
    for p in (1, 2):                  
        re = n - p * k
        if re >= 0 and re % 2 == 0:
            ex = re // 2         
            a = [p + 2 * (ex // k)] * k

            order = []
            l, r = 0, k - 1
            while l <= r:
                order.append(l)
                if l != r:
                    order.append(r)
                l += 1
                r -= 1
            for i in order[:ex % k]:
                a[i] += 2
            return a
    return None

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        ans = solve(n, k)
        if ans:
            print("YES")
            print(*ans)
        else:
            print("NO")

main()
