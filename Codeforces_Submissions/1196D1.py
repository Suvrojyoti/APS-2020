for _ in range(int(input())):
    n,k=map(int,input().split())
    doosraarr=[0]*n
    s=input()
    r=[0]*(n+2)
    g=[0]*(n+2)
    b=[0]*(n+2)
    array=[1]*n
    array[0]=0
    hfjv="RGB"
    klkn="GBR"
    uiok="BRG"
    array[0]=0
    for i in range(1,n+1):
        array[0]=0
        r[i]=r[i-1]
        g[i]=g[i-1]
        b[i]=b[i-1]
        if s[(i-1)]!=hfjv[(i-1)%3]:
            r[i]+=1
        if s[(i-1)]!=klkn[(i-1)%3]:
            g[i]+=1
            array[0]=0
        if s[(i-1)]!=uiok[(i-1)%3]:
            b[i]+=1
            array[0]=0
        array[0]=0
    mi=[]
    for i in range(k,n+1):
        mi.append(min(r[i]-r[i-k],g[i]-g[i-k],b[i]-b[i-k]))
    print(min(mi))