#include <iostream>
using namespace std;
int suma(int v[], int n) {
	int i, s = 0;
	for (i = 0;i < n;i++)
		s = s + v[i];
	return s;
}
int main()
{
	int v[10], i, s = 0, n;
	n = 10;
	for (i = 0; i < 10;i++)
	{
		v[i] = i + s;
	}
	for (i = 0;i < 10;i++)
		cout << v[i] << " ";
	cout << endl;
	cout << suma(v, n);

	//int* db = (int*)malloc(n * sizeof(int));
	int* db = new int[n];
	for (i = 0;i < 10;i++)
		db[i] = i * 2;
	for (i = 0;i < n;i++)
		cout << db[i] << " ";
	int* const pc = (int*)malloc(n * sizeof(int));
	//pc = (int*)malloc(n * sizeof(int));
	const int* cp = (int*)malloc(n * sizeof(int));
	cp = (int*)malloc(n * sizeof(int));
	//cp[0] = 5;
	const int* const cpc = (int*)malloc(n * sizeof(int));
	cout << endl;
	cout << *db << endl;
	cout << *(db + 1) << endl;
	cout << 1[db];
	//free(db);
	//free(pc);
	delete[] db;
	delete[] db;

	return 0;
}