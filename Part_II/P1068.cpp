#include<bits/stdc++.h>
using namespace std;
class contestant {
public:
	int id;
	int score;

	contestant(int x = 0, int y = 0) : id(x), score(y) {}

	bool operator <(const contestant& other) const {
		if(this->score != other.score) return this->score < other.score;
		else return this->id > other.id;
	}

};

int main() {
	int n,m; cin >> n >> m;
	multiset<contestant> c;
	for(int i = 0; i < n; i++) {
		int id, score; cin >> id >> score;
		c.insert(contestant(id, score));
	}
	auto i = --c.end();
	int s = 0, temp = 0;
	m *= 1.5;
	while((s < m || temp == (*i).score) && i != --c.begin()) {
		temp = (*i).score;
		i--;
		s++;
	}
	cout << temp << " " << s << endl;
	s = 0, i = --c.end();
	while((s < m || temp == (*i).score) && i != --c.begin()) {
		cout << (*i).id << " " << (*i).score << endl;
		temp = (*i).score;
		i--;
		s++;
	}

	system("pause");
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// class Contest {
// 	int id;
// 	int score;

// 	Contest(int x = 0, int y = 0) id(x), score(y) {}

// 	bool operator <(Contest& other) {
// 		if(this-> score != other.score) return this.score < other.score;
// 		else return this.id > other.id;
// 	}
// }
// int main() {
// 	int
// }