### C++ Strings

------

In C++, string is an object of std::string class that represents sequence of characters. We can perform many operations on strings such as concatenation, comparison, conversion etc.


##### C++ String Example

```objectivec
    #include <iostream>  
    using namespace std;  
    int main( ) {  
        string s1 = "Hello";    
            char ch[] = { 'C', '+', '+'};    
            string s2 = string(ch);    
            cout<<s1<<endl;    
            cout<<s2<<endl;    
    }  
```
Ouput
```
Hello
C++
```

-------

##### C++ String Access Example

```objectivec
#include <iostream>  
#include <cstring>  
using namespace std;  
int main ()  
{  
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString; 
  return 0;  
} 
```
Output
```objectivec
What is my favourite fruit? apple
What is my favourite fruit? banana
What is my favourite fruit? mango
Answer is correct!!
```

------

##### C++ String Concat Example

```objectivec
#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName; 
    //OR
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    return 0;
}
```
output
```
Enter the key string: Welcome to
Enter the buffer string:  C++ Programming.
Key = Welcome to C++ Programming.
Buffer =  C++ Programming.
```

--------

##### C++ String Copy Example

```objectivec
    #include <iostream>  
    #include <cstring>  
    using namespace std;  
    int main()  
    {  
        char key[25], buffer[25];  
        cout << "Enter the key string: ";  
        cin.getline(key, 25);  
        strcpy(buffer, key);  
        cout << "Key = "<< key << endl;  
        cout << "Buffer = "<< buffer<<endl;  
        return 0;  
    }  
```
Output
```
Enter the key string: C++ Tutorial
Key = C++ Tutorial
Buffer = C++ Tutorial
```

------

##### C++ String Length Example

```objectivec
    #include <iostream>  
    #include <cstring>  
    using namespace std;  
    int main()  
    {  
        string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cout << "The length of the txt string is: " << txt.length();
        return 0;  
    }  
```
Output
```
Length of String = 26
```