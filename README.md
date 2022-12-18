# C - Binary Trees :v::evergreen_tree::deciduous_tree:

## Description :information_source:
Binary Tree is defined as a tree data structure where each node has at most 2 children. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.
### Some terminology of Complete Binary Tree:
* Root – Node in which no edge is coming from the parent. Example -node A
* Child – Node having some incoming edge is called child. Example – nodes B, H are the child of A and D respectively.
* Sibling – Nodes having the same parent are sibling. Example- J, K are siblings as they have the same parent E.
* Degree of a node – Number of children of a particular parent. Example- Degree of A is 2 and Degree of H is 1. Degree of L is 0.
* Internal/External nodes – Leaf nodes are external nodes and non leaf nodes are internal nodes.
* Level – Count nodes in a path to reach a destination node. Example- Level of node H is 3 as nodes A, D and H themselves form the path.
* Height – Number of edges to reach the destination node, Root is at height 0. Example – Height of node E is 2 as it has two edges from the root


## Data Structure :dna:
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;



## Compilation :thought_balloon:

```
gcc -Wall -Wextra -Werror -pedantic
```

### Author

Clint Hendrickson | (https://github.com/Maitreya-today)
December 2022
