import time

class GridPaths():
    def __init__(self):
        self._paths = 0
        self._steps = 0
        self.visited = [[False for i in range(7)] for j in range(7)]

    def pathgen(self,r,c):
        if r == 6 and c == 0:
            if self._steps == 48:
                self._paths += 1
            return
        if ((0<r<6 and (c==0 or c==6) and not self.visited[r-1][c] and not self.visited[r+1][c]) or
            (0<c<6 and (r==0 or r==6) and not self.visited[r][c-1] and not self.visited[r][c+1]) or
            ((0<r<6 and 0<c<6) and ( (self.visited[r-1][c] and self.visited[r+1][c] and not self.visited[r][c-1] and not self.visited[r][c+1]) or 
                                (not self.visited[r-1][c] and not self.visited[r+1][c] and self.visited[r][c-1] and self.visited[r][c+1]) ))):
            return
        
        self.visited[r][c] = True
        if self.path[self._steps] == '?':
            if r<6 and not self.visited[r+1][c]:
                self._steps += 1
                self.pathgen(r+1,c)
                self._steps -= 1
            if r>0 and not self.visited[r-1][c]:
                self._steps += 1
                self.pathgen(r-1,c)
                self._steps -= 1
            if c>0 and not self.visited[r][c-1]:
                self._steps += 1
                self.pathgen(r,c-1)
                self._steps -= 1
            if c<6 and not self.visited[r][c+1]:
                self._steps += 1
                self.pathgen(r,c+1)
                self._steps -= 1
        else:
            if self.path[self._steps] == 'U' and r>0 and not self.visited[r-1][c]:
                self._steps += 1
                self.pathgen(r-1,c)
                self._steps -= 1
            elif self.path[self._steps] == 'D' and r<6 and not self.visited[r+1][c]:
                self._steps += 1
                self.pathgen(r+1,c)
                self._steps -= 1
            elif self.path[self._steps] == 'L' and c>0 and not self.visited[r][c-1]:
                self._steps += 1
                self.pathgen(r,c-1)
                self._steps -= 1
            elif self.path[self._steps] == 'R' and c<6 and not self.visited[r][c+1]:
                self._steps += 1
                self.pathgen(r,c+1)
                self._steps -= 1

        self.visited[r][c] = False
    
    def solve(self, str):
        self.path = str
        self.pathgen(0,0)
        return self._paths

if __name__ == '__main__':
    path = input()
    start = time.time()
    g = GridPaths().solve(path)
    end = time.time()
    print(g)
    
    print("Execution Time: ", end-start)
    