
s = input("enter name: ")

print(s[0].upper(),end="")

i = 1
while(i<len(s)):
    if(s[i]==" "):
        print("."+s[i+1].upper(),end="")
    i+=1
