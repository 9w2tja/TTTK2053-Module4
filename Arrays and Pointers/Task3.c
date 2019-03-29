Based on the explanations in the above video, describe the similarities and differences between arrays and pointers with examples


similarities



differences
arrays
	- An array is a single, pre allocated chunk of contiguous elements (all of the same type), fixed in size and location.
	- Expression a[4] refers to the 5th element of the array a.
	- Array can be initialized at definition. Example int num[] = { 2, 4, 5}
	- They are static in nature. Once memory is allocated , it cannot be resized or freed dynamically


pointers	
	- A pointer is a place in memory that keeps address of another place inside
	- Allows us to indirectly access variables. In other words, we can talk about its address rather than its value
	- Pointer can’t be initialized at definition
	- Pointer is dynamic in nature. The memory allocation can be resized or freed later.

