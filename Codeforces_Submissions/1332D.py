n=int(input())
B=[0]*4
for i in range(4):
    B[i]=[0]*4
x=18
B[0][0] = (1 << x) - 1
for i in range(4):
    for j in range(4):
        B[i][j]=B[0][0]
B[1][1] = (1<<(x-1))-1
B[2][0]= B[1][1]+1
B[1][2] =2* B[2][0]
B[2][2]=n
print(3,3)
for i in range(3):
    for j in range(3):
        print(B[i][j],end=" ")
    print()