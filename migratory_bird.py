import math
import os
import random
import re
import sys

def migratoryBirds(arr):
    bird_dict={1:0,2:0,3:0,4:0,5:0}
    for i in arr:
        bird_dict[i]+=1;
    return(max(bird_dict,key=bird_dict.get))

arr_count = int(input().strip())
arr = list(map(int, input().rstrip().split()))
result = migratoryBirds(arr)
print(result)
   
