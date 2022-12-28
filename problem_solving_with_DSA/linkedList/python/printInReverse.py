
"""
Get a middle node in a linked list
"""

class Node:
    """Representation of a linked list Node"""
    def __init__(self, data) -> None:
        self.data = data
        self.next = None
    
class LinkedList:
    """Representation of a linked list"""
    def __init__(self) -> None:
        self.head = None
    
    def createNode(self, value):
        """Create a new node 
        
        Args:
            value(int) - Data to insert
        """
        newNode = Node(value)
        
        if self.head == None:
            self.head = newNode
            return newNode
        else:
            last = self.head
            while last.next:
                last = last.next
            last.next = newNode
        return newNode
        
    def printLinkedList(self):
        """Print Data in a linkedlist"""
        temp = self.head
        
        while temp != None:
            print("{} ".format(temp.data), end="")
            temp = temp.next
        print()
    
    def print_in_reverse(self):
        temp = self.head
        arr = []
        while temp:
            arr.append(temp.data)
            temp = temp.next
        
        for i in reversed(range(len(arr))):
            print("{} ".format(arr[i]), end="")
        print()
   
            


if __name__ == "__main__":
    llist = LinkedList()
    llist.createNode(10)
    llist.createNode(20)
    llist.createNode(30)
    llist.createNode(40)
    llist.createNode(50)
    
    llist.printLinkedList()
    llist.print_in_reverse()



