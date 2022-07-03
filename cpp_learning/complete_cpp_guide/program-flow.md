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
> [Back to topics](contents.md)