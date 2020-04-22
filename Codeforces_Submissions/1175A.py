t=int(input())
while t>0:
    n,k=map(int,input().split())
    s=0
    while n!=0:
        if n<k:
            s+=n
            n-=n
        elif n%k==0:
            n=n//k
            s+=1
        elif n%k!=0:
            s=s+(n%k)+1
            n=n//k
    print(s)
    t-=1