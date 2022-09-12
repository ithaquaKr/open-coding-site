#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float min, max, step, f, c;
	cout << "Lan luot nhap vao 3 gia tri cua do F de thuc hien doi sang do C:" << endl;
	cout << "\t+ MIN (gia tri nho nhat):                                ";
	cin >> min;
	cout << "\t+ MAX (gia tri lon nhat):                                ";
	cin >> max;
	cout << "\t+ STEP (do chenh lech giua cac gia tri do F trong bang): ";
	cin >> step;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "|\t\tF\t\t\t|\t\tC\t\t\t|" << endl << "---------------------------------------------------------------------------------" << endl;
	for(f = min ; f <= max ; f += step){
		c = 1.0f*(1.8*f + 32);
		cout << "|\t\t" << f << "\t\t\t|\t\t" << setprecision(4) << fixed << c << "\t\t\t|" << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
	}
	return 0;
}
