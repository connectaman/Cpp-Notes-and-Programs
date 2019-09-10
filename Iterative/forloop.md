### C++ For Loop

----

The C++ for loop is used to iterate a part of the program several times. If the number of iteration is fixed, it is recommended to use for loop than while or do-while loops.

The C++ for loop is same as C/C#. We can initialize variable, check condition and increment/decrement value.

```objectivec
for(initialization; condition; incr/decr){    
//code to be executed    
} 
```

![](https://static.javatpoint.com/cpp/images/cpp-for-loop1.png)

----

##### C++ For Loop Example
```objectivec
#include <iostream>  
using namespace std;  
int main() {  
         for(int i=1;i<=10;i++){      
            cout<<i <<"\n";      
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

-----

##### C++ Nested For Loop Example
```objectivec
#include <iostream>  
using namespace std;  
   
int main () {  
        for(int i=1;i<=3;i++){      
             for(int j=1;j<=3;j++){      
            cout<<i<<" "<<j<<"\n";      
          }     
        }  
    }  
```
Output
```
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

------

##### C++ Infinite For Loop

```objectivec
#include <iostream>  
using namespace std;  
   
int main () {  
        for (; ;)    
          {    
                  cout<<"Infinitive For Loop";    
          }    
    }
```
Output
```
Infinitive For Loop
Infinitive For Loop
Infinitive For Loop
Infinitive For Loop
Infinitive For Loop
ctrl+c
```


-------


