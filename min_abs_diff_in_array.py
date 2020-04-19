#!/bin/python3

import math
import os
import random
import re
import sys

def minimumAbsoluteDifference(arr):
    diffs = []
    arr.sort()
    for i in range(len(arr)-1):
        diffs.append(abs(arr[i]-arr[i+1]))
    return min(diffs)

n = int(input())
arr = list(map(int, input().rstrip().split()))
result = minimumAbsoluteDifference(arr)
print(result)
