# cook your dish here
t=int(input())
for _ in range(t):
    l=[]
    for i in range(22):
        a,b=map(int,input().split())
        l.append(a+b*20)
    print(l.index(max(l))+1)