### C++ Do-While Loop

The C++ do-while loop is used to iterate a part of the program several times. If the number of iteration is not fixed and you must have to execute the loop at least once, it is recommended to use do-while loop.

The C++ do-while loop is executed at least once because condition is checked after loop body.

Syntax
```objectivec
    do{    
    //code to be executed    
    }while(condition);  
```

![](https://static.javatpoint.com/cpp/images/cpp-do-while-loop1.png)


C++ do-while Loop Example
```objectivec
    #include <iostream>  
    using namespace std;  
    int main() {  
         int i = 1;    
              do{    
                  cout<<i<<"\n";    
                  i++;    
              } while (i <= 10) ;    
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

C++ Nested do-while Loop

```objectivec
#include <iostream>  
using namespace std;  
int main() {  
     int i = 1;    
         do{    
              int j = 1;          
              do{    
                cout<<i<<"\n";        
                  j++;    
              } while (j <= 3) ;    
              i++;    
          } while (i <= 3) ;     
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

C++ Infinitive do-while Loop
```objectivec
    do{    
    //code to be executed    
    }while(true);  
```

-----

C++ Infinitive do-while Loop Example

```objectivec
    #include <iostream>  
    using namespace std;  
    int main() {  
          do{    
                  cout<<"Infinitive do-while Loop";    
              } while(true);     
    }  
```
Output
```
Infinitive do-while Loop 
Infinitive do-while Loop
Infinitive do-while Loop
Infinitive do-while Loop
Infinitive do-while Loop
ctrl+c
```

-------

