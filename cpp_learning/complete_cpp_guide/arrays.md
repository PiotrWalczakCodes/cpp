## Arrays
### What is an array?
- An array is a compound data type or a structured data type
- All elements of an array must be the same type
### Arrays characteristics
- Fixed size
- Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accesed by their index
- First element is at index 0
- Last element is at index size - 1
- Always initialize arrays
- Very efficient
- Iteration is often used to precess
### Declaring arrays
- `element_type array_name [constant_number_of_elements];`
### Array initialization
- `element_type array_name [constant_number_of_elements] {init_list};`
### Accessing array elements
- array_name [index]
- The name of the array represent the location of the firs  element in the array
- The index represents the offset from the beginning of the array
- C++ simply performs calculation to find the correct element
### Multi-dimensional arrays
- Declaring
  - `int title [x][y];`
- Example
  - ```
    int nums[3][4]{
        {1,2,3,4},
        {2,3,4,1},
        {3,4,1,2},
    }
    ```
> [Back to topics](contents.md)