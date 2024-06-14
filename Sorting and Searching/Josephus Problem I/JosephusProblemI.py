from collections import deque

n = int(input())
q = deque(range(1, n + 1))

for _ in range(n - 1):
    q.append(q[0])
    q.popleft()
    print(q[0], end=" ")
    q.popleft()
    #print(q)
print(q[0])