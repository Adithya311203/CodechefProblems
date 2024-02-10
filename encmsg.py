# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    s=list(input())
    for i in range(0,n-1,2):
        s[i],s[i+1]=s[i+1],s[i]
    l=[chr(x) for x in range(97,123)]
    for i in s:
        ind=l.index(i)
        print(l[len(l)-ind-1],end="")
    print()