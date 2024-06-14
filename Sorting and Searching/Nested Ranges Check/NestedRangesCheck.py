import sys
from collections import defaultdict
input = sys.stdin.readline

n = int(input())
d = defaultdict(list)
for i in range(n):
    l,r = map(int, input().split())
    d[l].append((r, i))

a = []
for k in sorted(d.keys()):
    d[k].sort(key = lambda x: -x[0])
    for l,r in d[k]:
        a.append((k, l, r))

contained = [0]*n
contains = [0]*n

maxR = 0
for x in a:
    if x[1] <= maxR:
        contained[x[2]] = 1
    else:
        maxR = x[1]
    
minR  = float('inf')
for x in a[::-1]:
    if x[1] >= minR:
        contains[x[2]] = 1
    else:
        minR = x[1]

sys.stdout.write(' '.join(map(str, contains))+'\n')
sys.stdout.write(' '.join(map(str, contained))+'\n')