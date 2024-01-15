#include <iostream>
using namespace std;
void bubblesorting(int *arr, int i, int n)
{

    // base case
    if (i == n - 1)
    {
        return;
    }

    if (arr[i] > arr[i + 1])
    {
        swap(arr[i], arr[i + 1]);
    }

    // this is recursive call  
    return bubblesorting(arr, i + 1, n); 
}

int main()
{



    int arr[5] = {7, 6, 4, 3, 2};
    int n = 5 ;
    
    // this is loop call bubblesorting function 
    for (int i = 0; i < n - 1; i++)
    {
        bubblesorting(arr, 0, n);
      
    }
 

    //  this is loop print the sorting array 
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}