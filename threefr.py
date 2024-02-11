t=int(input())
for _ in range(t):
    x,y,z=map(int,input().split())
    l=[x,y,z]
    l.sort()
    x,y,z=l[2],l[1],l[0]
    a=x+y-z
    b=x-y+z
    c=x-y-z
    if a==0 or b==0 or c == 0:
        print("yes")
    else:
        print("no")