//Palindromes) A palindrome is a string that is spelled the same way forward and backward. Examples of palindromes include “radar” and “able was i ere i saw elba.” Write a recursive function testPalindrome that returns true if a string is a palindrome, and false otherwise. Note that like an array, the square brackets ( [] ) operator can be used to iterate through the characters in a string .
#include <iostream>
#include <string>
using namespace std;

bool polindrome(const char array[], int left, int right)
{
	if(left==right || left>right)
		return true;
	else if(array[left] != array[right])
		return false;
	else
		return polindrome(array, left+1, right -1);
}

int main()
{
	const int size = 100;
	char c, string[size], stringcopy[size];
	int count = 0, copycount, i;
	cout<<"Please enter a string: ";
	while((c = cin.get())!= '\n' && count < size)
		string[count++] = c;
	string[count]='\0';
	for( copycount =0, i=0; string[i] != '\0'; ++i )
		if(string[i] != ' '  )
			stringcopy[copycount++] =string[i];
	if ( polindrome(stringcopy,0,copycount-1 ) )
		cout<< string << " is a polindrome."<<endl;
	else
		cout<<string<< " is not a polindrome."<<endl;
	return 0;
}
