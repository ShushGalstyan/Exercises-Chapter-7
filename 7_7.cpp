//(What Does This Code Do?) What does the following program do?
#include <iostream>
using  namespace std;
int array(int [], int);
int array(int b[], int size)
{
	if(size ==1)
		return b[0];
	else 
		return b[size -1] + array(b, size -1);
}
int main()
{	
	const int size = 10;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int result = array(a, 10);
	cout<< "Result is: "<< result<<endl;

}
	
