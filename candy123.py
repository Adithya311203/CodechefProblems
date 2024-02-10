# cook your dish here
t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    c,d=a,b
    for i in range(1,a+b+1):
        if(i%2!=0 ):
            c-=i
        elif(i%2==0):
            d-=i
        if(d<0):
            print("Limak")
            break
        
        elif(c<0):
            print("Bob")
            break