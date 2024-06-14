import sys
input = sys.stdin.readline

n,k = map(int, input().split())
a = list(map(int, input().split()))

start = 0
ans = 0
m = {}

for r in range(n):
    m[str(a[r])] = m.get(str(a[r]), 0)+1
    while len(m)>k:
        t = a[start]
        m[str(t)] -= 1
        if m[str(t)] == 0:
            del m[str(t)]
        start += 1
    ans += (r-start+1)
sys.stdout.write(str(ans)+'\n')