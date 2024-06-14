import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
p = 1
while n:
    p*=2
    p%=1000000007
    n-=1
print(str(p))