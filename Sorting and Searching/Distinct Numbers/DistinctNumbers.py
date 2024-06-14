import sys
input = sys.stdin.readline

input()
a = {x for x in input().split()}
sys.stdout.write(str(len(a))+'\n')