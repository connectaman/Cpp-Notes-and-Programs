### C++ Functions

The function in C++ language is also known as procedure or subroutine in other programming languages.

To perform any task, we can create function. A function can be called many times. It provides modularity and code reusability.

##### Advantage of functions in C

There are many advantages of functions.

##### 1) Code Reusability

By creating functions in C++, you can call it many times. So we don't need to write the same code again and again.

##### 2) Code optimization

It makes the code optimized, we don't need to write much code.

Suppose, you have to check 3 numbers (531, 883 and 781) whether it is prime number or not. Without using function, you need to write the prime number logic 3 times. So, there is repetition of code.

But if you use functions, you need to write the logic only once and you can reuse it several times.

-------

##### Types of Functions

There are two types of functions in C programming:

##### 1. Library Functions: are the functions which are declared in the C++ header files such as ceil(x), cos(x), exp(x), etc.

##### 2. User-defined functions: are the functions which are created by the C++ programmer, so that he/she can use it many times. It reduces complexity of a big program and optimizes the code.


![](https://static.javatpoint.com/cpp/images/cpp-functions1.png)

-----

##### Declaration of a function

```
return_type function_name(data_type parameter...)  
{    
//code to be executed    
}
```

-----

##### C++ Function Example

```objectivec
#include <iostream>  
using namespace std;  
void func() {    
   static int i=0; //static variable    
   int j=0; //local variable    
   i++;    
   j++;    
   cout<<"i=" << i<<" and j=" <<j<<endl;    
}    
int main()  
{  
 func();    
 func();    
 func();    
} 
```
Output
```
i= 1 and j= 1
i= 2 and j= 1
i= 3 and j= 1
```

--------

