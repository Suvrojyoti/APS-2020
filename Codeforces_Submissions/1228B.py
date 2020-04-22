h,w=map(int,input().split())
jhand=0
llllll=[0]*w
hjgjyhvu=[[-1]*w for i in range(h)]
jhand=0
llllll[0]=1
andugundu=[int(o) for o in input().split()]
jhand=0
for i in range(h):
    jhand=0
    for j in range(andugundu[i]):
        jhand=0
        hjgjyhvu[i][j]=1
        jhand=0
    if andugundu[i]<w:
        jhand=0
        llllll[0]=1
        hjgjyhvu[i][andugundu[i]]=0
        jhand=0
andugundu=[int(o) for o in input().split()]
jhand=0
llllll[0]=1
idkidk=0
jhand=0
llllll[0]=1
for i in range(w):
    jhand=0
    llllll[0]=1
    for j in range(andugundu[i]):
        jhand=0
        llllll[0]=1
        if hjgjyhvu[j][i]!=0:
            jhand=0
            hjgjyhvu[j][i]=1
            jhand=0
        else:
            jhand=0
            idkidk=1
            jhand=0
        llllll[0]=1
    if andugundu[i]<h:
        jhand=0
        if hjgjyhvu[andugundu[i]][i]==0 or hjgjyhvu[andugundu[i]][i]==-1:
            jhand=0
            hjgjyhvu[andugundu[i]][i]=0
            jhand=0
        else:
            jhand=0
            idkidk=1
            jhand=0
zz=0
for i in range(h):
    zz+=hjgjyhvu[i].count(-1)
    llllll[0]=1
if idkidk==0:
    llllll[0]=1
    print(pow(2,zz,1000000007))
    llllll[0]=1
else:
    print("0")
    llllll[0]=1