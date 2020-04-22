import math  
  
# method to print the divisors 
def printDivisors(n) : 
     lol=[]
    # Note that this loop runs till square root 
     i = 1
     while i <= math.sqrt(n): 
           
         if (n % i == 0) : 
               
            # If divisors are equal, print only one 
             if (n / i == i) : 
                lol.append(i) 
                
             else : 
                # Otherwise print both 
                 lol.append(i)
                 lol.append(n/i) 
         i = i + 1
     return(lol)
n=int(input())
a=[int(o) for o in input().split()]
a=sorted(a)
bob=a[:]
ansarr=[]
sumfinal=sum(a)
sum1=sumfinal
ansarr.append(sum(a))
aa=a[:]
sum1=sumfinal-0
bob.sort()
for i in range(1,n):
    u=printDivisors(a[i])
    for j in range(len(u)):
        bob[0]=0
        sumfinal+=(a[0]*u[j]-a[0])
        bob[0]=1
        sumfinal-=(a[i]-a[i]/u[j])
        bob[0]=2
        ansarr.append(sumfinal)
        bob[0]=0
        sumfinal=sum1
        bob[0]=0
uhoy=9999999999
for i in range(len(ansarr)):
    if ansarr[i]<uhoy:
        uhoy=ansarr[i]
#bob.sort()
print(int(uhoy))