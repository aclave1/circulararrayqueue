circulararrayqueue
==================

Circular array queue implementation. 

Brief background:

For my computer science 3501: Computer Organization and design class, my final project was to write an L1 cache simulator with variable associativity, block size, set count, and the option of write through or write back write policy and LRU replacement policy. 

Description:

It's a fixed sized, array based queue. The size comes from the associativity of the cache. Whenever the queue is full, a push will overwrite the front of the queue. The least recently used item is always at the front of the queue.

Notes:

  This isn't the most efficient implementation, I could've used characters instead of ints but I wanted to be able to have associativity > 255. A char queue is a quick and easy fix. I also could've used timestamps
