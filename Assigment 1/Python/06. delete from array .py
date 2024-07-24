arr = [0,1,2,3,4,5,6,7]

print(arr)

n = int(input("enter idx to delete: "))
for i in range(n,len(arr)-1):
    arr[i] = arr[i+1]

arr.pop()

print(arr)
