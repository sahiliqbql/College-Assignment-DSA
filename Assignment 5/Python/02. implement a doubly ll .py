
class node:
    def __init__(self,v):
        self.val = v
        self.prev = None
        self.next = None

head = node(1)
snd = node(2)
trd = node(3)
four = node(4)

head.prev = None
head.next = snd

snd.prev = head
snd.next = trd

trd.prev = snd
trd.next = four

four.prev = trd
four.next = None


ptr = head
while ptr:
    print(ptr.val,end=" ")
    ptr = ptr.next


# OUTPUT:
# 1 2 3 4 
