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

def swap(head):
    temp = head
    while temp and temp.next:
        temp.val, temp.next.val = temp.next.val, temp.val
        temp = temp.next.next
    return head

def traversal(head):
    ptr = head
    while ptr:
        print(f"{ptr.val} --> ", end="")
        ptr = ptr.next
    print("NULL")

if __name__ == "__main__":
    n = int(input("Number of elements: "))
    arr = [int(x) for x in input(f"Enter {n} values: ").split()]

    head = create_node(arr[0])
    for i in range(1, n):
        head = push(head, arr[i])

    traversal(head)
    head = swap(head)
    traversal(head)


# OUTPUT:
# Number of elements: 4
# Enter 4 values: 1 2 3 4
# 1 --> 2 --> 3 --> 4 --> NULL
# 2 --> 1 --> 4 --> 3 --> NULL
