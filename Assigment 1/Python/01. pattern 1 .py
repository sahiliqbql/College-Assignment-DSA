n = int(input("enter a num: "))
t = 1;
for i in range(1,n+1):
    for j in range(n,i,-1):
        print(" ",end="")
    for k in range(0,i):
        if(t%2==0):
            print("#",end=" ")
            t+=1
        else:
            print("*",end=" ")
            t+=1
    print("\n")
    