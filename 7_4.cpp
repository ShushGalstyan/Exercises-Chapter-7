//(Duplicate Elimination) Use a one-dimensional array to solve the following problem. Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is read, validate it and store it in the array only if it isn’t a duplicate of a number already read. After reading all the values, display only the unique values that the user entered. Provide for the “worst case” in which all 20 numbers are different. Use the smallest possible array to solve this problem.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int SIZE = 5;
	int a[SIZE]={0}, subscript = 0, duplicate,value,i,j;
	cout<<"Enter 20 value between 10 to 100: ";
	for(int i = 0; i < SIZE; ++i)
	{
		duplicate = 0;
		cin>>value;
		for(int j=0; j<subscript; ++j)
		{
			if(value == a[j])
			{

				duplicate = 1;
				break;
			}
		}

		if(!duplicate)
			a[subscript++] = value;
	}
	cout << "\nThe nonduplicate values are:\n";
	for(int j=0;a[j]!=0;++j)
		cout<< " "<< a[j];
	cout<<endl;
	return 0;
}
