
arr = [[1, 1, 1, 1, 1],
       [2, 2, 2, 2, 2],
       [3, 3, 3, 3, 3],
       [4, 4, 4, 4, 4],
       [5, 5, 5, 5, 5]]

m = int(input("enter row 1: "))
n = int(input("rnter row 2: "))

m-=1
n-=1

for i in range(5):
    t = arr[n][i]
    arr[n][i] = arr[m][i]
    arr[m][i] = t

print(arr)
