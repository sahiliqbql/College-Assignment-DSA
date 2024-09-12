class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def create_node(n):
    return Node(n)

def is_loop(head):
    slow = head
    fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True
    return False

def traversal(head):
    ptr = head
    while ptr:
        print(f"{ptr.val} --> ", end="")
        ptr = ptr.next
    print("NULL")

if __name__ == "__main__":
    head = create_node(1)
    snd = create_node(2)
    trd = create_node(3)
    four = create_node(4)

    head.next = snd
    snd.next = trd
    trd.next = four
    four.next = snd  # Create a loop

    if is_loop(head):
        print("Loop found")
    else:
        print("No loop")
        traversal(head)


# OUTPUT:
# Loop found
