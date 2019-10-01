### C++ try/catch

In C++ programming, exception handling is performed using try/catch statement. The C++ try block is used to place the code that may occur exception. The catch block is used to handle the exception.

##### C++ example without try/catch

```objectivec
    #include <iostream>  
    using namespace std;  
    float division(int x, int y) {  
       return (x/y);  
    }  
    int main () {  
       int i = 50;  
       int j = 0;  
       float k = 0;  
          k = division(i, j);  
          cout << k << endl;  
       return 0;  
    }  
```
Output
```
Floating point exception (core dumped)
```

------

##### C++ try/catch example

```objectivec
    #include <iostream>  
    using namespace std;  
    float division(int x, int y) {  
       if( y == 0 ) {  
          throw "Attempted to divide by zero!";  
       }  
       return (x/y);  
    }  
    int main () {  
       int i = 25;  
       int j = 0;  
       float k = 0;  
       try {  
          k = division(i, j);  
          cout << k << endl;  
       }catch (const char* e) {  
          cerr << e << endl;  
       }  
       return 0;  
    }  
```
Output
```
Attempted to divide by zero!
```

------

