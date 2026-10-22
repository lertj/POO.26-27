#include <iostream>
using namespace std;

class cont_b {
public:
	string iban = "default iban";
	char* nume = nullptr;
	float* tranzactii = nullptr;
	int nr_tranz = 0;

	void afisare_cont_bancar() {
		cout << this->nume << endl;
		cout << this->iban << endl;
		for (int i = 0; i < nr_tranz; i++) {
			cout << tranzactii[i] << " ";
		}
	}

	void schimbareIban() {
		iban = iban + "1";
	}

	void efectuareTranzactie(int suma) {
		for (int i = 0; i < nr_tranz; i++) {
			if (tranzactii[i] == 0) {
				tranzactii[i] = suma;
				break;
			}
		}
	}

};





int main() {

	cont_b b1;

	int nr_tranzactii = 10;

	float* tranz = new float[nr_tranzactii];

	for (int i = 0; i < nr_tranzactii; i++) {
		tranz[i] = 0;
	}

	string nume = "Marcel Ion";
	b1.iban = "dc24993f-0118-4d5f-94ab-bc340b0b6502";
	b1.nume = new char[nume.length() + 1];
	strcpy_s(b1.nume, nume.length() + 1, nume.c_str());

	b1.nr_tranz = nr_tranzactii;
	b1.tranzactii = new float[nr_tranzactii];
	for (int i = 0; i < nr_tranzactii; i++) {
		b1.tranzactii[i] = tranz[i];
	}
	/*
	cout << b1.nume << endl;
	cout << b1.iban << endl;
	for (int i = 0; i < b1.nr_tranz; i++) {
		cout << b1.tranzactii[i] << " ";
	}
	*/

	b1.afisare_cont_bancar();
	b1.schimbareIban();
	b1.afisare_cont_bancar();
	b1.efectuareTranzactie(50);
	b1.afisare_cont_bancar();


	return 0;
}