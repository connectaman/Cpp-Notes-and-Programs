### C++ Break Statement

------

The C++ break is used to break loop or switch statement. It breaks the current flow of the program at the given condition. In case of inner loop, it breaks only inner loop.

![](https://static.javatpoint.com/cpp/images/cpp-break-statement1.png)

##### C++ Break Statement Example

```objectivec
#include <iostream>  
using namespace std;  
int main() {  
      for (int i = 1; i <= 10; i++)    
          {    
              if (i == 5)    
              {    
                  break;    
              }    
        cout<<i<<"\n";    
          }    
} 
```
Output
```
1
2
3
4
```

------

##### C++ Break Statement with Inner Loop

```objectivec
#include <iostream>  
using namespace std;  
int main()  
{  
    for(int i=1;i<=3;i++){        
            for(int j=1;j<=3;j++){        
                if(i==2&&j==2){        
                    break;        
                        }        
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
3 1
3 2
3 3
```

----------


##### C++ Continue Statement

