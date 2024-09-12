list1 = ["a","b","c","d"]
list2 = [1,2,3,4]
list3 = []
for i,j in zip(list1,list2):
    list3.append(i+str(j))

print(list3)