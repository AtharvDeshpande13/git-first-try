// Program to find out weather ntered cahracter is Uppercase or  Lowercase
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    int x = a;
    if(x>=65 && x<=90)
    {
        cout<<"Uppercase"<<endl;
    }
    else if(x>=97 && x<=122)
    {
        cout<<"Lowercase"<<endl;
    }
    else
    {
        cout<<"Not a Character"<<endl;
    }
    return 0;
}