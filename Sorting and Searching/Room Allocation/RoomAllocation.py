import sys
from heapq import heappush, heappop
from time import time
 
s = time()
input = sys.stdin.readline

n = int(input())
a = [(*map(int, input().split()), i) for i in range(n)]

a.sort()
ans = [0] * n
pq = []

for start, end, id in a:
    if pq and pq[0][0] < start:
        _,curr = heappop(pq)
    else:
        curr = len(pq) + 1
    heappush(pq, (end, curr))
    ans[id] = curr
    
sys.stdout.write(str(len(pq)) + '\n')
sys.stdout.write(' '.join(map(str, ans)) + '\n')
sys.stderr.write(str(time()-s) + ' seconds\n')