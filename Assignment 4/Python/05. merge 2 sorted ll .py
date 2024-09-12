class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def merge(head1, head2):
    if head1 is None:
        return head2
    if head2 is None:
        return head1
    
    merged = None
    if head1.val < head2.val:
        merged = head1
        while head1.next:
            head1 = head1.next
        head1.next = head2
    else:
        merged = head2
        while head2.next:
            head2 = head2.next
        head2.next = head1
    
    return merged

def traversal(head):
    ptr = head
    while ptr:
        print(f"{ptr.val} --> ", end="")
        ptr = ptr.next
    print("NULL")

if __name__ == "__main__":
    head1 = Node(1)
    head1.next = Node(2)
    head1.next.next = Node(3)

    head2 = Node(4)
    head2.next = Node(5)
    head2.next.next = Node(6)

    merged_list = merge(head1, head2)

    traversal(merged_list)


# OUTPUT:
# 1 --> 2 --> 3 --> 4 --> 5 --> 6 --> NULL
