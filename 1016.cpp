#include <iostream>
using namespace std;

bool results[1000001];

int main()
{
	long long min = 0;
	long long max = 0;

	cin >> min >> max;

	const unsigned resultsSize = (unsigned)max - min + 1;
	unsigned count = resultsSize;

	unsigned long long square = 0;
	unsigned long long idx = 0;

	for (unsigned long long i = 2; i * i <= max; ++i)
	{
		square = i * i;
		idx = 0;

		if (min % square)
		{
			idx = square * (min / square + 1) - min;
		}

		while (idx < resultsSize)
		{
			results[idx] = true;
			idx += square;
		}
	}

	for (unsigned long long i = 0; i < resultsSize; ++i)
	{
		count -= results[i];
	}

	cout << count << endl;

	return 0;
}
