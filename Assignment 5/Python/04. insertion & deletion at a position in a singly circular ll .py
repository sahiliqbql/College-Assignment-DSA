
class node:
    def __init__(self,val):
        self.val = val
        self.next = None

def insertion(head, val, pos):
    nn = node(val)
    ptr = head;
    if(pos==1):
        while ptr.next!=head:
            ptr = ptr.next
        ptr.next = nn
        nn.next = head
        return nn
    
    for i in range(2,pos):
        ptr = ptr.next

    nn.next = ptr.next
    ptr.next = nn
    return head


def deletion(head,pos):
    ptr = head
    if(pos==1):
        while(ptr.next!=head):
            ptr = ptr.next;
        
        ptr.next = head.next
        head.next = None
        return ptr.next
    
    for i in range(2,pos):
        ptr = ptr.next

    temp = ptr.next
    ptr.next = ptr.next.next
    temp.next = None
    return head


def display(head):
    ptr = head
    while True:
        print(ptr.val,end=" ")
        ptr = ptr.next
        if(ptr==head):
            break
    print("\n")

head = node(1)
snd = node(2)
trd = node(3)
four = node(4)

head.next = snd
snd.next = trd
trd.next = four
four.next = head

print("before: ")
display(head)

print("After: ")
head = insertion(head,99,4)
display(head)

deletion(head,4)
print("after deletion: ")
display(head)



# OUTPUT:
# before:
# 1 2 3 4
# After:
# 1 2 3 99 4
# after deletion:
# 1 2 3 4
