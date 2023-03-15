n=int(input())
arr=list(map(int,input().split()))
c=0
num=arr[0]
for i in range(1,n):
    if num!=arr[i]:
        c+=1
print(c)            