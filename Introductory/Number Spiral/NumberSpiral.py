import sys
input = sys.stdin.readline
print = sys.stdout.write

def solve(y,x):
    m = max(x, y)
    start = -1
    if m == x:
        if m % 2:
            start = m * m
            print(str(start - y + 1))
        else:
            start = (m - 1) * (m - 1) + 1
            print(str(start + y - 1))
    else:
        if m % 2 == 0:
            start = m * m
            print(str(start - x + 1))
        else:
            start = (m - 1) * (m - 1) + 1
            print(str(start + x - 1))

for _ in range(int(input())):
    y, x = map(int, input().split())
    solve(y, x)
    print(str("\n"))