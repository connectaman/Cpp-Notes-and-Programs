### C++ Continue Statement

-----

The C++ continue statement is used to continue loop. It continues the current flow of the program and skips the remaining code at specified condition. In case of inner loop, it continues only inner loop.

```
jump-statement;      
continue;  
```

------

##### C++ Continue Statement Example

-----

```objectivec
    #include <iostream>  
    using namespace std;  
    int main()  
    {  
         for(int i=1;i<=10;i++){      
                if(i==5){      
                    continue;      
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
6
7
8
9
10
```

------

##### C++ Continue Statement with Inner Loop

```objectivec
    #include <iostream>  
    using namespace std;  
    int main()  
    {  
     for(int i=1;i<=3;i++){        
                for(int j=1;j<=3;j++){        
                 if(i==2&&j==2){        
                    continue;        
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
2 3
3 1
3 2
3 3
```

------

