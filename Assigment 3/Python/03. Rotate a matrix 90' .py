#  1  2  3  4             
#  5  6  7  8
#  9 10 11 12 
# 13 14 15 16

# 13 9  5 1
# 14 10 6 2
# 15 11 7 3
# 16 12 8 4



arr  = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]

arr2 = [[0]*4 for _ in range(4)]

c=0

for i in range(4):
    d=3
    for j in range(4):
        arr2[i][j] = arr[d][c]
        d-=1
    c+=1
    

arr = arr2

print(arr)

