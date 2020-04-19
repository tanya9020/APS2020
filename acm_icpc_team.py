import itertools

def acmTeam(topics):
    comb = itertools.combinations(topics,2)
    maX = 0
    count = 0
    for i in comb:
        n=str(bin(int(i[0], 2) | int(i[1], 2))).count('1')
        if n > maX:            
            maX = n
            count = 1
        elif n == maX:
            count += 1
    return (maX, count)

n,m = map(int,input().split()) 
topics = [] 
  
for i in range(0, n): 
    ele = input() 
    topics.append(ele) 

z,l=acmTeam(topics)      
print(z)
print(l)
#print(type(topics[0])) 





