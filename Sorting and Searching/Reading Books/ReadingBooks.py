import sys
from time import time
s = time()
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
m = max(2*max(a), sum(a))

sys.stdout.write(str(m)+'\n')
sys.stderr.write("Time taken: "+str(time()-s)+"s\n")