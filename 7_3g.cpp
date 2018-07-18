//(Bubble Sort Enhancements) The bubble sort described in Exercise 7.11 is inefficient for large arrays. Make the following simple modifications to improve the performance of the bubble sort:
//a) After the first pass, the largest number is guaranteed to be in the highest-numbered element of the array; after the second pass, the two highest numbers are “in place,” and so on. Instead of making nine comparisons on every pass, modify the bubble sort to make eight comparisons on the second pass, seven on the third pass, and so on.
//b) The data in the array may already be in the proper order or near-proper order, so why  make nine passes if fewer will suffice? Modify the sort to check at the end of each pass if any swaps have been made. If none have been made, then the data must already be in the proper order, so the program should terminate. If swaps have been made, then at least one more pass is needed.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[10] = {2,6,4,58,5454,15,41,554,1541,14};
	int hold, numberOfComp = 0, comp;
	cout << "Data items in original order\n";
	for ( int i = 0; i < 10; ++i )
		cout << " " << a[ i ];
	cout << "\n\n";
	for ( int pass = 1; pass < 10; ++pass ) {
		cout << "After pass " << pass - 1 << ": ";
		for ( comp = 0; comp < 10 - pass; ++comp ) {
			++numberOfComp;
			if ( a[ comp] > a[comp+1])
			{
				hold = a[comp];
				a[ comp ] = a[comp +1];
				a[comp +1 ] = hold;
			}	
			cout << " " << a[ comp ];
		}
	
		cout << " "  << a[ comp ] << '\n';
	}
	cout << "\nData items in ascending order\n";
	for ( int j = 0; j < 10; ++j )
		cout << " " << a[ j ];
	cout << "\nNumber of comparisons = " << numberOfComp << endl;
	return 0;
}
