import math
t = int(input())
while t > 0:
    x, y, k = map(int, input().split())
    x -= 1
    rex = y * k
    # print(y,k)
    ans = int(math.ceil(1.0 * rex / x))
    rem = x*ans-rex+1
    if rem < k:
        rem = k-rem
        ans += math.ceil(1.0*rem/x)
    ans += k
    print(ans)
    t -= 1
