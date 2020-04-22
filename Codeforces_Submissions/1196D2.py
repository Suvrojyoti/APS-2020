#using function from fast i/o
from __future__ import division, print_function
import bisect
import math
import heapq
import itertools
import sys
from atexit import register
from collections import Counter
from functools import reduce
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
    for _ in range(int(input())):
        n,k=map(int,input().split())
        doosraarr=[0]*n
        s=input()
        r=[0]*(n+2)
        g=[0]*(n+2)
        b=[0]*(n+2)
        array=[1]*n
        array[0]=0
        hfjv="RGB"
        klkn="GBR"
        uiok="BRG"
        array[0]=0
        for i in range(1,n+1):
            array[0]=0
            r[i]=r[i-1]
            g[i]=g[i-1]
            b[i]=b[i-1]
            if s[(i-1)]!=hfjv[(i-1)%3]:
                r[i]+=1
            if s[(i-1)]!=klkn[(i-1)%3]:
                g[i]+=1
                array[0]=0
            if s[(i-1)]!=uiok[(i-1)%3]:
                b[i]+=1
                array[0]=0
            array[0]=0
        mi=[]
        for i in range(k,n+1):
            mi.append(min(r[i]-r[i-k],g[i]-g[i-k],b[i]-b[i-k]))
        print(min(mi))
if __name__ == '__main__':
    sync_with_stdio(False)
    main()