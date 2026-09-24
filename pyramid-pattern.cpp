// Progam for pyramid pattern printing
/* In this program, we break the pyramid into two parts: the left triangle
 prints the numbers in increasing order, and the right triangle prints the 
 numbers in decreasing order */
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n;
    cout<<"Enter the n value : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++) // For spaces
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++) // For first triangle
        {
            cout<<k;
        }
        for(l=(i-1);l>0;l--) // For second triangle
        {
            cout<<l;
        }
        cout<<endl;  // Moving to next line
    }
}