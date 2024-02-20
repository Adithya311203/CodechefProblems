t=int(input())

for _ in range(t):
    c=0
    n=int(input())
    s=list(input())
    for i in range(n-1):
        if s[i]>s[i+1]:
            c+=1
    print(c)