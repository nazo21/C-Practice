#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Enter figure size: " << endl;
	int figure;
	cin >> figure;
	
	
	cout << "Enter paint character: " << endl;
	char paint_character;
	cin >> paint_character;
	
	for (int i = 0; i < figure; i++) {
		for (int j = 0 ; j < figure; j++) {
			cout << paint_character;
		}
		cout << endl;
	}
	
	for (int i = 0; i < figure; i++) {
		for (int j = 0; j < figure; j++) {
			if (j == i) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}

			
			
		}
		
		cout << endl;
			
    
    }
	for (int i = 0; i < figure; i++) {
		for (int j = 0; j < figure; j++) {
			if (i + j == figure - 1) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	
	for (int i = 0; i < figure; i++) {
		for (int j = 0; j < figure; j++) {
			if (i == 0 || i == figure - 1 || j == 0 || j == figure - 1) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}


	for (int i = 0; i < figure; i++) {
		for (int j = 0; j < figure; j++) {
			if (i + j == figure - 1 ) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}
		}
		
		for (int k = 0; k < figure; k++) {
			if (i == k) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}
		}
		
	     cout << endl;
	   
	}

	for (int i = 0; i < figure; i++) {
		for (int j = 0; j < figure; j++) {
			if (i == j) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}
		}
	
		for (int k = 0; k < figure; k++) {
			if (i + k == figure - 1) {
				cout << paint_character;
			}
			else {
				cout << " ";
			}
		}
	
		cout << endl;
	}
	






	return 0;

}