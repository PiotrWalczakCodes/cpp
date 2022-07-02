## Vectors
### Vectors characteristics
Vector is a:
- Container in the C++ standard template library
- An array that can grow and shrink in size at execution time
- Provides similar semantics and syntax as arrays
- Very efficient 
- Can provide bounds checking
- Can use lots of functions like sort, reverse, find.
### Declaring
- ```
  #include <vector>
  using namespace std;
  int main(){
    vector < int > title (10)
    return 0;
  }
  ```
### Initializing 
- `vector  < char > title {'a', 'b', 'c'};`
- `vector  < int > title {1, 2, 3};`
- `vector  < char > title (365, 24));` - used to fill 365 memory slots with 24
### Accessing and modifying vector elements
- Accesing vector elements:
  - `vector_name [index];` (no bounds checking)
  - `vector_name.at(index)];`
- Expanding vector:
  - `vector_name.push_back(value)];` - adds value to the end of vector
### Declaring two-dimensional vectors
- ```
  vector <vector <int>> title
  {
    {1,2,3,4},
    {3,4,1,2}
  } 
### Accessing two dimensional vectors
- `title[0][0];`
- `title.at(0).at(0);`
### Bounds checking
- Arrays never do bounds checking
- Many vector methods provide bounds checking
> [Back to topics](contents.md)