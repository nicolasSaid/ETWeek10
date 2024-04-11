/**
 * QUESTIONS:
 * What is data members does a node of a tree have?
 * 
 * What does the depth of a node mean?
 * 
 * Define the following:
 *      a. Perfect binary tree
 *      b. Complete binary tree
 *      c. Full binary tree
 *      d. Balanced binary tree
 * 
 * Which of these is utilized by a heap
 *    data structure? Why?
 * ANSWERS:
 * Data value, Left Child Pointer, Right Child Pointer
 * 
 * Number of edges from the current node to the root
 * 
 * Definitions:
 *      a. All levels are filled
 *      b. Levels 1 .. h-1 have all possible items,
 *         last level filled from left to right
 *      c. Nodes either have 2 children or 0 children
 *      d. Left and right subtrees of all items have 
 *         heights that differ by at most 1.
 * 
 * Complete binary tree. Heaps guarantee that parents
 *    are bigger/smaller than the child, but nothing in
 *    regards to the relationships among children. A heap 
 *    inserts/removes from the next available spot in a 
 *    complete tree. Check this visualization out:
 *    https://www.cs.usfca.edu/~galles/visualization/Heap.html
 */

/**

*/

/**
 * QUESTIONS:
 * Given the below tree, what is
 *    the order of:
 *      a. Inorder traversal (LNR)
 *      b. Preorder traversal (NLR)
 *      c. Postorder traversal (LRN)
 * 
 *                ┌───┐
                  │ 7 │
              ┌───┴───┴───┐
              │           │
            ┌─▼─┐       ┌─▼─┐
            │ 4 │       │ 9 │
        ┌───┴───┴───┐   └───┘
        │           │
      ┌─▼─┐       ┌─▼─┐
      │ 1 │       │ 5 │
      └───┘       └───┘
 * 
 * HINT: I write the letters (NLR or LNR or LRN) next to
 *       each of the nodes and cross off the letters as
 *       I process the tree. The 'N' refers to the node
 *       itself, and it is BEFORE the L/R in PREorder,
 *       BETWEEN L/R in INorder, and AFTER the L/R in
 *       POSTorder. Hope this helps!
 * 
 * Which order traversal gives you:
 *      a. the nodes in ascending order
 *      b. the nodes bottom to top, left
 *         to right
 *      c. a depth-first traversal
 * 
 * Can in-order traversal give the in-order values in a heap?

 * ANSWERS:
 * Order:
 *      a. 1 4 5 7 9
 *      b. 7 4 1 5 9
 *      c. 1 5 4 9 7
 * 
 * Traversals:
 *      a. Inorder. Get it? "in-order"?
 *      b. Postorder. No fun way to remember it.
 *      c. Preorder. Same results as DFS
 *         on a tree.
 * 
 * No! A heap only guarantees the top node is less/more than its 
 *    children. To get the values in order you need to do heap-sort.
 */

/**
 * QUESTIONS:
 * Given the below tree in array
 *    representation perform the following
 *    operations:
 *      a. Remove '3'
 *      b. Remove '5'
 *      c. Remove '7' (two correct answers)
 * 
 *                       1 1 1 1 1
     0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
    ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
    │4│3│7│1│ │6│8│ │2│ │ │5│ │ │9│ 
    └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘

 * NOTE: I perform each operation separately,
 *       not one after another
 * NOTE: I would draw the tree from the array
 *       to better understand what you're 
 *       working with.
 * ANSWERS:
 * 
 * 
 * 6. Initial Tree:
 *              4
 *              │
 *      ────────┴───────
 *      3              7
 *      │              │
 * ─────┘          ────┴─────
 * 1               6        8
 * │               │        │
 * └──           ──┘        └───
 *   2           5             9
 * 
 *     Resulting arrays:
 *      a.                       1 1 1 1 1
             0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
            ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
            │4│1│7│2│ │6│8│ │ │ │ │5│ │ │9│ 
            └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘

            Tree:
                          4
                          │
                  ────────┴───────
                  3              7
                  │              │
             ─────┘          ────┴─────
             1               6        8
             │                        │
             └──                      └───
               2                          9


            
        b.                       1 1 1 1 1
             0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
            ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
            │4│3│7│1│ │6│8│ │2│ │ │ │ │ │9│ 
            └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘

            Tree:
                             4
                             │
                ┌────────────┴───────
                │                   7
                │                   │
                │               ────┴─────
                1               6        8
                │                        │
                └──                      └───
                   2                        9



        c.                       1 1 1 1 1
             0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
            ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
            │4│3│6│1│ │5│8│ │2│ │ │ │ │ │9│ 
            └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘
            if you choose right most node of
            the left subtree


            Tree:

                             4
                             │
                     ────────┴───────
                     3              6
                     │              │
                ─────┘          ────┴─────
                1               5        8
                │                         │
                └──                       └───
                    2                        9


                                 1 1 1 1 1
             0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
            ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
            │4│3│8│1│ │6│9│ │2│ │ │5│ │ │ │ 
            └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘
            if you choose left most node of
            the right subtree     

            Tree:

                          4
                          │
                  ────────┴───────
                  3              8
                  │              │
             ─────┘          ────┴─────
             1               6        9
             │               │        
             └──           ──┘        
               2           5                                   
    * 
    */


/**
 * QUESTIONS:
 * 7. What are the benefits of using an array for a BST?
 * 
 * 8. What are the drawbacks of using an array for a BST?
 * 
 * 9. What are the benefits of using a linked-node representation
 *     of a BST?
 * 
 * 10. What are the drawbacks of using a linked-node representation
 *     of a BST?
 * 
 * 11. What makes the shape of a tree "bad"?
 * 
 * 12. When will the insertion/search time on a BST be
 *      a. tight upper bound O(n)
 *      b. tight upper bound O(logn)
 * 
 * ANSWERS:
 * 7. With an array, you can go to any node in the structure in
 *    constant time since arrays use indexes. You ask me to go
 *    to the left child of the root? I go to arr[1]. You ask
 *    me to go to the right grandchild of the root? I go to
 *    arr[6].
 * 
 * 8. What happens if you have a complete tree and want to add
 *    a node? Gotta copy the entire array over to a larger space.
 *    O(n) operation to copy a whole array!
 * 
 * 9. You can easily create any shape of tree without having
 *     to allocate a bunch of space for an array. Consider the following
 *     tree and the array needed to represent it:
 * 
 *      Tree:
 *                        D
                          │
                          └───────
                                  S
                                  │
                                  └─────
                                        J
                                        │
                                        └─────
                                              L

        Array:
                             1 1 1 1 1
         0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
        ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
        │D│ │S│ │ │ │J│ │ │ │ │ │ │ │L│
        └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘

    10. You need to store all the pointers (lots of space!) and
        also traversing the tree at worst can be O(n), which is not great

    11. When we say a "bad tree", we typically mean a "tall" tree.
        If you insert the values into the tree in ascending or descending
        order, it will make a straight line and be "bad".

    12. Search/insert times:
        a. If the tree is not "balanced", it could be a straight line. 
           Since big-O is a "worst case scenario", unless the tree
           is "balanced", it CAN be tight upper bound O(n)
        b. If a tree is "balanced", we know the tree traversal time
           is bound by the height, which must be logn.
 * 
 */