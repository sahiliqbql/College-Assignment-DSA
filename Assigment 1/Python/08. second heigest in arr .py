
arr = [1,2,3,4,5,6,7,8,9]

max = arr[0]
smax = arr[0]

for i in range(0,len(arr)):
    if(arr[i]>max):
        smax = max
        max = arr[i]

print("second max =",smax)
