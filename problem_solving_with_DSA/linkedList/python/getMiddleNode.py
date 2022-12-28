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
        
    def countNode(self):
        """Count node in a linked list"""
        count = 0
        temp = self.head
        while temp != None:
            count += 1
            temp = temp.next
        return count

    def getMiddleNode(self):
        """Get middle node in a linked list"""
        len = self.countNode()
        temp = self.head
        
        if temp != None:
            for i in range(len//2):
                temp = temp.next
            return temp.data
        else:
            return (-1)


if __name__ == "__main__":
    llist = LinkedList()
    llist.createNode(10)
    llist.createNode(20)
    llist.createNode(30)
    llist.createNode(40)
    llist.createNode(50)
    
    llist.printLinkedList()
    print(llist.getMiddleNode())