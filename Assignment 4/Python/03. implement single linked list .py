class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

head = Node(1)
snd = Node(2)
trd = Node(3)

head.next = snd
snd.next = trd

ptr = head
while ptr:
    print(f"{ptr.val} --> ", end="")
    ptr = ptr.next
print("NULL")


# OUTPUT:
# 1 --> 2 --> 3 --> NULL
