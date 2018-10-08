#include "two-classification.hpp"
#include "five-classification.hpp"
#include "regression.hpp"

int main() {
	cout << "0" << endl;
	// file test
	ifstream train_file;
	train_file.open("Input/2/testData.txt");
	if (train_file.is_open()) {
		cout << "Open!" << endl;
	}
	train_file.close();
	system("pause");
	return 0;
}