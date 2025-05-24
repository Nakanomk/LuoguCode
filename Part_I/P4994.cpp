#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = 0, b = 1, c, i, M;
	cin >> M;
	for (i = 0; a != 0 || b != 1 || i == 0; i++)
	{
		c = a + b;
		a = b % M;
		b = c % M;
	}
	cout << i;
	system("pause");
	return 0;
}
/*
int fabonacci(int l) {
	if(l == 0) return 0;
	if(l == 1) return 1;
	return fabonacci(l-1) + fabonacci(l-2);
}
int main() {
	int a = -1, b = -1, M, i = 0;
	cin >> M;
	while(a != 0 || b != 1) {
		a = b;
		i++;
		b = fabonacci(i) % M;
	}
	cout << i - 1;
	system("pause");
	return 0;
} */