arr = [1,2,3,4]

print("old arr:")
for i in range(0,len(arr)):
    print(arr[i],end=" ")
print("\n")

n = int(input("enter idx: "))
v = int(input("enter val: "))

arr.append(None)
for i in range(len(arr)-1,n,-1):
    arr[i] = arr[i-1]

arr[n] = v

for i in range(0,len(arr)):
    print(arr[i],end=" ")
