### C++ Namespaces

--------

Namespaces in C++ are used to organize too many classes so that it can be easy to handle the application.

For accessing the class of a namespace, we need to use namespacename::classname. We can use using keyword so that we don't have to use complete name all the time.

In C++, global namespace is the root namespace. The global::std will always refer to the namespace "std" of C++ Framework.

##### C++ namespace Example

```objectivec
#include <iostream>  
using namespace std;  
namespace First {    
    void sayHello() {   
        cout<<"Hello First Namespace"<<endl;          
    }    
}    
namespace Second  {    
       void sayHello() {   
           cout<<"Hello Second Namespace"<<endl;   
       }    
}   
int main()  
{  
 First::sayHello();  
 Second::sayHello();  
return 0;  
}
```
Output
```
Hello First Namespace
Hello Second Namespace
```


-------
##### C++ namespace example: by using keyword

Let's see another example of namespace where we are using "using" keyword so that we don't have to use complete name for accessing a namespace program.

```objectivec
    #include <iostream>  
    using namespace std;  
    namespace First{  
       void sayHello(){  
          cout << "Hello First Namespace" << endl;  
       }  
    }  
    namespace Second{  
       void sayHello(){  
          cout << "Hello Second Namespace" << endl;  
       }  
    }  
    using namespace First;  
    int main () {  
       sayHello();  
       return 0;  
    }  
```
Output
```
Hello First Namespace	
```

-------




