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
    
    def getNthNode(self, index):
        """ Get Nth node in a linked list
        
        Args:
            index(int): Index of the node
            
        Return (int): Data at the index
        """
        if self.head != None:
            temp = self.head
            while temp and index:
               temp = temp.next
               index -= 1
            if temp == None:
                return (-1)
            return temp.data       
        return (-1)
        


if __name__ == "__main__":
    llist = LinkedList()
    llist.createNode(10)
    llist.createNode(20)
    llist.createNode(30)
    llist.createNode(40)
    llist.createNode(50)
    
    llist.printLinkedList()
    print(llist.getNthNode(1))
