
class node:
    def __init__(self,val):
        self.val = val
        self.next = None

head = node(1)
snd = node(2)
trd = node(3)
four = node(4)

head.next = snd
snd.next = trd
trd.next = four
four.next = head

ptr = head
while True:
    print(ptr.val,end=" ")
    ptr = ptr.next
    if(ptr==head):
        break


# OUTPUT:
# 1 2 3 4
