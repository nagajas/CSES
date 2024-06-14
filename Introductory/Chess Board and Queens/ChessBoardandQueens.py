import sys
input = sys.stdin.readline
print = sys.stdout.write

def solve(board, row, col, n, left, up, right):
    if row == n:
        return 1
    count = 0
    for i in range(n):
        if board[row][i] == '.' and left[i] == 0 and up[row+i] == 0 and right[n-1+row-i] == 0:
            left[i] = 1
            up[row+i] = 1
            right[n-1+row-i] = 1
            count += solve(board, row+1, col, n, left, up, right)
            left[i] = 0
            up[row+i] = 0
            right[n-1+row-i] = 0
    return count

n=8
board = [list(input().strip()) for _ in range(n)]

left = [0]*n
up = [0]*(2*n-1)
right = [0]*(2*n-1)

print(str(solve(board, 0, 0, n, left, up, right))+'\n')