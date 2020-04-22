for _ in range(int(input())):
    n=int(input())
    a=[int(o) for o in input().split()]
    kk=1
    ans=[0]*n
    i=2
    while(i<=1000):
        flag=0
        for j in range(n):
            if ans[j]==0 and a[j]%i==0:
                ans[j]=kk
                flag=1
        if flag==1:
            kk+=1
        i+=1
    kk-=1
    print(kk)
    print(*ans)