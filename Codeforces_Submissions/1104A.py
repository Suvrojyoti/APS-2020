n=int(input())
i=max(min(9,n-1),1)
while i>0:
    if n%i==0:
        print(n//i)
        a=[i for j in range((n//i))]
        for k in range(len(a)):
            print(a[k],end=" ")
        print()
        break
    i-=1