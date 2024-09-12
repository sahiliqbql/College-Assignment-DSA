class data:
    def __init__(self,h,w):
        self.h = h
        self.w = w

def maxRatio(arr):
    max_ratio = arr[0].w/arr[0].h
    idx = 0
    for i in range(1, len(arr)):
        current_ratio = arr[i].w / arr[i].h
        if current_ratio > max_ratio:
            max_ratio = current_ratio
            idx = i
    print(f"Student {idx + 1} has the max ratio (w/h) = {max_ratio}")

n = int(input("Enter the number of students: "))

arr = []
for i in range(n):
    height = int(input(f"Enter height (cm) of student {i + 1}: "))
    weight = int(input(f"Enter weight (kg) of student {i + 1}: "))
    arr.append(data(height, weight))

maxRatio(arr)


# OUTPUT:
# Enter the number of students: 3
# Enter height (cm) of student 1: 12
# Enter weight (kg) of student 1: 23
# Enter height (cm) of student 2: 2
# Enter weight (kg) of student 2: 45
# Enter height (cm) of student 3: 34
# Enter weight (kg) of student 3: 56
# Student 2 has the max ratio (w/h) = 22.5
