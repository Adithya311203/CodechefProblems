# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    count=0
    vowels=['a','e','i','o','u']
    for i in s:
        if i not in vowels:
            count+=1
        else:
            count=0
        if count>=4:
            print("NO")
            break
    if(count<4):
        print("YES")