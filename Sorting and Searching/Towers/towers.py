# Gives TLE. TODO: Insertion and deletion in list is O(n). Use a data structure with O(logn) insertion and deletion.

from sys import stdin
input = stdin.readline

import time

class MultiSet:
    def __init__(self):
        self.data = []
        self.size = 0
        
    def upper_bound(self, arr, k):
        l, r = 0, len(arr)
        while l < r:
            m = (l + r) // 2
            if arr[m] <= k:
                l = m + 1
            else:
                r = m
        return l
    
    def insert(self, x):
        idx = self.upper_bound(self.data, x)
        self.data.insert(idx, x)
        self.size += 1
    
    def erase(self, x):
        if x in self.data:
            self.data.remove(x)
            self.size -= 1
    

n = int(input())
towers = list(map(int, input().split()))
start = time.time()
temp = MultiSet()
for i in range(n):
    it = temp.upper_bound(temp.data, towers[i])
    if it == temp.size:
        temp.insert(towers[i])
    else:
        temp.erase(temp.data[it])
        temp.insert(towers[i])
end = time.time()
print(temp.size)

print("Time taken: ", end-start, "s")
# RESULT: TLE