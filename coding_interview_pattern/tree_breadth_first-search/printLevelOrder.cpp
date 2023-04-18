#include <iostream>
#include <queue>

using namespace std;

// Structure of each node of the tree
struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};

class BinaryTree {
 public:
  Node* root;

  BinaryTree() {
    root = nullptr;
  }

  void addNode(int data) {
    Node* newNode = new Node(data);

    if (root == nullptr) {
      root = newNode;
    } else {
      Node* focusNode = root;
      Node* parent;

      while (true) {
        parent = focusNode;

        if (data < focusNode->data) {
          focusNode = focusNode->left;
          if (focusNode == nullptr) {
            parent->left = newNode;
            return;
          }
        } else {
          focusNode = focusNode->right;
          if (focusNode == nullptr) {
            parent->right = newNode;
            return;
          }
        }
      }
    }
  }

  void preOrderTraversal(Node* focusNode) {
    if (focusNode != nullptr) {
      std::cout << focusNode->data << " ";
      preOrderTraversal(focusNode->left);
      preOrderTraversal(focusNode->right);
    }
  }

  void printLevelOrder(Node *root) {
    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
  }
};



int main() {
  BinaryTree tree;

  tree.addNode(50);
  tree.addNode(25);
  tree.addNode(75);
  tree.addNode(12);
  tree.addNode(37);
  tree.addNode(43);
  tree.addNode(30);

  cout << "\nPrint Order Traversal\n";
  tree.preOrderTraversal(tree.root);
  cout << "\n\nPrint Level Order\n";
  tree.printLevelOrder(tree.root);

  return 0;
}
