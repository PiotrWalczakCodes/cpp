## Functions
### What is a function?
- C++ programs
  - C++ Standard libraries (functions & classes)
  - Third-party libraries (functions & classes)
  - Our own funtions & classes
- Functions allow the modularization of a program
  - Separate code into logical self-contained untis
  - These units can be reused
- Boss / worker analogy
  - Write your code to the function specification
  - Understand what the function does
  - Understand what information the function needs
  - Understand what the function returns
  - Understand any errors the function may produce
  - Understand any performance constraints
  - Don't worry about **HOW** the function works internally(unless you are the one writing the function)


Example `<cmath>`
- Common mathematical calculations
- Global functions called as:
```
function_name(argument);
function_name(argument1, argument2, ...);

cout << sqrt(400.0) << endl;    <= 20
double result{};
result = pow(2.0, 3.0);         <= 2^3
```
- User defined functions
  - We can define our own functions
  - Here is a preview
```
int add_number(a, b)
{
    return a + b;
}

cout << add_numbers(2, 3);      <= 5
```
### Function definition
- Name
  - The name of the function
  - Same rules as for variables
  - Should be meaningful
  - Usually a verb or verb phrase
- Parameter list
  - The variables  passed into the function
  - Their types must be specified
- Return type
  - The type of the data that is returned form the function
- Body
  - The statements that are executed when the function is called
  - In curly braces `{}` 
- Example with no parameters
```
int function_name ()
{
    statement(s);
    return 0;
}
```
- Example with no return type (`void`)
```
void function_name ()
{
    statement(s);
    return;  <= optional
}
```
- Calling a function
```
void say_hi () {
    cout << "Hi! << endl;
}

int main(){
    say_hi();
    return 0;
}
```
- You can call functions inside other functions
```
void func1()  {
    cout << " there!" << endl;
}

void func2()  {
    cout << "Hello";
    func1();
}

int main()  {
    func2();
    return 0;
}
      
      ||
      ||
      \/

Hello there!
```
- Compiler must know the function details **BEFORE** it is called
### Function prototypes
- The compiler must know about a function before it is used
  - Define functiosn before calling them
    - OK for small programs
    - Not a practical solution for larger programs
  - Use function prototypes
    - Tells the compiler what it needs to know without a full function definition
    - Also called forward declarations
    - Placed at the beginning od the program
    - Also used in our own header files (.h)
- Example of function prototype
```
    int function_name();  <= prototype

    ...

    int function_name()
    {
      statement(s);
      return 0;
    }
```
### Function parameters
