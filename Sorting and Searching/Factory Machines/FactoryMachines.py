import sys
from math import ceil
from time import time

s = time()
input = sys.stdin.readline

n, t = map(int, input().split())
a = list(map(int, input().split()))

l, r = 1, 10**18
while l < r:
    m = (l + r) // 2
    sm = 0
    for x in a:
        sm += m // x
        if sm >= t:
            break
    if sm < t:
        l = m + 1
    else:
        r = m
    
sys.stdout.write(str(l) + '\n')
sys.stderr.write(str(time() - s) + ' s\n')