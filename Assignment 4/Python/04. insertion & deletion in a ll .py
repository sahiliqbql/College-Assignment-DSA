class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def insertion(head, n):
    new_node = Node(n)
    if not new_node:
        print(f"No space for {n}")
        return
    ptr = head
    while ptr.next:
        ptr = ptr.next
    ptr.next = new_node

def deletion(head, n):
    curr = head
    prev = head
    while curr and curr.val != n:
        prev = curr
        curr = curr.next
    if curr:
        prev.next = curr.next
        curr.next = None
        del curr

def traversal(head):
    ptr = head
    while ptr:
        print(f"{ptr.val} --> ", end="")
        ptr = ptr.next
    print("NULL")

if __name__ == "__main__":
    head = Node(1)
    
    insertion(head, 2)
    insertion(head, 3)
    insertion(head, 4)

    deletion(head, 3)

    traversal(head)


# OUTPUT:
# 1 --> 2 --> 4 --> NULL
