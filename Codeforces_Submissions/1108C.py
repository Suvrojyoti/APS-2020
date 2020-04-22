import math
n=int(input())
yo=int(math.ceil(n/3))
s=input()
s=list(s)
fkaa=["R","G","B"]*yo
slaa=["R","B","G"]*yo
tl=["G","R","B"]*yo
cl=["G","B","R"]*yo
plaa=["B","R","G"]*yo
chl=["B","G","R"]*yo
fc=0
sc=0
tc=0
cc=0
pc=0
chc=0
for i in range(n):
    if fkaa[i]!=s[i]:
        fc+=1
    if slaa[i]!=s[i]:
        sc+=1
    if tl[i]!=s[i]:
        tc+=1
    if cl[i]!=s[i]:
        cc+=1
    if plaa[i]!=s[i]:
        pc+=1
    if chl[i]!=s[i]:
        chc+=1
zol=[fc,sc,tc,cc,pc,chc]
lol=min(zol)
ind=zol.index(lol)
if ind==0:
    print(fc)
    fkaa=fkaa[:n]
    print("".join(fkaa))
elif ind==1:
    print(sc)
    slaa=slaa[:n]
    print("".join(slaa))
elif ind==2:
    print(tc)
    tl=tl[:n]
    print("".join(tl))
elif ind==3:
    print(cc)
    cl=cl[:n]
    print("".join(cl))
elif ind==4:
    print(pc)
    plaa=plaa[:n]
    print("".join(plaa))
elif ind==5:
    print(chc)
    chl=chl[:n]
    print("".join(chl))