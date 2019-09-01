### C++ Variable

----

A variable is a name of memory location. It is used to store data. Its value can be changed and it can be reused many times.

It is a way to represent memory location through symbol so that it can be easily identified.

Let's see the syntax to declare a variable:
```objectivec
type variable_list; 
```
The example of declaring variable is given below:
```objectivec
int x;    
float y;    
char z;   
```
Here, x, y, z are variables and int, float, char are data types.

We can also provide values while declaring the variables as given below:
```objectivec
int x=5,b=10;  //declaring 2 variable of integer type    
float f=30.8;    
char c='A';   
```


#### Rules for defining variables

- A variable can have alphabets, digits and underscore.
- A variable name can start with alphabet and underscore only. It can't start with digit.
- No white space is allowed within variable name.
- A variable name must not be any reserved word or keyword e.g. char, float etc.

##### Valid variable names:
```objectivec
int a;    
int _ab;    
int a30; 
```

##### Invalid variable names:
```objectivec
    int 4;    
    int x y;    
    int double;  
```

