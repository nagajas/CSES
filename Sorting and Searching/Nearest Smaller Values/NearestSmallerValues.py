import sys
from time import time

s = time()
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

stack = []

for i in range(n):
    while stack and a[stack[-1]] >= a[i]:
        stack.pop()
    if stack:
        sys.stdout.write(str(stack[-1]+1) + ' ')
    else:
        sys.stdout.write('0 ')
    stack.append(i)
sys.stdout.write('\n')
sys.stderr.write("Time taken: "+str(time()-s)+" s\n")