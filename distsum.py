import math
t=int(input())
for _ in range(t):
    x,y=map(int,input().split())
    print(math.ceil(10*(y-x)/(100-y)))