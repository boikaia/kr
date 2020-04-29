#include "stdafx.h"
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int s; //сумма для размена
	int a[20] = { 1, 6, 7, 10, 22, 23, 25, 36, 37, 59, 60, 61, 79, 80, 101, 139, 289, 355, 357, 429 };
	int n = 20; //число номиналов 

	cin >> s;

	vector <int> d(s + 1);
	d[0] = 0;
	for(int i=1; i<=s; i++)
	{
		d[i] = s + 1;
		for (int j = 0; j < n; j++)
			if (i - a[j] >= 0)
				d[i] = __min(d[i], d[i-a[j]]+1);
	}
	cout << d[s];
    return 0;
}
