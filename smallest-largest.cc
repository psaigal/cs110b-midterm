
#include <iostream>
using namespace std;

void printLargestAndSmallestNums(int arr[], int &count)
{
    int largestNum = arr[0];
    int smallestNum = arr[0];

    for (int i = 0; i < count; i++)
    {
        if (arr[i] < smallestNum) 
        {
            smallestNum = arr[i];
        }
        if (arr[i] > largestNum)
        {
            largestNum = arr[i];
        }
    }
    cout << "Largest number is: " << largestNum << endl;
    cout << "Smallest number is: " << smallestNum << endl;
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

    printLargestAndSmallestNums(arr, count);

    return 0;
}