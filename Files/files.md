###  C++ Files and Streams

In C++ programming we are using the iostream standard library, it provides cin and cout methods for reading from input and writing to output respectively.

To read and write from a file we are using the standard C++ library called fstream. Let us see the data types define in fstream library is:


-----

|Data Type 	|Description|
|------|---------|
|fstream 	|It is used to create files, write information to files, and read information from files.|
|ifstream |	It is used to read information from files.|
|ofstream| 	It is used to create files and write information to the files.|


-------


##### Write into a File

```objectivec
#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to NIIT.\n";  
    filestream << "C++ Tutorial.\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
} 
```
Output
```
The content of a text file testout.txt is set with the data:
Welcome to javaTpoint.
C++ Tutorial.
```

-----

##### Read From a file

```objectivec
    #include <iostream>  
    #include <fstream>  
    using namespace std;  
    int main () {  
      string srg;  
      ifstream filestream("testout.txt");  
      if (filestream.is_open())  
      {  
        while ( getline (filestream,srg) )  
        {  
          cout << srg <<endl;  
        }  
        filestream.close();  
      }  
      else {  
          cout << "File opening is fail."<<endl;   
        }  
      return 0;  
    }  
```
Output
```
Welcome to NIIT.
C++ Tutorial.
```
