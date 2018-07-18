//(Dice Rolling) Write a program that simulates the rolling of two dice. The program should use rand to roll the first die and should use rand again to roll the second die. The sum of the two values should then be calculated. [Note: Each die can show an integer value from 1 to 6, so the sum of the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 being the least frequent sums.] Figure 7.26 shows the 36 possible combinations of the two dice. Your program should roll the two dice 36,000 times. Use a one-dimensional array to tally the numbers of times each possible sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable (i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7).
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	const long ROLLS = 36000;
	const int size = 13;
	int excepted[size]={0,0,1,2,3,4,5,6,5,4,3,2,1};
	int x, y, sum[size]={0};
	srand(time(0));
	for (long i =1; i<=ROLLS;++i)
	{
		x= 1+rand()%6;
	 	y=1+rand()%6;
		++sum[x+y];
	}
	cout<<setw(10)<<"Sum"<<setw(10)<<"Total"<<setw(10)<< "Expected" << setw( 10 ) << "Actual\n" << setiosflags( ios::fixed | ios::showpoint );
	for (int j=2; j<size;++j)
		cout<<setw(10)<<j<<setw(10)<<sum[j]<<setw(10)<<100.0*excepted[j]/36<<"%"<<setw(10)<<100.0*sum[j]/36000<<"%\n";
	return 0;
}
