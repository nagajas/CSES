import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

sys.stdout.write(str((n*(n+1))//2 - sum(a))+'\n')