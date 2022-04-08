#include <iostream>
#include <iomanip>

using namespace std;

void multab() {
	for (int ind = 1; ind <= 9; ind++) {
		cout << "--------" << ind << "--------" << endl;
		for (int ind2 = 1; ind2 <= 9; ind2++) {
			cout << setw(4) << ind << setw(4) << "*" << setw(4) << ind2 << setw(4) << "=" << setw(4) << ind * ind2 << endl;
		}
	}
}

int main() {
	multab();
}
