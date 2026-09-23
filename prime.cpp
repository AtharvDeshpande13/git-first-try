// check if number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int flag;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<=1)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
                
            }
        }
        if(flag==1)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not Prime"<<endl;
        }
    }
}