n=int(raw_input())
arr=[int(o) for o in raw_input().split()]
darr=[0]*n
darr[0]=200000
dhondu=[i for i in range(n)]
for i in range(1,n):
    dhondu[i]=arr[i-1]+darr[i-1]
    darr[i]=arr[i-1]+darr[i-1]
mindi=min(darr)
for i in range(n):
    dhondu[i]=0
    darr[i]=darr[i]-(mindi-1)
ldarr=len(set(darr))
dhondu=sorted(dhondu)
if ldarr==n :
    if max(darr)==n:
        for j in range(len(darr)):
            print darr[j],
            
    else:
        print("-1")
else:
    print("-1")