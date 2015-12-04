#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{
	long long int smallSum = 0, bigSum = 0, number;
    while (cin >> number) 
	{
        if (number == 0) 
		{
            cout << smallSum << endl;
            bigSum += smallSum;
            smallSum = 0;
            
        }
		else 
		{
            smallSum += number;
        }
    }
    cout << bigSum << endl;
    return 0;
}
