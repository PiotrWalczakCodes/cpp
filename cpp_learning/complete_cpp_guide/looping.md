## Looping
iteration
- The third basic building block of programming
  - sequence 
  - selection
  - iteration
- Iteration or repetition
- Allows the execution of a statement or block of statements repeatedly
- Loops are made up a loop condition and the body which  contains the statements to repeat
- Some typical use-cases:
  - a specific number of times
  - for each element in a collection
  - while a specific condition remains true
  - until a specific condition becomes false
  - until we reach the end of some input stream
  - forever
  - ...
### "for" loop
```
for (initialization; condition; increment)
    statement;
```
```
for (initialization; condition; increment)    {
    statement(s);
}
```
Example:
```
int i{0};
for (i = 1; i <= 5; ++i)
    cout << i << endl;

            ||
            ||
            \/
1
2
3
4
5
```
- You can increment more than one variable:
```
for (int i{1}, j{5}; i <=  5; ++i, ++j){
    cout << i << "*" << j << " = " << (i * j) << endl;
} 
                    
                    ||
                    ||
                    \/

1 * 5 = 5
2 * 6 = 12
3 * 7 = 21
4 * 8 = 32
5 * 9 = 45
```

Some other details
- The basic loop is very clear and concise
- Since the for loop's expressions are all optional, it is possible to have 
  - No initialization
  - No test
  - No increment
```
for (;;)
    cout << "endless loop" << endl;
```
### Range-based "for" loop
- Very modern way to iterate through collections of data
```
int nums[]{2,5,8,9};

for (int i : nums)
    cout << i << endl;

        ||
        ||
        \/

2
5
8
9
```
- Intead of typing data type(in this case `int`) you can just use `auto`
```
for (auto i : nums)
```
- You can iterate through strings
```
for (auto i : "Piotr")
    cout << i << endl;

        ||
        \/

P
i
o
t
r
```
### "while" loop
