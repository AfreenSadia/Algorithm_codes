#include<iostream>
using namespace std;
int main()
{
    int a1, arr[50], i, j, temp, small, chk, index;
    cout<<"Enter the Size of Array: ";
    cin>>a1;
    cout<<"Enter "<<a1<<" Array Elements: ";
    for(i=0; i<a1; i++)
        cin>>arr[i];
    for(i=0; i<(a1-1); i++)
    {
        chk=0;
        small = arr[i];
        for(j=(i+1); j<a1; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<a1; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
