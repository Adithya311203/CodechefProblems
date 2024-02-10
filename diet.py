# cook your dish here
t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    store=0
    f=1
    for i in range(n):
        a[i]+=store
        if(a[i]<k):
            print("NO",i+1)
            f=0
            break
        else:
            a[i]-=k
            store=a[i]
    if f==1:
        print("YES")