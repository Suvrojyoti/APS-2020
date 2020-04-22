n=int(input())
s=input()
xx=[0]*n
if s.count("1")!=s.count("0"):
    print("1")
    print(s)
elif n==1:
    print("1")
    print(s)
else:
    print("2")
    s=list(s)
    print("".join(s[:1]),"".join(s[1:]))