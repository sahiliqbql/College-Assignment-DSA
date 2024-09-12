class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def create_node(n):
    return Node(n)

def push(head, n):
    new_node = Node(n)
    if not head:
        return new_node
    ptr = head
    while ptr.next:
        ptr = ptr.next
    ptr.next = new_node
    return head

def left_shift(head, k):
    if head is None or head.next is None or k <= 0:
        return head

    length = 1
    last = head
    while last.next:
        last = last.next
        length += 1

    last.next = head

    k = k % length
    new_last = head
    for _ in range(length - k - 1):
        new_last = new_last.next

    new_head = new_last.next
    new_last.next = None

    return new_head

def traversal(head):
    ptr = head
    while ptr:
        print(f"{ptr.val} --> ", end="")
        ptr = ptr.next
    print("NULL")

if __name__ == "__main__":
    head = create_node(2)
    head = push(head, 4)
    head = push(head, 7)
    head = push(head, 8)
    head = push(head, 9)

    print("Original list:")
    traversal(head)

    k = int(input("Enter k: "))
    head = left_shift(head, k)

    print("List after left shift:")
    traversal(head)

# OUTPUT:
# Original list:
# 2 --> 4 --> 7 --> 8 --> 9 --> NULL
# Enter k: 3
# List after left shift:
# 7 --> 8 --> 9 --> 2 --> 4 --> NULL
