#include <iostream>
using namespace std;

void printArr(int arr[], int &count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
}

void createArr(int arr[], int size, int &count)
{
    while (count < size)
    {
        int num;
        cout << "What number would you like to add to the array?" << endl;
        cin >> num;
        arr[count] = num;
        count += 1;
    }
}

int main() 
{
	
	int SIZE;
    int count = 0;

	cout << "We are going to create an array. How many elements will be in the array?" << endl;
	cin >> SIZE;

    int arr[SIZE];

    createArr(arr, SIZE, count);

    printArr(arr, count);

    return 0;
}