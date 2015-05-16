// StockBestSell.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int prices[5] = {10, 13, 16, 14, 11};

	int length = sizeof(prices)/sizeof(int);
	int max = 0;
	int lowest = prices[0];
	int highest = prices[0];

	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length - i; j++) {
			int value = prices[j + 1] - prices[i];
			if (value > max) {
				max = value;
				lowest = prices[i];
				highest = prices[j + 1];
			}
		}
	}

	printf("max = %d\n", max);
	printf("lowest = %d\n", lowest);
	printf("highest = %d\n", highest);

	return 0;
}

