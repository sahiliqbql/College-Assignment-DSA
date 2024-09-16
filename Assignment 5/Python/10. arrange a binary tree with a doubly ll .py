class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

def inOrderTrav(head):
    if head is None:
        return
    inOrderTrav(head.left)
    print(head.val, end=" ")
    inOrderTrav(head.right)

if __name__ == "__main__":
    head = Node(1)
    snd = Node(2)
    trd = Node(3)
    four = Node(4)
    five = Node(5)

    head.left = snd
    head.right = trd

    snd.left = four
    snd.right = five

    print("In-order traversal: ", end="")
    inOrderTrav(head)

# Output:
# In-order traversal: 4 2 5 1 3 
