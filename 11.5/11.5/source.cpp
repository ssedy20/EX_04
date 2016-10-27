#include <iostream>
using namespace std; 

int main()
{
	int array[50], n, i, small; //declaring the array//

	cout << "Please enter the number of elements in the array: ";
	cin >> n;

	for (i = 0; i < n; i++) //will store numbers into the array//
	{
		cout << "Please enter element" << i + 1 << ":";
		cin >> array[i];
	}

	small = array[0];

	cout << "The smallest element is:" << small; //displays smallest element in array//

	return 0;






}