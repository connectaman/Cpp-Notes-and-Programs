### C++ Constructor


In C++, constructor is a special method which is invoked automatically at the time of object creation. It is used to initialize the data members of new object generally. The constructor in C++ has the same name as class or structure.

There can be two types of constructors in C++.
```
Default constructor
Parameterized constructor
```

--------

##### C++ Default Constructor


A constructor which has no argument is known as default constructor. It is invoked at the time of creating object.

Let's see the simple example of C++ default Constructor.

```c++
#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2;   
    return 0;  
}  
```
Output
```
Default Constructor Invoked 
Default Constructor Invoked
```

--------

##### C++ Parameterized Constructor


A constructor which has parameters is called parameterized constructor. It is used to provide different values to distinct objects.

Let's see the simple example of C++ Parameterized Constructor.

```c++
#include <iostream>
using namespace std;
class Employee {
   public:
       int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee 
    Employee e2=Employee(102, "Nakul", 59000); 
    e1.display();  
    e2.display();  
    return 0;
}
```
Output
```
101  Sonoo  890000
102  Nakul  59000
```

-------




