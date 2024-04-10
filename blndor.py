
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    one=a.count(1)
    two=a.count(2)
    if (a[0]==1 and n==1) or two==0 or two%8==0:
        print("YES")
    else:
        print("NO")
