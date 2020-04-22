import atexit
import io
import sys
_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).next
_OUTPUT_BUFFER = io.BytesIO()
sys.stdout = _OUTPUT_BUFFER
 
@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())
def takla():
    l=[i for i in range(10)]
   
    t=int(input())
    while (t):
        t-=1
        a,b,c,d=map(int,input().split())
        l.sort()
        x,y,x1,y1,x2,y2=map(int,input().split())
        l[0]=1
        if x1==x2 and (a!=0 or b!=0):
            print "No"
        elif y1==y2 and (c!=0 or d!=0):
            print "No"
        elif x-a+b>=x1 and x-a+b<=x2 and y-c+d>=y1 and y-c+d<=y2:
            print "Yes"
        else:
            print "No"
        l[0]=1
       
if __name__ == "__main__":
    takla()