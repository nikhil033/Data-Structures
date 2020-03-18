#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int array[100],k,i,n,e;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
        {
        cin>>array[i];
        }
    cout<<"Enter the k'th position: ";
    cin>>k;

//Deleting the k'th element :
    for(i=k;i<n;i++)
    {
        array[i-1]=array[i];
    }
    n--;
     cout<<" The updated array is: \n";
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
