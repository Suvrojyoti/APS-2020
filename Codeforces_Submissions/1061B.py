n,m=map(int,input().split())
a=[int(o) for o in input().split()]
a=sorted(a)
b=[]
u=0
s=sum(a)
l=0
k=0
d=0
for i in range(n):
    l=a[i]
    d+=a[i]-u
    if d<=i:
        d+=1
    #print(d)
    u=a[i]
    
print(s-d)