## Variables
### What is a variable?
- A variable is an abstraction for a memory location
- It allows programmers to use meaningful names instead of memory adresses
- Every variable has type (`int`, `string`, ...) and value (123, "Word", ...)
- Variables must be declared before they are used
- Variables value may change
### Declaring variables
- `variable_type variable_name;`
### Naming variables
- Variable name can contain:
  - letters
  - numbers
  - underscores
- Variable name bust begin with with a letter or underscore
- **Remember not to use C++ keywords!** 
- Redeclaring a name in the same scope is impossible
### Naming variables - styles and best practice
- Be consistent with your naming conventions
  - `first_convention`
  - `secondConvention`
- **Use meaningful names**
- Declare variables close to when you need them in your code
### Initializing variables
- `int age = 21;` - C-like initialization
- `int age (21);` - Constructor initialization
- `int age {21};` - C++11 list initialization syntax (**best one to use**)
### Globale variables
- Variables declared outside of any function are global variables
- Global variables are automatically initialized to zero
- If there are two variables with the same name (local and global) - the local one is used
- Use global variables only if you have to
> [Back to topics](contents.md)
 