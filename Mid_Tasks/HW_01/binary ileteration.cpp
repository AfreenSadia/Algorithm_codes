#include<iostream>
using namespace std;

int iterativeBS(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index)
    {
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void)
{
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 56;
   int found_index = iterativeBS(array, 0, n-1, element);
   if(found_index == -1 )
   {
      cout<< " Element not found in the array "<<endl;
   }
   else
   {
       cout<< " Element found at index : "<< found_index << endl;
   }
   return 0;
}
