

/**
 * QUESTIONS:
 * 1. What type of tree is required to implement a heap?
 *    Why does it matter? (For what operations to function
 *    do we need that type of tree)
 * 
 * 2. How are BSTs and Heaps similar? How are they different?
 * 
 * 3. What is the height of a Heap with N nodes in it?
 * 
 * 4. Describe the process of inserting a new value into a max-heap
 * 
 * 5. What is the runtime complexity of insert()? Why?
 *    
 *    BONUS: Can you think of a case when insert() might be
 *           especially slow? Think Dynamic Arrays... 
 * 
 * 6. Describe the process of removing the top value from a max-heap
 * 
 * 7. What is the runtime complexity of remove()? Why?
 * 
 * 8. Describe the process of building a max-heap from an array of
 *    unordered values
 * 
 * 9. What is the runtime complexity of build-max-heap()? Why?
 * 
 * ANSWERS:
 * 1. A complete tree is required (That's the one where every level is
 *    filled except for the last, and that one is filled left to right).
 *    This is needed to support the insert operation, which places the
 *    new element at the end of the array.
 * 
 * 2. BSTs and Heaps are both binary trees, and both guarantee a
 *    certain relationship between some of their member node values.
 *    BSTs guarantee left children are less than the parent, and 
 *    right children are greater -- while Heaps only guarantee
 *    that the parent is less/greater than both the children.
 * 
 * 3. Height of a heap is floor(logn), or commonly abbreviated to logn
 * 
 * 4. One places the new value at the last empty index in the heap array
 *    and trickles it up until it's in the right spot.
 * 
 * 5. Worst case is the height of the tree, since the trickling could
 *    at most move the value to the top of the tree. Since the height
 *    is logn, our runtime complexity is logn.
 * 
 *    BONUS: What if we were using a dynamic array to store our heap,
 *           and the dynamic array was full? The first thing one would
 *           have to do to insert another value would be to resize
 *           the array, which is a tightupper bound O(n) operation! 
 *           In this case, would insert() be tight upper bound O(n)?
 * 
 * 6. Swap the first and last valid entries in the heap array,
 *    decrease the size of the heap by 1 (usually we would just
 *    use an array index to denote where the new "end" is instead
 *    of actually manually resizing the array by 1), and then percolate
 *    that new top node down.
 * 
 * 7. Worst case comes from that percolation, which is bounded by the
 *    height of the tree, which is logN!
 * 
 * 8. You start with the leaf nodes and work your way all the way up to
 *    the root node, percolating down each time. Build-max-heap()
 *    essentially calls heapify() on each subtree of the tree to make
 *    sure that everything in the heap is itself, a heap.
 * 
 * 9. If you perform percolate down on half of the nodes, heapify is actually O(N)!
 *    if you want to see a fun proof for this, look at this stack overflow link
 *    which shows a proof for this using a taylor series:
 *    https://stackoverflow.com/questions/9755721/how-can-building-a-heap-be-on-time-complexity
 * 
 */

/**
 * QUESTIONS:
 * 
 * 10. Describe the heapsort algorithm
 * 
 * 11. What is the runtime complexity of heapsort()?
 * 
 * 12. What is the runtime complexity of calling build-max-heap()
 *     and then calling heapsort() on the max-heap?
 * 
 * ANSWERS:
 * 
 * 10. You just call remove() N times, storing the value either
 *     past the "end of the array" or somewhere else each time.
 * 
 * 11. Calling remove() N times is NlogN!
 * 
 * 12. We've got an NlogN operation and an NlogN operation...
 *     Together, they are 2NlogN, but since we drop constants
 *     we have NlogN.
 * 
 */

/**
 * QUESTIONS:
 * 
 * 13. Given the following heap, remove once and then insert the value
 *     8 once.
 * 
                   ┌─┐
                   │9│
              ┌────┴─┴────┐
              │           │
             ┌▼┐         ┌▼┐
             │7│         │5│
         ┌───┴─┴──┐    ┌─┴─┘
         │        │    │
        ┌▼┐      ┌▼┐  ┌▼┐
        │1│      │4│  │2│
        └─┘      └─┘  └─┘

    ANSWERS:
 *
 *  13. After removal:
 * 
 *                 ┌─┐
                   │7│
              ┌────┴─┴────┐
              │           │
             ┌▼┐         ┌▼┐
             │4│         │5│
         ┌───┴─┴──┐      └─┘
         │        │    
        ┌▼┐      ┌▼┐  ┌─┐
        │1│      │2│  │9│ (I'm leaving this here even though we "shrunk" the array)
        └─┘      └─┘  └─┘
 * 
 * 
 *      After insertion:
 * 
 *                 ┌─┐
                   │8│
              ┌────┴─┴────┐
              │           │
             ┌▼┐         ┌▼┐
             │4│         │7│
         ┌───┴─┴──┐    ┌─┴─┘
         │        │    │
        ┌▼┐      ┌▼┐  ┌▼┐
        │1│      │2│  │5│
        └─┘      └─┘  └─┘

 *
 */