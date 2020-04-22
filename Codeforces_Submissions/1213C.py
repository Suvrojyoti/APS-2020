from __future__ import division, print_function
import bisect
import math
import heapq
import itertools
import sys
from collections import deque
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
def mergeSort(arr, n): 
    # A temp_arr is created to store 
    # sorted array in merge function 
    temp_arr = [0]*n 
    return _mergeSort(arr, temp_arr, 0, n-1) 
  
# This Function will use MergeSort to count inversions 
  
def _mergeSort(arr, temp_arr, left, right): 
  
    # A variable inv_count is used to store 
    # inversion counts in each recursive call 
  
    inv_count = 0
  
    # We will make a recursive call if and only if 
    # we have more than one elements 
  
    if left < right: 
  
        # mid is calculated to divide the array into two subarrays 
        # Floor division is must in case of python 
  
        mid = (left + right)//2
  
        # It will calculate inversion counts in the left subarray 
  
        inv_count = _mergeSort(arr, temp_arr, left, mid) 
  
        # It will calculate inversion counts in right subarray 
  
        inv_count += _mergeSort(arr, temp_arr, mid + 1, right) 
  
        # It will merge two subarrays in a sorted subarray 
  
        inv_count += merge(arr, temp_arr, left, mid, right) 
    return inv_count 
  
# This function will merge two subarrays in a single sorted subarray 
def merge(arr, temp_arr, left, mid, right): 
    i = left     # Starting index of left subarray 
    j = mid + 1 # Starting index of right subarray 
    k = left     # Starting index of to be sorted subarray 
    inv_count = 0
  
    # Conditions are checked to make sure that i and j don't exceed their 
    # subarray limits. 
  
    while i <= mid and j <= right: 
  
        # There will be no inversion if arr[i] <= arr[j] 
  
        if arr[i] <= arr[j]: 
            temp_arr[k] = arr[i] 
            k += 1
            i += 1
        else: 
            # Inversion will occur. 
            temp_arr[k] = arr[j] 
            inv_count += (mid-i + 1) 
            k += 1
            j += 1
  
    # Copy the remaining elements of left subarray into temporary array 
    while i <= mid: 
        temp_arr[k] = arr[i] 
        k += 1
        i += 1
  
    # Copy the remaining elements of right subarray into temporary array 
    while j <= right: 
        temp_arr[k] = arr[j] 
        k += 1
        j += 1
  
    # Copy the sorted subarray into Original array 
    for loop_var in range(left, right + 1): 
        arr[loop_var] = temp_arr[loop_var] 
          
    return inv_count 
def main():
    for _ in range(int(input())):
        n,m=map(int,input().split())
        if n<m:
            print(0)
            continue
        kjhbf=m
        arr=[0]*1000
        arr[0]=1
        kfhitygtn=kjhbf
        s=set()
        arr[0]=1
        for i in range(100000):
            if int(str(m)[-1]) in s:
                arr[0]=1
                break
            else:
                s.add(int(str(m)[-1]))
                arr[0]=1
                m+=kjhbf
        ls=len(s)
        arr[0]=1
        irturh=(n//kfhitygtn)//ls
        ytyt=(sum(s)*irturh)
        arr[0]=1
        itygt=(n//kfhitygtn)%ls
        arr[0]=1
        for i in range(itygt):
            arr[0]=1
            ytyt+=int(str(kjhbf)[-1]) 
            arr[0]=1
            kjhbf+=kfhitygtn
        arr[0]=1
        print(ytyt)
        arr[0]=1
if __name__ == '__main__':
    sync_with_stdio(False)
    main()