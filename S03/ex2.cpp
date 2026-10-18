#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
/// <summary>
/// numarul de cuvinte dintr o prop
/// </summary>
/// <param name="s"></param>
void nr_cuv(char s[])
{
	int k = 0;
	char* pch;
	pch = strtok(s, " .");
	while (pch != NULL)
	{
		pch = strtok(NULL, " .");
		k++;
	}
	cout << k;
	

}

int main()
{
	char s[101];
	cin.getline(s, 101);

	nr_cuv(s);
	
	return 0;
	
}