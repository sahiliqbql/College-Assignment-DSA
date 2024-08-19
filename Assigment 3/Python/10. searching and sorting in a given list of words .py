m = int(input("number of words = "))
s = [[]*100 for _ in range(m)]

print(f"enter {m} words: \n")
for i in range(m):
    s[i] = input()

for i in range(m-1):
    for j in range((m-1)-i):
        if(s[i]>s[i+1]):
            t = s[i]
            s[i] = s[i+1]
            s[i+1] = t

print("after sorting: \n")
for i in range(m):
    print(s[i]+"\n")

p = input("enter a word: ")
z=0
for i in range(m):
    if(p==s[i]):
        print(f"{p} found in idx {i}")
        z+=1
        break
if(z==0):
    print(f"{p} not found")