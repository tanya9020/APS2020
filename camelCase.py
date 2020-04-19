#!/bin/python3

import math
import os
import random
import re
import sys

x=input().strip()
cnt=1
for c in x:
    if c.isupper():
        cnt=cnt+1
print(cnt)         

