## Controlling program flow
### "if" statement
<pre>if (expr)
    statement;
</pre>
- If the expression is true then the statement is being executed
- If the expression is false then the statement is being skipped
- Simple "if" usage:
```
if (selection == 'A')
    cout << "A" << endl;
```
- A block statement is a sequence of statements inside a block:
<pre>
if (num > 10){
    ++num;
    cout << "This too" << endl;
}
</pre>
### "if-else" statement
<pre>
if (expr)
    statement1;
else
    statement2;
</pre>
- If the expression is true statement1 is executed
- If the expression is not true statement2 is executed<br>

Example:
<pre>
if (num > 10)
    cout << "Num is bigger than 10" << endl;
else
    cout << "Num is not bigger than 10" << endl;
</pre>
### "if-else-if" construct
<pre>
if (score > 90)
    cout << "A";
else if (score > 80)
    cout << "B";
else 
    cout << "Less than B";
</pre>
### "switch-case" statement
<pre>
switch (integer_control_expr) {
    case exp1: statement1; break;
    case exp2: statement2; break;
    ...
    case expn: statementn; break
    default: statement_default
}
</pre>
- `defualt` is executed when there any other expression can't return `true`
- `default` statement is optional 
- The controll expression must evaluate to an integer type
- The case expressions must be constant expressions that evaluate to integer or integer literals
- Once a match occurs all following case sections are executed until a `break` is reached or the switch is complete
- Best practice - provide `break` statement for each case
- Best practice - `default` is optional, but should be handled
### Conditional operator
"?":<br>
`(cond_expr) ? expr1 : expr2`
- `cond_expr` evaluates to a boolean expression
  - If `cond_expr` is **true** then the value of `expr1` is returned
  - If `cond_expr` is **false** then the value of `expr2` is returned
- Similar to if-else construct
- Ternary operator
- Very useful when used inline
- Very easy to abuse! 

Example:
```
int a{10}, b{20};
int score{92};
int result{};

result = (a > b) ? a : b
```
> [Back to topics](contents.md)