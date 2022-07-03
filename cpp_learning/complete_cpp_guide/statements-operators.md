## Statements and operators
### Expressions and statements
- Expressions - examples:
  - `34` - literal
  - `var_name` - variable
  - `1 + 4` - addition
  - `4 * 3` - multiplication
  - `a > b` - relational
  - `a = b` - assignment
- Statements characteristics<br>
A statement is:
  - a complete line of code that performs some action
  - Usually terminated with a semi-colon
  - Usually contains expressions
  - C++ has many types of statements:
    - expression
    - null
    - compound
    - selection
    - iteration
    - declaration
    - jump
    - try blocks
    - ...
### Using operators
- C++ has rich set of operators
  - unary
  - binary
  - ternary
- Common operators can be grouped as follows
  - assignment 
  - arithmetic
  - increment / decrement
  - relational 
  - logical
  - member access
  - other
### The assignment operator
lhs = rhs
- rhs is an expression that is evaluated to a value
- the value of the rhs must be type compatible with the lhs
- the lhs must be assignable
- assignment expression is evaluated to what was assigned in a single statement<br>
`num1 = 23;` <-- assigning 23 to num1
### Arithmetic operators
- "+" - addition
- "-" - subtraction
- "*" - multiplication
- "/" - division
- "%" - modulo (works only with integers)
### Increment & decrement operators
Increment operator: ++<br>
Decrement operator: --

Prefix:  `++num;`<br>
Postfix: `num++;`

- Don't overuse this operator!
- **Never use it twice for the same variable in the same statement!**
- Prefix and postfix work exactly the same;<br>

Examples:
- ```
  result = 0;
  counter = 10;

  result = ++counter;
        ||
        ||
        \/
  result = 11
  counter = 11
  ```
- ```
  result = 0;
  counter = 10;

  result = counter++;
        ||
        ||
        \/
  result = 10
  counter = 11
  ```
### Mixed type expressions
- C++ operations occur on some type operands
- If operands are different types, C++ will convert one
- C++ will attempt to automatically convert types (coercion). If it can't, a compiler error will occur
### Convertions
- Type coercion: conversion of onr operand to another data type
- Promotion: conversion to a higher type (used in mathematical expressions)
- Demotion: conversion to a lower type (used with assignment to lower type)
### Type casting
- `variable = static_cast<double>(other_var);`
- Old style (**don't use that**) `variable = (double)variable2;`
### Testing for equality
- The `==` and `!=` operators:
  - compare values of two expressions
  - evaluate to boolean
  - commonly used in control flow statements
- Switching between (true/false) and (1/0)
  - `cout << boolalpha;`
  - `cout << noboolalpha;` 
### Relational operators
expr1 **op** expr2

| operator | meaning |
| --- | --- |
| > | greater than |
| >= | greater than or equal to |
| < | less than |
| >= | less than or equal to |
| <=> | three-way comparison (C++20) |
### Logical operators
| operator | meaning |
| --- | --- |
| not(!) | negation |
| and(&&) | logical and |
| or | logical or |

Logical or = `||`

- Precedence
    1) not
    2) and 
    3) or
- "not" is a unary operator
- "and" & "or" are binary operators<br>

Example
- `num1 >= 10 && num1 < 20`

When evaluating a logical expression C++ stops as soon as the result is known
- `a == b && b == c` => if `a` is not equal to `b`, then `b == c` is not checked
### Compound assignment
| operator | example | meaning |
| --- | --- | --- |
| += | a += b;| a = a + b;|
| -= | a -= b;| a = a - b;|
| *= | a *= b;| a = a * b;|
| /= | a /= b;| a = a / b;|
| %= | a %= b;| a = a % b;|
| >>= | a >>= b;| a = a >> b;|
| <<= | a <<= b;| a = a << b;|
| &= | a &= b;| a = a & b;|
| ^= | a ^= b;| a = a ^ b;|

- one more:
  - operator:
    - |=
  - example:
    - `a |= b;`
  - meaning:
    - `a = a | b;`
### Operator precedence

| operator | associativity |
| :---:|:---:|
| <pre>[]    ->    .    ()</pre>| left to right | 
| <pre>++    --    not    -(unary)    *(de-ref)    &</pre> | right to left |
| <pre>*    /    %</pre> | left to right |
| <pre>+    -</pre> | left to right |
| <pre>>>    <<</pre> | left to right |
| <pre><    <=    >    >=</pre> | left to right |
| <pre>==    !=</pre> | left to right |
| <pre>&</pre> | left to right |
| <pre>^</pre> | left to right |
| <pre>&&</pre> | left to right |
| <pre>=    op=    ?=</pre> | right to left |
> [Back to topics](contents.md)