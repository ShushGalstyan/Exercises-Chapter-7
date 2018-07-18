//(Craps Game Modification) Modify the program of Fig. 6.11 to play 1000 games of craps. The program should keep track of the statistics and answer the following questions: a) How many games are won on the 1 st roll, 2 nd roll, ..., 20 th roll, and after the 20 th roll? b) How many games are lost on the 1 st roll, 2 nd roll, ..., 20 th roll, and after the 20 th roll? c) What are the chances of winning at craps? [Note: You should discover that craps is one  of the fairest casino games. What do you suppose this means?] d) What’s the average length of a game of craps? e) Do the chances of winning improve with the length of the game?
#include <iostream>
using namespace std;
void SomeFunction(int[],  int, int);
int main()
{
	const int size =10;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"The value in the array are: " << endl;
	SomeFunction(a, 0, size);
	cout<<endl;
}
void SomeFunction(int b[], int current, int size)
{
	if (current < size)
	{
		SomeFunction(b, current+1, size);
		cout<< b[current]<<" ";
	}
}
