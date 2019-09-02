#include<iostream>
#include<conio.h>

using namespace std;

//Main Function
int main()
{
    // Variable Declaration
    int a;

    //Get Input Value
    cout<<"Enter the Number :";
    cin>>a;

    //If Condition Check
    if(a > 10)
    {
        // Block For Condition Success
        cout<<a <<" Is Greater than 10";
    }
    else
    {
        // Block For Condition Fail
        cout<<a<<" Is Less than/Equal to 10";
    }

    // Wait For Output Screen
    getch();

    //Main Function return Statement
    return 0;
}