from collections import Counter
n=int(input())
a=[int(o) for o in input().split()]
ndjn=a[:]
hjfdgysj=a[:]
ndjn.sort()
a=sorted(a)
maxele=a[-1]
secondary_arr=[]
dicarr=dict(Counter(a))
lol=[]
for i in range(len(a)):
    if dicarr[a[i]]==2:
        lol.append(a[i])
    if maxele%(a[i])!=0:
        secondary_arr.append(a[i])
try:
    print(maxele,secondary_arr[-1])
except:
    print(maxele,lol[-1])