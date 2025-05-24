#include<bits/stdc++.h>
using namespace std;

int main() {
	string word;
	cin >> word;
	char ch, chFormer = 0;
	int caseTrans = 'a'- 'A';
	int count = 0, check = 0, length = word.length(), flag = -1, inputLength = 0;
	while(getchar() != '\n');
	while((ch = getchar()) != EOF) {
		inputLength++;
		if(check == length) {
			if(ch == ' ') {
				count++;
				if(flag == -1) flag = inputLength - 1 - length;
			}
			check = 0;
		}
		if(ch == word[check] || ch + caseTrans == word[check] || ch - caseTrans == word[check])
			{if(check != 0 || chFormer == ' ' || chFormer == 0) check++;}
		else check = 0;
		#ifdef DEBUG
		cout << ch << " " << chFormer << " " << check << " " << flag << " " << count << " " << inputLength << endl;
		#endif
		chFormer = ch;
	}
	inputLength++;
	if (check == length)
	{
		count++;
		if (flag == -1)
			flag = inputLength - 1 - length;
		check = 0;
	}
	if(count != 0) cout << count << " ";
	cout << flag;

	system("pause");
	return 0;
}