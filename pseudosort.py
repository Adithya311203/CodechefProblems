# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    x=list(l)
    x.sort()
    for i in range (len(l)-1):
        if l[i]>l[i+1]:
            l[i],l[i+1]=l[i+1],l[i]
            break
    
    if l==x:
        print("YES")
    else:
        print("NO")