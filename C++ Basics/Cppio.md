### C++ Basic Input/Output

-----

C++ I/O operation is using the stream concept. Stream is the sequence of bytes or flow of data. It makes the performance fast.

If bytes flow from main memory to device like printer, display screen, or a network connection, etc, this is called as output operation.

If bytes flow from device like printer, display screen, or a network connection, etc to main memory, this is called as input operation.

##### I/O Library Header Files

Let us see the common header files used in C++ programming are:

|Header File | 	Function and Description|
|-------|--------|
|<iostream> |	It is used to define the cout, cin and cerr objects, which correspond to standard output stream, standard input stream and standard error stream, respectively.|
|<iomanip> 	|It is used to declare services useful for performing formatted I/O, such as setprecision and setw.|
|<fstream> 	|It is used to declare services for user-controlled file processing.|


-----

##### Standard output stream (cout)

The cout is a predefined object of ostream class. It is connected with the standard output device, which is usually a display screen. The cout is used in conjunction with stream insertion operator (<<) to display the output on a console

Let's see the simple example of standard output stream (cout):
```objectivec
#include <iostream>  
using namespace std;  
int main( ) {  
   char ary[] = "Welcome to C++ tutorial";  
   cout << "Value of ary is: " << ary << endl;  
} 
```
Output
```
Value of ary is: Welcome to C++ tutorial
```


-------

##### Standard input stream (cin)

The cin is a predefined object of istream class. It is connected with the standard input device, which is usually a keyboard. The cin is used in conjunction with stream extraction operator (>>) to read the input from a console.

Let's see the simple example of standard input stream (cin):

```objectivec
    #include <iostream>  
    using namespace std;  
    int main( ) {  
      int age;  
       cout << "Enter your age: ";  
       cin >> age;  
       cout << "Your age is: " << age << endl;  
    }  
```
Output
```
Enter your age: 22
Your age is: 22
```

##### Standard end line (endl)

The endl is a predefined object of ostream class. It is used to insert a new line characters and flushes the stream.

Let's see the simple example of standard end line (endl):

```objectivec
    #include <iostream>  
    using namespace std;  
    int main( ) {  
    cout << "C++ Tutorial";     
    cout << " Hello"<<endl;   
    cout << "End of line"<<endl;   
    }   
```

Output
```
C++ Tutorial Hello 
End of line
```