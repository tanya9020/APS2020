#!/bin/python3

import math
import os
import random
import re
import sys
import math

from collections import Counter 

def sockMerchant(n, ar):
    cnt = Counter(ar) 
    m=list(set(cnt))
    l=0
    for x in m:
        if(cnt[x]>1):
            l+=math.floor(cnt[x]/2)
    return (l)

n = int(input())
ar = list(map(int, input().rstrip().split()))
result = sockMerchant(n, ar)
print(result)

