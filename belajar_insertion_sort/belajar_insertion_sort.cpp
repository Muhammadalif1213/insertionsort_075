#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "masukan jumlah data pada array";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\n Array yang anda masukan maksimal 20 elemen. \n";
		}
	}
