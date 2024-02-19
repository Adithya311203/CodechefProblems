t=int(input())
for _ in range(t):
    n,x,y=map(int,input().split())
    handv=2*(n-1)
    ldiagonal=min(x-1,y-1)+min(n-x,n-y)
    rdiagonal=min(n-x,y-1)+min(x-1,n-y)
    
    print(handv+rdiagonal+ldiagonal)
            