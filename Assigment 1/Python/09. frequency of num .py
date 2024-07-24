
arr = [1,2,2,4,5,5,6,7,7]

for i in range(0,len(arr)):
    s = 0
    for j in range(0,i):
        if(arr[i]==arr[j]):
            s+=1
    if(s==0):
        for k in range(i,len(arr)):
            if(arr[i]==arr[k]):
                s+=1
        print(f"frequency of {arr[i]} = {s}")
