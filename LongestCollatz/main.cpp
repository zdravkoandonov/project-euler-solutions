#include <iostream>

using namespace std;

int main()
{
	const int UP_TO_NUM = 1000000;

	unsigned long long totalOperationsCount = 0;

	unsigned long long currentNum;
	int maxTermsInSeq = 0, currentTermsInSeq, maxTermsInSeqNum;
	for (int i = 1; i < UP_TO_NUM; i++)
	{
		/*if (i % 1000 == 0)
		{
			cout << "Passed: " << i << endl;
		}*/
		currentNum = i;
		currentTermsInSeq = 0;
		while (currentNum != 1)
		{
			totalOperationsCount++;
			// cout << "Starting number: " << i << " Current terms count in this sequence: " << currentTermsInSeq << endl;
			currentTermsInSeq++;
			if (currentNum % 2)
			{
				currentNum *= 3;
				currentNum++;
			}
			else
			{
				currentNum /= 2;
			}
		}
		if (currentTermsInSeq > maxTermsInSeq)
		{
			maxTermsInSeq = currentTermsInSeq;
			maxTermsInSeqNum = i;
		}
	}

	cout << maxTermsInSeqNum << endl;

	cout << "Count of total calculations: " << totalOperationsCount << endl;

	cin.get();

	return 0;
}