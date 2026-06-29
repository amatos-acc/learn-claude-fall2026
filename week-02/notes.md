  1. What bubble sort does in plain English

Bubble Sort is a sorting algorithm that repeatedly compares adjacent elements in a list and swaps then if they are in the wrong order. Larger values "bubble" up to the correct end of the list with each pass. The algorithm finishes when a full pass occurs with zero swaps, emaning the entire array is sorted.

2. What swap_check does and why it matters 

Swap_check is initial set to false but gets set to true in the inner j loop right before the two elements get sorted. Swap_check is important because the outer loop for (int i = 0; (i < size) && (swap_check); i++) will terminate if swap_check is never set to true. When the outer loop terminates, then that means the list was already sorted and there is no need to do additional swaps.

3. What template <typename T> means

Template <typename T> is what allows the bubble sort algorithm to work with any data type. T is a placeholder and the compiler fills in the actual type when you call it.

  4. What assert does and why test() is useful

assert() checks the condition and crashes if the condition is false. If bubble_sort ever returns something unsorted, assert catches it immediately. test() is a function that returns quietly if all the assertions pass and tells you which one if one of the assertions failed.
