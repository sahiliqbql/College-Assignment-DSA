class Node:
    def __init__(self, val):
        self.prev = None
        self.val = val
        self.next = None

def traversal(head):
    ptr = head
    print("NULL <--", end="")
    while ptr:
        print(f" {ptr.val} ", end="")
        ptr = ptr.next
        if ptr:
            print("<--> ", end="")
    print("--> NULL")

def insertion(head, val, pos):
    nn = Node(val)
    ptr = head
    if pos == 1:
        nn.next = ptr
        ptr.prev = nn
        return nn
    for _ in range(2, pos):
        ptr = ptr.next
    nn.next = ptr.next
    nn.prev = ptr
    ptr.next = nn
    return head

def deletion(head, pos):
    ptr = head
    if pos == 1:
        ptr = head.next
        ptr.prev = None
        head.next = None
        del head
        return ptr
    for _ in range(2, pos):
        ptr = ptr.next
    temp = ptr.next
    if temp is None:  # if temp is the last node
        ptr.next = None
    else:
        ptr.next = temp.next
        if temp.next is not None:
            temp.next.prev = ptr
    temp.next = None
    temp.prev = None
    del temp
    return head

head = Node(1)
snd = Node(2)
trd = Node(3)
four = Node(4)

head.prev = None
head.next = snd

snd.prev = head
snd.next = trd

trd.prev = snd
trd.next = four

four.prev = trd
four.next = None

head = insertion(head, 99, 5)
traversal(head)

head = deletion(head, 3)
traversal(head)



# OUTPUT:
# NULL <-- 1 <-->  2 <-->  3 <-->  4 <-->  99 --> NULL
# NULL <-- 1 <-->  2 <-->  4 <-->  99 --> NULL
