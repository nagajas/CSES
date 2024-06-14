import sys
from time import time

input = sys.stdin.readline
start = time()
n = int(input())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
    
a.sort()
reward = 0
sm = 0

for i in range(n):
    sm += a[i][0]
    reward += a[i][1] - sm

sys.stdout.write(str(reward)+'\n')
sys.stderr.write("Time: " + str(time() - start) + "s\n")
