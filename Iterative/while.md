### C++ While loop

In C++, while loop is used to iterate a part of the program several times. If the number of iteration is not fixed, it is recommended to use while loop than for loop.

```objectivec
while(condition){    
//code to be executed    
}  
```
![](https://static.javatpoint.com/cpp/images/cpp-while-loop1.png)


##### C++ While Loop Example

```objectivec
    #include <iostream>  
    using namespace std;  
    int main() {         
     int i=1;      
             while(i<=10)   
           {      
                cout<<i <<"\n";    
                i++;  
              }       
        }  
```
Output
```
1
2
3
4
5
6
7
8
9
10
```

--------

##### C++ Nested While Loop Example
```objectivec
    #include <iostream>  
    using namespace std;  
    int main () {  
            int i=1;      
              while(i<=3)     
              {    
                  int j = 1;    
                  while (j <= 3)    
    {      
                cout<<i<<" "<<j<<"\n";      
                j++;  
              }     
               i++;  
            }  
        }    
```

--------
Output
```objectivec
1 1
1 2
1 3
2 1
2 2 
2 3
3 1
3 2
3 3
```

-----

##### C++ Infinitive While Loop Example:

We can also create infinite while loop by passing true as the test condition.

```objectivec
#include <iostream>  
using namespace std;  
int main () {  
        while(true)  
          {    
                  cout<<"Infinitive While Loop";    
          }    
    } 
```
Output
```
Infinitive While Loop 
Infinitive While Loop
Infinitive While Loop
Infinitive While Loop
Infinitive While Loop
ctrl+c
```

------


