import sys
from time import time
input = sys.stdin.readline

st = time()
n, x = map(int, input().split())
a = list(map(int, input().split()))

pref_sum = 0
m = {'0':1}
cnt = 0

for t in a:
    pref_sum += t
    if str(pref_sum-x) in m:
        cnt += m[str(pref_sum-x)]
    m[str(pref_sum)] = m.get(str(pref_sum), 0)+1

sys.stdout.write(str(cnt) + '\n')
sys.stderr.write("Time taken: "+str(time()-st) + ' s\n')