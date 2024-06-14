import sys
import math
input = sys.stdin.readline
print = sys.stdout.write

n=int(input())
if((n*(n+1))%4!=0):
    print("NO\n")
else:
    print("YES\n")
    if(n%2==0):
        print(str(n//2)+"\n")
        for i in range(1,n//4+1):
            print(str(i)+" "+str(n-i+1)+" ")
        print("\n")
        print(str(n//2)+"\n")
        for i in range(n//4+1,n//2+1):
            print(str(i)+" "+str(n-i+1)+" ")
        print("\n")
    else:
        print(str(n//2)+"\n")
        print(str(n)+" ")
        n-=1
        for i in range(1,n//4+1):
            print(str(i)+" "+str(n-i+1)+" ")
        print("\n")
        print(str(n//2+1)+"\n")
        for i in range(n//4+1,n//2+1):
            print(str(i)+" "+str(n-i+1)+" ")
        print("\n")