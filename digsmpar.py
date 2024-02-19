def digitsum(x):
    l=list(str(x))
    s=0
    for i in l:
        s+=int(i)
    if(s%2==0):
        return 0
    else:
        return 1
    
t=int(input())
for _ in range(t):
    n=int(input())
    a=digitsum(n)
    x=n+1
    while(a==digitsum(x)):
        #print("a=",a,"digit(x)",digitsum(x))
        x+=1
    print(x)