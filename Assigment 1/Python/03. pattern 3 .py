a = 1
n = int(input("enter row: "))
for i in range (1,n+1):
    print(" "*(n-i),end="")
    for j in range(0,i):
        print(a,end=" ")
        a+=1
    print("\n")
