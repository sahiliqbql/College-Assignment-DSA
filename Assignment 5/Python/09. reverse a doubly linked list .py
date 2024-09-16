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

def reverse(head):
    length = 0
    ptr = head
    while ptr.next:
        length += 1
        ptr = ptr.next

    str_ptr = head
    i = 0
    j = length + 1
    while i < j:
        temp = ptr.val
        ptr.val = str_ptr.val
        str_ptr.val = temp
        str_ptr = str_ptr.next
        ptr = ptr.prev
        i += 1
        j -= 1

if __name__ == "__main__":
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

    print("Before: ", end="")
    traversal(head)
    reverse(head)
    print("After: ", end="")
    traversal(head)

# Output:
# Before: 1 2 3 4 
# After: 4 3 2 1 
