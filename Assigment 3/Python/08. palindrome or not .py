
s = input("enter a word: ")

z = len(s)-1
p = 0
i = 0

while i<z :
    if(s[i]!=s[z]):
        print("not palindrome")
        z-=1
        p+=1
        break

if(p==0):
    print("palindrome")
