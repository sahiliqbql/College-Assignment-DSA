arr = [[1,2,3],[4,5,6],[7,8,9]];
s=0
for i in range(len(arr)):
    for j in range(len(arr[0])):
        if(i==j):
            s+=arr[i][j]
print("sum = ",s);
