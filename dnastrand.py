t=int(input())
for x in range(t):
    n=int(input())
    s=input()
    
    for ele in s:
        if ele=='A':
            print('T',end='')
        elif ele=='T':
            print('A',end='')
        elif ele=='G':
            print('C',end='')
        else:
            print('G',end='')
    print()