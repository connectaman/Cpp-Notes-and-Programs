### C++ Destructor


A destructor works opposite to constructor; it destructs the objects of classes. It can be defined only once in a class. Like constructors, it is invoked automatically.

A destructor is defined like constructor. It must have same name as class. But it is prefixed with a tilde sign (~).



```c++
#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;  
}  

```

Output
```
Constructor Invoked
Constructor Invoked
Destructor Invoked
Destructor Invoked
```

--------

