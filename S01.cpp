#include<iostream>
using namespace std;

void adunare(int x, int y) {
	int suma = 0;
	suma = x + y;
	cout<< "suma=";
	cout << suma;
}
void adunare2(int x, int y,int &suma) {
	suma = x + y;
	x = 0;
	y = 0;
}
void adunare3(int *x, int *y, int *suma) {
	suma = *x + y;
	*x = 1;
	*y = 1;
}
int main() {
	int v[10];
	for (int i = 0;i < 10;i++)
		v[i] = i;

	for (int i = 0;i < 10;i++)
		cout << v[i] << " ";
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int s=0;
	adunare3(&a, &b, &s);
	cout << s<<endl;
	cout << a <<" "<< b;
}