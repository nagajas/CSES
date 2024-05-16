for _ in range(int(input())):
    k = int(input())
    d = 1
    while k > 9 * d * 10 ** (d - 1):
        k -= 9 * d * 10 ** (d - 1)
        d += 1
    num = 10 ** (d - 1) + (k - 1) // d
    print(str(num)[(k - 1) % d])