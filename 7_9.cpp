//(Selection Sort) A selection sort searches an array looking for the smallest element. Then, the smallest element is swapped with the first element of the array. The process is repeated for the subarray beginning with the second element of the array. Each pass of the array results in one element being placed in its proper location. This sort performs comparably to the insertion sort—for an array of n elements, n – 1 passes must be made, and for each subarray, n – 1 comparisons must be made to find the smallest value. When the subarray being processed contains one element, the array is sorted. Write recursive function selectionSort to perform this algorithm.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAXRANGE = 1000;
int smallest_int(const int array[], int low, int high)
{
	static int smallest1 = MAXRANGE;
	if(array[low] < smallest1)
		smallest1 = array[low];
	return low == high ? smallest1 : smallest_int(array, low +1, high);
}
int main()
{
	const int size =10;
	int array[size], smallest;
        srand(time(0));

	for(int i = 0; i<size; ++i)
		array[i] = 1+ rand()% MAXRANGE;
	cout<<"Array is: ";
	for(int k = 0; k< size;++k)
		cout<<array[k]<<" ";
	cout<<endl;
	smallest = smallest_int( array, 0, size - 1 );
	cout<< "Smallest number is: "<< smallest<<endl;
	return 0;
}
