//(Salesperson Salary Ranges) Use a one-dimensional array to solve the following problem. A company pays its salespeople on a commission basis. The salespeople each receive $200 per week plus 9 percent of their gross sales for that week. For example, a salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of $5000, or a total of $650. Write a program (using an array of counters) that determines how many of the salespeople earned salaries in each of the following ranges (assume that each salesperson’s salary is truncated to an integer amount):
//a) $200–$299
//b) $300–$399
//c) $400–$499
//d) $500–$599
//e) $600–$699
//f) $700–$799
//g) $800–$899
//h) $900–$999
//i) $1000 and over
#include <iostream>
#include <iomanip>
using namespace std;
void wages( int [] );
void display( const int [] );
int main()
{
	int salaries[ 11 ] = { 0 };
	cout << setiosflags( ios::fixed | ios::showpoint );
	wages( salaries );
	display( salaries );
	return 0;
}
void wages( int money[] )
{
	double sales, i = 0.09;
	cout << "Enter employee gross sales (-1 to end): ";
	cin >> sales;
	while ( sales != -1 ) {
		double salary = 200.0 + sales * i;
		cout << setprecision( 2 ) << "Employee Commission is $"<< salary << '\n';
		int x = static_cast< int > ( salary ) / 100;
		++money[ ( x < 10 ? x : 10 ) ];
		cout << "\nEnter employee gross sales (-1 to end): ";
		cin >> sales;
	}
}
void display( const int dollars[] )
{
	cout << "Employees in the range:";
	for ( int i = 2; i < 10; ++i )
		cout << "\n$" << i << "00-$" << i << "99 : " << dollars[ i ];
	cout << "\nOver $1000: " << dollars[ 10 ] << endl;
}


