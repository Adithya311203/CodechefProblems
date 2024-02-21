t=int(input())
for _ in range(t):
    n=int(input())
    s=list(map(int,input().split()))
    l=list(filter(lambda x: x>4,s))
    if(len(l)==len(s)):
        print("YES")
    else:
        print("NO")