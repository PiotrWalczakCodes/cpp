## Characters & strings
### Character functions
```
#include <cctype>

function_name(char);
```
- Functions for testing characters
- Functions for converting character case


| Function | How it works |
| --- | --- |
|`isalpha(c)` | True if c is a letter |
|`isalnum(c)` | True if c is a letter or digit |
|`isdigit(c)`| True if c is a digit |
|`islower(c)`| True if c is a lowercase letter |
|`isprint(c)`| True if c is a printable character |
|`ispunct(c)`| True if c is a punctuation character |
|`isupper(c)`| True if c is a uppercase letter |
|`isspace(c)`| True if c is a whitespace |

<br>

| Function | How it works |
| --- | --- |
|`tolower(c)` | returns lowercase of c |
|`toupper(c)` | returns uppercase of c |

### C-style strings
- Sequence of characters
  - Contiguous in memory
  - Implemented as an array of characters
  - Terminated by a null character (null)
    - null - character with a value of 0
  - Referred to as zero or null terminated strings
- String literal
  - Sequence of characters in double quotes, e.g "Piotr"
  - Constant 
  - Terminated with null character


```
char my_name[8];
my_name = "Piotr";              <- error
strcpy(my_name, "Piotr");        <- ok
```

### `#include <cstring>`
Functions that work with C-style Strings
- Copying
- Concatenation
- Comparison
- Searching
- ...

Examples:
```
char str[80];
strcpy(str, "Hello");       <- copy
strcat(str, "there");       <- concatenate
cout << strlen(str);        <- length
strcmp(str, "Another");     <- > 0
```
### `#include <cstdlib>`
General purpose functions
- Includes functions to convert C-style Strings to 
  - integer
  - float
  - long 
  - ...
### C++ Strings
- `std::string` is a Class in the STL (Standard Template Library)
  - `#include <string>`
  - std namespace
  - contiguous in memory
  - dynamic size
  - work with input ans output streams
  - lots of useful member functions
  - our familiar operators can be used (+, =, >=, ...)
  - can be easily converted to C-style Strings if needed
  - safer
- Declaring and initializing
```
#include <string>

std::string s1;                 <- empty
std::string s2 {"Piotr};        <- Piotr
std::string s3 {s2};            <- Piotr
std::string s4 {"Piotr", 3};    <- Pio
std::string s5 {s3, 0, 2};      <- Pi
std::string s6 (3, 'P');        <- PPP
```
- Comparing
  - ==, !=, >, >=, <, <=
  - The objects are compared character by character lexically
  - Can compare:
    - two `std::string` objects
    - `std::string` object and C-style string literal
    - `std::string` object and C-style string variable
- Substrings - `substr()`
  - Extracts a substring from a `std::string`
    - `object.substr(start_index, length)`
- Searching - `find()`
  - Returns the index of a substring in a std::string
    - `object.find(search_string, optionally_starting_index)`
-  