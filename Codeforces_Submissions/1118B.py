n=int(input())

a=[int(popp) for popp in input().split()]
even_array=[0]*(n+5)
array_of_odd_numbers=[0]*(n+5)

sums_of_takla=0
b=a[::-1]
array_of_sums=[0]*n
#a.sort()
#print(a)
even_array=[0]*(n+5)
array_of_odd_numbers=[0]*(n+5)
sums_of_takla=0
sums_of_ganja=0
for i in range(n):
    if i%2==0:
        #b[i]=0
        sums_of_takla+=a[i]
        b[i]=0
        array_of_sums[i]=sums_of_takla
        array_of_odd_numbers[i]=sums_of_ganja
        even_array[i]=sums_of_takla
        
    else:
        b[i]=0
        sums_of_ganja+=a[i]
        b[i]=0
        array_of_sums[i]=sums_of_ganja
        array_of_odd_numbers[i]=sums_of_ganja
        b[i]=1
        even_array[i]=sums_of_takla
        
answer=0
for i in range(n):
    if i%2==0:
        if sums_of_takla-even_array[i]+array_of_odd_numbers[i-1]==sums_of_ganja-array_of_odd_numbers[i-1]+even_array[i-1]:
            b[i]=a[i]
            answer+=1
    else:
        if sums_of_ganja-array_of_odd_numbers[i]+even_array[i-1]==sums_of_takla-even_array[i-1]+array_of_odd_numbers[i-1]:
            b[i]=0
            answer+=1
print(answer)