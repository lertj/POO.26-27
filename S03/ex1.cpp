#include <iostream>
#include <cstring>
using namespace std;

void vocale(char v[], char voc[])
{
	int i=0;
	while (v[i] != '\0') {
		if (strchr(voc, v[i]) != NULL)
			strcpy_s(v+i ,strlen(v)-i, v + i + 1);
	  
      i++;
	}
}

int main()
{
	char v[100], voc[20] = "AEIOUaeiou";
	cin >> v;
	vocale(v,voc);
	cout << v;

return 0;
}