from sympy import *
t=int(input())
for _ in range(t):
    m,n=map(int,input().split())
    l= list(primerange(m,n+1))
    for x in l:
        print(x)
    print()