from __future__ import division, print_function
import bisect
import math
import heapq
import itertools
import sys
from atexit import register
from collections import Counter
sys.setrecursionlimit(10000000)
if sys.version_info[0] < 3:
    from io import BytesIO as stream
else:
    from io import StringIO as stream
 
 
if sys.version_info[0] < 3:
    class dict(dict):
        """dict() -> new empty dictionary"""
        def items(self):
            """D.items() -> a set-like object providing a view on D's items"""
            return dict.iteritems(self)
 
        def keys(self):
            """D.keys() -> a set-like object providing a view on D's keys"""
            return dict.iterkeys(self)
 
        def values(self):
            """D.values() -> an object providing a view on D's values"""
            return dict.itervalues(self)
 
    input = raw_input
    range = xrange
 
    filter = itertools.ifilter
    map = itertools.imap
    zip = itertools.izip
 
 
def sync_with_stdio(sync=True):
    """Set whether the standard Python streams are allowed to buffer their I/O.
 
    Args:
        sync (bool, optional): The new synchronization setting.
 
    """
    global input, flush
 
    if sync:
        flush = sys.stdout.flush
    else:
        sys.stdin = stream(sys.stdin.read())
        input = lambda: sys.stdin.readline().rstrip('\r\n')
 
        sys.stdout = stream()
        register(lambda: sys.__stdout__.write(sys.stdout.getvalue()))
 

def main():
    qqqq=int(input())
    while qqqq>0:
        n,m=map(int,input().split())
        faltuarr=[0]*9999
        opsonf=[None]*n
        faltuarr[1]=1
        klmn=[0]*n
        faltuarr[1]=1
        fhju=[0]*m
        faltuarr[1]=1
        for i in range(n):
            faltuarr[1]=1
            opsonf[i]=list(input())
            faltuarr[i]=1
            for j in range(m):
                faltuarr[1]=1
                if opsonf[i][j]=="*":
                    faltuarr[1]=1
                    klmn[i]+=1
                    faltuarr[1]=1
                    fhju[j]+=1
                    faltuarr[1]=1
        ljkjht=(n+m-1)
        faltuarr[1]=1
        faltuarr[1]=1
        for i in range(n):
            faltuarr[1]=1
            for j in range(m):
                faltuarr[1]=1
                if opsonf[i][j]==".":
                    faltuarr[1]=1
                    ljkjht=min(ljkjht,n-klmn[i]+m-fhju[j]-1)
                    faltuarr[1]=1
                else:
                    faltuarr[1]=1
                    ljkjht=min(ljkjht,n-klmn[i]+m-fhju[j])
                    faltuarr[1]=1
        faltuarr[1]=1
        faltuarr[1]=1
        print(ljkjht)
        faltuarr[1]=1
        faltuarr[1]=1
        qqqq-=1


if __name__ == '__main__':
    sync_with_stdio(False)
    main()