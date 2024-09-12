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

def reverse(head):
    prev = None
    curr = head
    while curr:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node
    return prev

def traversal(head):
    ptr = head
    while ptr:
        print(f"{ptr.val} --> ", end="")
        ptr = ptr.next
    print("NULL")

if __name__ == "__main__":

    head = create_node(1)
    head = push(head, 2)
    head = push(head, 3)
    head = push(head, 4)
    head = push(head, 5)

    print("Original list:")
    traversal(head)

    head = reverse(head)

    print("Reversed list:")
    traversal(head)


# OUTPUT:
# Original list:
# 1 --> 2 --> 3 --> 4 --> 5 --> NULL
# Reversed list:
# 5 --> 4 --> 3 --> 2 --> 1 --> NULL
