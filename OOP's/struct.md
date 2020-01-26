### C++ Structs


In C++, classes and structs are blueprints that are used to create the instance of a class. Structs are used for lightweight objects such as Rectangle, color, Point, etc.

Unlike class, structs in C++ are value type than reference type. It is useful if you have data that is not intended to be modified after creation of struct.

C++ Structure is a collection of different data types. It is similar to the class that holds different types of data.

```c++
struct Student  
{  
    char name[20];  
     int id;  
     int age;  
}  
```

##### C++ Struct Example


```c++
#include <iostream>    
using namespace std;    
 struct Rectangle      
{      
   int width, height;      
      
 };      
int main(void) {    
    struct Rectangle rec;    
    rec.width=8;    
    rec.height=5;    
   cout<<"Area of Rectangle is: "<<(rec.width * rec.height)<<endl;    
 return 0;    
}    
```
Output
```
Area of Rectangle is: 40
```

