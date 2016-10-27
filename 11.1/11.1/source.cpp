#include <iostream>

using namespace std;

int main()
{
	//Following code will prompt user to enter array size//
	cout << "Please enter the size of the array: ";
	int size;
	cin >> size;

	int* numbers = new int[size];
	int size = 0;
	int sum = 0;

		for (int i = 0; i < size; i++)
		{
			//will read and store the numbers in a new array and calculate sum//
			cout << "Please enter an integer: ";
			int integer;
			cin >> integer;
			sum = sum + size;

		}

	//following functio will divide numbers in array to find average//
	cout << "The average of the elements in the array is: " << division(sum, size);

}

int division(int sum, int size) //calculates average//
{
	return sum / size;
}
