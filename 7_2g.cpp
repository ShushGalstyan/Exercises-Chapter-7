//(Bubble Sort) In the bubble sort algorithm, smaller values gradually “bubble” their way upward to the top of the array like air bubbles rising in water, while the larger values sink to the bottom. The bubble sort makes several passes through the array. On each pass, successive pairs of elements are compared. If a pair is in increasing order (or the values are identical), we leave the values as they are. If a pair is in decreasing order, their values are swapped in the array. The comparisons on each pass proceed as follows—the 0th element value is compared to the 1st, the 1st is compared to the 2nd, the 2nd is compared to the third, ..., the second-to-last element is compared to the last element. Write a program that sorts an array of 10 integers using bubble sort.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[10] = { 14, 15 ,7,18,169,156,1,12,13,13};
	int insert;
	cout<< "Array is: ";
	for(int i =0; i<10;++i)
		cout<<" "<<a[i];
	cout<<endl;
	for(int next = 0; next<10;++next)
	{
		insert = a[next];
		int moveItem = next;
		while((moveItem > 0) && (a[moveItem -1])> insert)
		{
			a[moveItem ] = a[moveItem -1];
			moveItem--;
		}
		a[moveItem] = insert;
	}
	cout<<"Sorted array is: ";
	for(int i = 0; i<10; ++i)
		cout<<" "<< a[i];
	cout<<endl;
}
