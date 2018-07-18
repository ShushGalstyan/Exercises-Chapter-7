//(Linear Search) Modify the program in Fig. 7.18 to use recursive function linearSearch to  perform a linear search of the array. The function should receive an integer array and the size of the array as arguments. If the search key is found, return the array subscript; otherwise, return –1.
#include <iostream>
using namespace std;
int LinerSearch(const int array[], int key, int low, int high)
{
	if( array[low] == key )
		return low;
	else if(low ==high)
		return false;
	else
		return LinerSearch(array, key, low+1, high);

}

int main()
{	
	const int size = 100;
	int array[size], key, element;
	for(int i =0; i<size; ++i)
		array[i] = 3*i;
	cout << "Enter the integer search key: ";
	cin>>key;
	cout << endl;
	element = LinerSearch( array, key, 0, size-1 );
	if( element != -1 )
		cout<<"Faund value in element:  "<< element << endl;
	else 
		cout<<"Value not found.";
	return 0;
}


