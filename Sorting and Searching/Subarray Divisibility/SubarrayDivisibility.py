import sys
from time import time
st = time()
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
m = {'0':1}
psum, cnt = 0,0

for x in a:
    psum += x
    psum %= n
    if str(psum) in m:
        cnt += m[str(psum)]
    m[str(psum)] = m.get(str(psum),0) + 1

sys.stdout.write(str(cnt)+ '\n')
sys.stderr.write("Time taken: "+str(time()-st)+'s\n')