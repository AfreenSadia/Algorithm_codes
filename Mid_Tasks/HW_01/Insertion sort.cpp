#include<iostream>
using namespace std;
int main ()
{
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};

    cout<<" Input list is: \n";
    for(int i=0;i<10;i++)
    {
        cout <<myarray[i]<<"\t";
    }
    for(int k=1; k<10; k++)
    {
        int tempC = myarray[k];
        int j= k-1;
        while(j>=0 && tempC <= myarray[j])
        {
            myarray[j+1] = myarray[j];
            j = j-1;
        }
        myarray[j+1] = tempC;
    }
    cout<<" \n Sorted list is \n";

    for(int i=0;i<10;i++)
    {
        cout <<myarray[i]<<"\t";
    }
}
