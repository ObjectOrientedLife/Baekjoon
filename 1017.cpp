#include <iostream>
#include <ctime>;
using namespace std;

void sieve(bool arr[], int upperBound);

int main()
{
	//inputs
	int inputSize = 0;
	int oddArray[50]{};
	int evenArray[50]{};
	
	cin >> inputSize;
	int oddIdx = 0;
	int evenIdx = 0;
	int value = 0;
	while (oddIdx + evenIdx != inputSize)
	{
		cin >> value;
		if (value % 2)
		{
			oddArray[oddIdx];
			++oddIdx;
		}
		else
		{
			evenArray[evenIdx];
			++evenIdx;
		}
	}

	auto s = clock();
	
	bool primes[2000]{};
	sieve(primes, 2000);

	auto e = clock();

	cout << "time: " << e - s << endl;

	return 0;
}

void sieve(bool arr[], int upperBound)
{
	arr[0] = 1;
	int i = 2;
	while (i <= upperBound)
	{
		int j = 1;
		while (i + i * j <= upperBound)
		{
			arr[(i + i * j) - 1] = 1;
			++j;
		}

		do
		{
			++i;

		} while (i < upperBound && arr[i - 1]);
	}
}

void pair(int odd[], int oddSize, int even[], int evenSize)
{
	int oddIdx = 0;
	int evenIdx = 0;

	while (oddIdx != oddSize)
	{
		bool usedEven[50];
		while (evenIdx != evenSize)
		{

			++evenIdx;
		}
		++oddIdx;
	}
}