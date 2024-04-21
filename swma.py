for _ in range(int(input())):
    a,b=map(int,input().split())
    c=int(str(a)[::-1])
    d=int(str(b)[::-1])
    if a>b or a>d or  c>b or c>d:
        print("YES")
    else:
        print("NO")