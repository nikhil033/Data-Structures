#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int array[100],i,n,loc=0,item;

    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=1;i<=n;i++)
        {
            cin>>array[i];
        }
    cout<<"\nEnter the item to be searched: ";
    cin>>item;
    for(i=1;i<=n;i++)
        {
            if(array[i]==item)
                {
                    loc = i;
                }
        }
    if(loc==0)
        {
            cout<<"The ITEM is not present in the List!!!";
        }
    else
        {
            cout<<"The location of the ITEM of the item is "<<loc<<".";
        }
}
