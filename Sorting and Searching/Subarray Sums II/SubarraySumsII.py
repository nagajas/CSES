import sys
from time import time
input = sys.stdin.readline

st = time()
n, x = map(int, input().split())
a = list(map(int, input().split()))

pref_sum = 0
m = {}
cnt = 0

for t in a:
    pref_sum += t
    cnt += m.get(1^(pref_sum-x), 0)
    m[1^pref_sum] = m.get(1^pref_sum, 0)+1

sys.stdout.write(str(cnt+m.get(1^x,0)) + '\n')
sys.stderr.write("Time taken: "+str(time()-st) + ' s\n')