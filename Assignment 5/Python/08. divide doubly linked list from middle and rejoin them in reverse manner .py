class Node:
    def __init__(self, val):
        self.prev = None
        self.val = val
        self.next = None

def traversal(head):
    ptr = head
    while ptr:
        print(ptr.val, end=" ")
        ptr = ptr.next
    print()

def divide_print(head):
    length = 0
    ptr = head
    while ptr:
        length += 1
        ptr = ptr.next

    ptr = head
    for _ in range(length // 2):
        ptr = ptr.next

    snd = ptr.next
    ptr.next = None
    snd.prev = None

    while snd.next:
        snd = snd.next

    snd.next = head
    head.prev = snd

    while ptr:
        print(ptr.val, end=" ")
        ptr = ptr.prev
    print()

if __name__ == "__main__":
    head = Node(1)
    snd = Node(2)
    trd = Node(3)
    four = Node(4)
    five = Node(5)
    six = Node(6)

    head.prev = None
    head.next = snd

    snd.prev = head
    snd.next = trd

    trd.prev = snd
    trd.next = four

    four.prev = trd
    four.next = five

    five.prev = four
    five.next = six

    six.prev = five
    six.next = None

    print("Original list: ", end="")
    traversal(head)
    print("Divided list: ", end="")
    divide_print(head)


# OUTPUT:
# Original list: 1 2 3 4 5 6 
# Divided list: 6 5 4 3 2 1 
