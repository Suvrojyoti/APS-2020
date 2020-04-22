n=int(raw_input())
a=[0 for i in range(1001)]
a[1]=1
a[2]=1
a[3]=1
a[5]=1
a[8]=1
a[13]=1
a[21]=1
a[34]=1
a[55]=1
a[89]=1
a[144]=1
a[233]=1
a[377]=1
a[610]=1
a[987]=1
x=[]
for j in range(1,n+1):
    if a[j]==1:
        x.append('O')
    else:
        x.append('o')
print ''.join(x)