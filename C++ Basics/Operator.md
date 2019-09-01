### C++ Operators

----

An operator is simply a symbol that is used to perform operations. There can be many types of operations like arithmetic, logical, bitwise etc.

There are following types of operators to perform different types of operations in C language.

   - Arithmetic Operators
   - Relational Operators
   - Logical Operators
   - Bitwise Operators
   - Assignment Operator
   - Unary operator
   - Ternary or Conditional Operator
   - Misc Operator

![](https://static.javatpoint.com/cpp/images/cpp-operaters1.png)


##### Precedence of Operators in C++

 The precedence of operator species that which operator will be evaluated first and next. The associativity specifies the operators direction to be evaluated, it may be left to right or right to left.
 
 ```objectivec
int data=5+10*10; 
```

The "data" variable will contain 105 because * (multiplicative operator) is evaluated before + (additive operator).

The precedence and associativity of C++ operators is given below:

-----

|Category |	Operator |	Associativity|
|----|------|-----|
|Postfix 	|() [] -> . ++ - - 	|Left to right|
|Unary 	|+ - ! ~ ++ - - (type)* & sizeof |	Right to left|
|Multiplicative |	* / % |	Left to right|
|Additive |	+ - 	|Right to left|
|Shift| 	<< >> 	|Left to right|
|Relational |	< <= > >= 	|Left to right|
|Equality| 	== !=/td> 	|Right to left|
|Bitwise AND |	& 	|Left to right|
|Bitwise XOR |	^ 	|Left to right|
|Bitwise OR |	|	|Right to left|
|Logical AND |	&& |	Left to right|
|Logical OR |	|| |	Left to right|
|Conditional |	?: |	Right to left|
|Assignment| 	= += -= *= /= %=>>= <<= &= ^= = |	Right to left|
|Comma |	, 	|Left to right|