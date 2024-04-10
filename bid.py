for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=list(map(int,input().split()))
    d=list(map(int,input().split()))
    
    if sum(a)>sum(c) and sum(b)>sum(d):   
        print("A")
    elif sum(a)<sum(c) and sum(b)<sum(d):   
        print("P")
    else:
        print("DRAW")