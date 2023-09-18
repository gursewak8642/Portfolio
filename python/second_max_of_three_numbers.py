t=int(input())
for _ in range(t):
    a,b,c=map(int,input().split())

    if (a<b and a>c) or (a<c and a>b):
        print(a)
    elif (b>c and b<a) or (b>a and b<c):
        print(b)
    else:
        print(c)
