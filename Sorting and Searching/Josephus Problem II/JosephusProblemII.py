# CSES Problem Set - Sorting and Searching - Josephus Problem II (https://cses.fi/problemset/task/2163/)
# Solution by: nagajas
# Note: This is not an accepted solution, please see the footer for more details.

from sortedcontainers import SortedSet

n, k = map(int, input().split())
soldiers = SortedSet(range(1, n + 1))
prev = 0
for i in range(n-1):
    curr = (prev + k) % (n-i)
    prev = curr
    print(soldiers[curr], end=" ")
    soldiers.remove(soldiers[curr])
print(soldiers[0])

## This version is simplified and readable version of accepted solution.
## This is not accepted because of the use of sortedcontainers module, which is not available in the judge.
## Accepted solution uses complete implementation of SortedSet (from the module) without importing any module.
## Refer to ./JosephusProblemII_full.py for the accepted solution.