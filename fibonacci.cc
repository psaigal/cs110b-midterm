// By starting with 1 and 2, the first 10 fibonacci numbers will be:1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... By considering the terms in the Fibonacci sequence whose values do not exceed 1000, find the sum of the even-valued terms. *

#include <iostream>
using namespace std;

void fibonacciSequence()
{
    int z;
    int x = 1;
    int y = 2;
    int sum = 2;

    while (z <= 610)
    {
        z = x + y;
        x = y;
        y = z;

        cout << z << endl;

        if (z % 2 == 0) 
        {
            sum += z;
        }
    }
    cout << "Sum: " << sum << endl;
}

int main() 
{
    fibonacciSequence();

    return 0;
    
}

