# cook your dish here
t=int(input())
for _ in range(t):
    w,x,y,z=map(int,input().split())
    a=x+y
    b=y+z
    c=x+z
    d=x+y+z
    if(a==w or b==w or c==w or d==w or x==w or y==w or z==w):
        print("YES")
    else:
        print("NO")