class Node:
    def __init__(self, coeff, exp):
        self.coeff = coeff
        self.exp = exp
        self.next = None

def insertion(poly, coeff, exp):
    new_node = Node(coeff, exp)
    if poly is None:
        return new_node
    current = poly
    while current.next:
        current = current.next
    current.next = new_node
    return poly

def addition(poly1, poly2):
    ans = None
    t1 = poly1
    t2 = poly2

    while t1 and t2:
        if t1.exp == t2.exp:
            ans = insertion(ans, t1.coeff + t2.coeff, t1.exp)
            t1 = t1.next
            t2 = t2.next
        elif t1.exp > t2.exp:
            ans = insertion(ans, t1.coeff, t1.exp)
            t1 = t1.next
        else:
            ans = insertion(ans, t2.coeff, t2.exp)
            t2 = t2.next

    while t1:
        ans = insertion(ans, t1.coeff, t1.exp)
        t1 = t1.next
    while t2:
        ans = insertion(ans, t2.coeff, t2.exp)
        t2 = t2.next

    return ans

def display(poly):
    if poly is None:
        print("0")
        return

    terms = []
    while poly:
        if poly.exp == 0:
            terms.append(f"{poly.coeff}")
        elif poly.exp == 1:
            terms.append(f"{poly.coeff}x")
        else:
            terms.append(f"{poly.coeff}x^{poly.exp}")
        poly = poly.next

    print(" + ".join(terms))

if __name__ == "__main__":
    poly1 = None
    poly2 = None

    poly1 = insertion(poly1, 3, 3)
    poly1 = insertion(poly1, 2, 1)
    poly1 = insertion(poly1, 5, 0)

    poly2 = insertion(poly2, 4, 2)
    poly2 = insertion(poly2, 5, 1)
    poly2 = insertion(poly2, 3, 0)

    print("poly1 = ", end="")
    display(poly1)
    print("poly2 = ", end="")
    display(poly2)

    ans = addition(poly1, poly2)
    print("ans = ", end="")
    display(ans)


# OUTPUT:
# poly1 = 3x^3 + 2x + 5
# poly2 = 4x^2 + 5x + 3
# ans = 3x^3 + 4x^2 + 7x + 8
