#include <iostream>
#include <vector>

using namespace std;

int main()

{

	int arraySize = 5;
	int array = arraySize;
	int* numbers = new int[arraySize];
	double elements;

	double *elements2 = new double; //replacement array//

	for (int i = 0; i < arraySize; i++)
	{ //prompts user to input numbers for array//
		cout << "Enter array elements: " << i + 1 << endl;
		cin >> array;
		cin >> elements;
	}

	if (elements > arraySize - 1) //replaces first array with new, larger array//
	{
		arraySize = arraySize * 2;
		memcpy(&elements, arraySize);
		delete[]elements;
		elements = elements2;
	}

	if (elements == -1)
	{
		break;
	}
	cout << numbers;

}
