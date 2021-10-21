#include<iostream>
#include<ctime>
#include<cstdlib>
using std::cout; using std::cin; using std::endl;
int main() {
	srand (time(nullptr));
	int age = rand() % 101 + 100 ;
	cout << age << endl;
	int guess = 0;
	while (guess != age) {
		cout << "Hello, handsome prince. I am an ugly old troll. How old am I?" << endl;
		cin >> guess;

		if (guess < age) {
			cout << "Wrong, I am older. No fair maiden for you. Better luck next year." << endl;
			age += 1;
		}
		else if (guess > age ) {
			cout << "Wrong, I am younger. No fair maiden for you. Better luck next year" << endl;
			guess = 0;
			age += 1;
		}
		else {
			cout << "You got it! Here is the fair maiden. Live happily ever after!" << endl;
		}

	}











}