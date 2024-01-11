# Learning Objectives

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## 1, What is a binary tree

Binary Tree is defined as a tree data structure where each node has at most 2 children. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

![Binary Tree](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)
<br>

## 2, What is the difference between a binary tree and a Binary Search Tree

A Binary Search Tree (BST) is a data structure used for organizing and storing data efficiently in a sorted manner. It's a type of binary tree where each node has at most two children, referred to as the left child and the right child.

The defining characteristic of a BST is that for each node:

- The value of all nodes in the left subtree is less than the node's value.
- The value of all nodes in the right subtree is greater than the node's value.

## 3, What is the possible gain in terms of time complexity compared to linked lists

- Binary Search Trees are more efficient than Binary Trees since time complexity for performing various operations reduces.

- Since the order of keys is based on just the parent node, searching operation becomes simpler.

- The alignment of BST also favors Range Queries, which are executed to find values existing between two keys. This helps in the Database Management System.

### examples

- BST are like a "high and low game": Just like in the game, where to narrow down the possibilities, BSTs use their ordered structure to efficiently locate values by traversing only a portion of the tree. This approach drastically reduces the time complexity for search operations to O(log n) on average in balanced trees, as opposed to linear time O(n) in BTs.

- BTs search all keys from the root: In contrast, general binary trees don't have any specific ordering of elements. Consequently, searching involves traversing the entire tree or exploring various branches without any ordering advantage. This exhaustive search can lead to a worst-case time complexity of O(n) since it might need to check every node in the tree to find the desired value.

## 4, What are the depth, the height, the size of a binary tree

- Depth of a Node: The depth of a node in a binary tree is the number of edges on the path from the root node to that particular node. Generraly the root is 0.

- Height of a Node: The height of a node in a binary tree is the number of edges on the longest path from that node to a leaf node. The height of a leaf node is 0, and the height of the root node is the height of the entire tree. In essence, it represents the length of the longest downward path to a leaf.

INFO: Height of a Node is not always equal to the term "level"

## 5, What are the different traversal methods to go through a binary tree
Traversal is a process to visit all the nodes of a tree and may print their values too.

- In-order Traversal: The left subtree is visited first, then the root and later the right sub-tree.
Goes recursively down to the left until the leaf.

![In-order Traversal](https://www.tutorialspoint.com/data_structures_algorithms/images/In-order_Traversal.jpg)

- Pre-order Traversal: The root node is visited first, then the left subtree and finally the right subtree.
![Pre-order Traversal](https://www.tutorialspoint.com/data_structures_algorithms/images/Pre-order_Traversal.jpg)

- Post-order Traversal: The root node is visited last, hence the name. First we traverse the left subtree, then the right subtree and finally the root node.
![Post-order Traversal](https://www.tutorialspoint.com/data_structures_algorithms/images/Pre-order_Traversal.jpg)

## 6, What is a complete, a full, a perfect, a balanced binary tree

- Full Binary Tree: Every node has either 0 or 2 child nodes.

```bash
    1
   / \
  2   3
     / \
    4   5
```

- Complete Binary Tree: all the levels of the tree are filled completely except the lowest level nodes which are filled from as left as possible.
```bash
    1
   / \
  2   3
 / \
4   5
```

- Perfect Binary Tree: All the leaf nodes are on the same level and every node except leaf nodes have 2 children.
 The total number of nodes in a Perfect Binary Tree with height
 ```bash
    1
   / \
  2   3
 / \  / \
4   5 6  7
```