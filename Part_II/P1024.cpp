#include<bits/stdc++.h>
using namespace std;

class equation {
	public:
		double a, b, c, d;
		
		equation(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}
		double isX(double x) {
			return a * x * x * x + b * x * x + c * x + d;
		}
};

int main() {
	double a,b,c,d;
	int s = 0;
	cin >> a >> b >> c >> d;
	equation e(a,b,c,d);
	for(int i = -100; i < 100; i++) {
		double l = i, r = l + 0.999, status = 0;
		while(e.isX(l) * e.isX(r) <= 0 && l <= r - 0.001) {
			#ifdef DEBUG
			cout << e.isX(l) << " " << l << " " << r << endl;
			#endif
			double mid = (l + r) / 2;
			if(e.isX(l) * e.isX(mid) <= 0) r = mid;
			else l = mid;
		}
		if(abs(e.isX(l)) <= 0.01) {
			printf("%.2lf ", l);
			#ifdef DEBUG
			cout << endl;
			#endif
			s++;
		}
		if(s == 3) break;
	}

	system("pause");
	return 0;
}