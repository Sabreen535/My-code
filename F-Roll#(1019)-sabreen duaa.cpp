#include<iostream>
using namespace std;

void insertSort(int arr[],int n)
{
	for(int i=1; i<n;i++)
	{    int n;
		int current=arr[i];
		int j=i-1;
	while(j>=0 && arr[j]>current)
 	  {
 	  	arr[j+1]=arr[j];
 	  	j--;
	   }
	   arr[j+1]=current;
   }
}
 int main() 

{
           cout<<"\n\t\t\t\t\t **====**Insertion Sorting **====**"<<endl<<endl<<endl;
	     
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the values in any order:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Before Sorting the values are:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"  ";
	}
	
	insertSort(arr , n);
	cout<<endl<<endl<<"After Sorting the values a:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"  ";
	}	
	
	return 0;
     }

 

	

