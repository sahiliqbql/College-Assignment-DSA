class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

def remove_character(head, key):
    temp = head
    while temp and temp.data != key:
        temp = temp.next
    if temp is None:
        print(f"Character '{key}' not found in the list.")
        return head
    if temp == head:
        head = temp.next
    if temp.prev is not None:
        temp.prev.next = temp.next
    if temp.next is not None:
        temp.next.prev = temp.prev
    print(f"Character '{key}' removed from the list.")
    return head

def print_list(node):
    while node is not None:
        print(node.data, end=" ")
        node = node.next
    print()


if __name__ == "__main__":
    head = Node('a')
    head.next = Node('b')
    head.next.prev = head
    head.next.next = Node('c')
    head.next.next.prev = head.next
    head.next.next.next = Node('d')
    head.next.next.next.prev = head.next.next

    print("Original list: ", end="")
    print_list(head)

    head = remove_character(head, 'b')

    print("Updated list: ", end="")
    print_list(head)


# OUTPUT:
# Original list: a b c d 
# Character 'b' removed from the list.
# Updated list: a c d
