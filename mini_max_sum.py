import itertools
lst=[]
def compute(userList):
        comb = itertools.combinations(userList,4)
        for i in comb:
            sum=0
            for j in i:
                sum=sum+int(j)
            lst.append(sum)
            

input_string = input()
userList = input_string.split()
compute(userList)

print(min(lst),max(lst))

