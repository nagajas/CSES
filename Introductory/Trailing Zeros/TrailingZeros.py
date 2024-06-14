import sys
import math

input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
res = 0
for i in range(1, 14):
    res += n // (5**i)

print(str(res))