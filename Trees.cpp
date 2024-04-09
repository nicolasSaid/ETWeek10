/**
 * QUESTIONS:
 * What is data members does a node of a tree have?
 * 
 * What does the depth of a tree mean?
 * 
 * Define the following:
 *      a. Perfect binary tree
 *      b. Complete binary tree
 *      c. Full binary tree
 *      d. Balanced binary tree
 * 
 * Which of these is utilized by a heap
 *    data structure? Why?
 */

/**
 * QUESTIONS:
 * Given the below tree, what is
 *    the order of:
 *      a. Inorder traversal
 *      b. Preorder traversal
 *      c. Postorder traversal
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
 * HINT: In-order traversal means that you visit the current
 *       in between visiting the left and right, Pre-order means
 *       you visit the node before left and right, and Post-order
 *       means you visit the node after visiting left and right
 * 
 * Which order traversal gives you:
 *      a. the nodes in ascending order
 *      b. the nodes bottom to top, left
 *         to right
 *      c. a depth-first traversal
 * 
 * Can in-order traversal give the in-order values in a heap?
 */

/**
 * QUESTIONS:
 * Given the below tree in array
 *    representation perform the following
 *    operations:
 *      a. Remove '5'
 *      b. Remove '3'
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
    */


/**
 * QUESTIONS:
 * What are the benefits of using an array for a BST?
 * 
 * What are the drawbacks of using an array for a BST?
 * 
 * What are the benefits of using a linked-node representation
 *     of a BST?
 * 
 * What are the drawbacks of using a linked-node representation
 *     of a BST?
 * 
 * What makes the shape of a tree "bad"?
 * 
 * When will the insertion/search time on a BST be
 *      a. tight upper bound O(n)
 *      b. tight upper bound O(logn)
 * 
 */