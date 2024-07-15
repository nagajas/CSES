#!/usr/bin/env python3

import sys
input = sys.stdin.readline
print = sys.stdout.write

def solve(arr, n, i, sum1, sum2):
    if i == n:
        return abs(sum1-sum2)
    return min(solve(arr, n, i+1, sum1+arr[i], sum2), solve(arr, n, i+1, sum1, sum2+arr[i]))

n = int(input())
arr = list(map(int, input().split()))
print(str(solve(arr, n, 0, 0, 0))+'\n')