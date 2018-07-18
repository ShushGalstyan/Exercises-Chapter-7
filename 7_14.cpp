//(Find the Minimum Value in an Array) Write a recursive function recursiveMinimum that takes an integer array, a starting subscript and an ending subscript as arguments, and returns the smallest element of the array. The function should stop processing and return when the starting subscript equals the ending subscript.
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
const int MAXNUMBER=500;
using namespace std;
int Min_number(const int array[], int low, int higth)
{
	static int smallest= MAXNUMBER;
	if( array[low] < smallest )
		smallest = array[low];
	return low == higth ? smallest : Min_number(array, low + 1, higth);
}

int main()
{
	const int size  = 5;
	int array[size], smallest;
	srand(time(0));
	for(int i=0; i<size; ++i)
		array[i] = 1 + rand() % MAXNUMBER;
	cout<<"ARRAY is: ";
	for(int i =0; i<size; ++i)
		cout<<array[i]<< " ";
	cout<<endl;
	smallest = Min_number(array, 0, size);
	cout<<"Smallest number is: "<<smallest<<endl;
	return 0;
	

}
