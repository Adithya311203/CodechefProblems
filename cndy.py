# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    d={}
    for i in a:
        if i in d:
            d[i]+=1
        else:
            d[i]=1
    l=list(d.values())
    f=1
    for x in l:
        if(x>2):
            print("NO")
            f=0
            break
    if(f==1):
        print("YES")