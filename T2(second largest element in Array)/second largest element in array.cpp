#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) 
	{
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
        int largest = arr[0];
        int seclargest = INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>largest)
            {
                seclargest=largest;
                largest=arr[i];
            }
            else if(seclargest<arr[i]&&largest>arr[i] )
            {
                seclargest=arr[i];
            }
        }
        
        if(seclargest==INT_MIN)
        {
            return -1;
        }
        else
        {
            cout<<"Second largest element of the array is :"<<seclargest;
        }
}
    


