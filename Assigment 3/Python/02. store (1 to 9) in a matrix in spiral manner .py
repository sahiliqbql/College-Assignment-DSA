# 1 2 3
# 8 9 4
# 7 6 5

m = int(input("enter row: "))
n = int(input("enter column: "))

arr = [[0]*n for _ in range(m)]

top = 0
left = 0
bottum = m-1
right = n-1

a=1;
while top<=bottum and left<=right:
    for i in range(left,right+1):
        arr[top][i] = a
        a+=1
    top+=1

    for i in range(top,bottum+1):
        arr[i][right] = a
        a+=1
    right-=1

    if(top<=bottum):
        for i in range(right,left-1,-1):
            arr[bottum][i] = a
            a+=1
        bottum-=1   
    if(left<=right):
        for i in range(bottum,top-1,-1):
            arr[i][left] = a
            a+=1
        left+=1

for i in range(m):
    for j in range(n):
        print(arr[i][j],end=" ")
    print("\n")

