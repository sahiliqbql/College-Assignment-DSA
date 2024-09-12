
class time:
    def __init__ (self,h,m,s):
        self.h = h
        self.m = m
        self.s = s

def diff(start,end):
    while end.s<start.s:
        end.s+=60
        end.m-=1
    while end.m<start.m:
        end.m+=60
        end.h-=1
    
    diff_h = end.h-start.h
    diff_m = end.m-start.m
    diff_s = end.s-start.s

    ans = diff_h * 3600 + diff_m * 60 + diff_s
    return ans


start = time(int(input("h1: ")),
             int(input("m1: ")),
             int(input("s1: ")))
end = time(int(input("h2: ")),
             int(input("m2: ")),
             int(input("s2: ")))

ans = diff(start,end)
print("ans = ",ans)



# OUTPUT:
# h1: 3
# m1: 4
# s1: 5
# h2: 6
# m2: 7
# s2: 8
# ans =  10983 
