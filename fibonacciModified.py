t0,t1,n=map(int,input().split())
result=[0]*1000
result[1]=t0
result[2]=t1
for i in range(3,n+1):
    result[i]=result[i-2]+result[i-1]*result[i-1]

print(result[n])    


