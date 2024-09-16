
class node:
    def __init__(self,n):
        self.val=n
        self.prev=None
        self.next=None

head = node(1)
snd = node(2)
trd = node(3)
four = node(4)

head.prev = four;
head.next = snd;

snd.prev = head;
snd.next = trd;
    
trd.prev = snd;
trd.next = four;

four.prev = trd;
four.next = head;

ptr = head
while True:
    print(ptr.val,end=" ")
    ptr = ptr.next
    if(ptr==head):
        break



# OUTPUT:
# 1 2 3 4
