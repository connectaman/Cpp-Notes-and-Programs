### C++ this Pointer


In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.
```
It can be used to pass current object as a parameter to another method.
It can be used to refer current class instance variable.
It can be used to declare indexers.
```

##### C++ this Pointer Example


```c++
#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       Employee(int id, string name, float salary)    
        {    
             this->id = id;    
            this->name = name;    
            this->salary = salary;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee   
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee  
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


----------


### C++ static


##### C++ static field example
```c++
#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       static float rateOfInterest;   
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<accno<< "<<name<< " "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.5;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee   
    Account a2=Account(202, "Nakul"); //creating an object of Employee  
    a1.display();    
    a2.display();    
    return 0;  
}
```
Output
```
201 Sanjay 6.5
202 Nakul 6.5
```

--------


