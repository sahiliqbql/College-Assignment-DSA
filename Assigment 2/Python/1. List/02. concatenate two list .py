list1 = ["a","b","c","d"]
list2 = [1,2,3,4]

list3 = []

for i in range(len(list1)):
    list3.append(list1[i]+str(list2[i])) 

print(list3)