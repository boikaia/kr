#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int n;
long long ns = 1;
vector <int> sum;

void slag(int a, int min , int i)
{
	sum.resize(n);
	if (a < 0 || min == n)
		return;
	sum[i] = min;
	if (min != 0)
	{
		slag(a - min, min, i + 1);
	}
	slag(a - 1, min + 1, i);
	if (a == 0)
	{
		cout << ns << " "; 
		ns++;
		for (int j = 0; j <= i; ++j)
			cout << sum[j] << (j != i ? '+' : '\n');
	}

}
int main() {
	cin >> n;	
	slag(n,0,0);
	cout << ns << " " << n<<endl;
	return 0;
}
