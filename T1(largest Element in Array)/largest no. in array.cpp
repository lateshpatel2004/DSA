#include<iostream>
using namespace std;
 int main()
 {
 	int n;
 	cout<<"Enter the number of element in the array:";
 	cin>>n;
 	
 	int arr[n];
 	cout<<"Enter "<<n<<" Elements:\n";
 	
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];
	}
	
	int largest=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	cout<<"largest element in array is:"<< largest << endl;
	return 0;
 }
