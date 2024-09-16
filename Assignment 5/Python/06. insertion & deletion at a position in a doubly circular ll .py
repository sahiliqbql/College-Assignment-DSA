
class node:
    def __init__(self,val):
        self.prev = self
        self.val = val
        self.next = self

    def push_back(self, val):
        nn = node(val)
        if self.next == self and self.prev == self:
            self.next = nn
            self.prev = nn
            nn.prev = self
            nn.next = self
        else:
            ptr = self
            while True:
                ptr = ptr.next
                if ptr.next == self:
                    break
            ptr.next = nn
            nn.prev = ptr
            nn.next = self
            self.prev = nn

    def traversal(self):
        ptr = self
        while True:
            print(ptr.val,end=" ")
            ptr = ptr.next
            if ptr == self:
                break
        print("\n")

def insertion(head,val,pos):
        nn = node(val)
        ptr = head
        count = 2
        while True:
            if count == pos:
                break
            ptr = ptr.next
            count += 1
        nn.next = ptr.next
        nn.prev = ptr
        ptr.next.prev = nn
        ptr.next = nn

def deletion(head,pos):
    ptr = head
    count = 1
    while True:
        if count == pos:
            break
        ptr = ptr.next
        count += 1
    ptr.prev.next = ptr.next
    ptr.next.prev = ptr.prev

head = node(1)
head.push_back(2)
head.push_back(3)
head.push_back(4)
head.traversal()

insertion(head,99,3)
head.traversal()

deletion(head,3)
head.traversal()



# OUTPUT:
# 1 2 3 4 
# 1 2 99 3 4 
# 1 2 3 4
