//(Print an Array) Write a recursive function printArray that takes an array, a starting subscript and an ending subscript as arguments, returns nothing and prints the array. The function should stop processing and return when the starting subscript equals the ending subscript.
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void printArray(const int array[], int low, int higth)
{
	cout<< " " <<array[low];
	if (low == higth)
		return;
	else
		return printArray(array, low +1, higth);
}
int main()
{
	const int size =10;
	int array[size], MAXNUMBER = 500;
	srand(time(0));
	for(int i=0; i< size; ++i)
		array[i] = 1+ rand()% MAXNUMBER;
	cout<<"The array printed in main: ";
	for(int j =0; j<size; ++j)
		cout<<" "<<array[j];
	cout<<endl;
	cout<<"The array printed  in pintArray: ";
	printArray(array,0,size-1);
	cout<<endl;

}
