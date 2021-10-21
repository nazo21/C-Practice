#include <iostream> 
#include <cmath> 
#include<cstdlib>


using std::cin; using std::cout; using std::endl;

int main() {


   cout << "1. Absolute Value: " << endl;
   cout << "2. square root: " << endl;
   cout << "3. floor: " << endl;
   cout << "4. power: " << endl;
   int num;
   cout << "Select an operation" << endl;
   cin >> num;

   while (num <= 4) {

	   switch (num) {
	   case 1:
		   int n;
		   cout << "Enter number: " << endl;
		   cin >> n;
		   cout << abs(n);
		   break;
	   case 2:
		   double x;
		   cout << " Enter number: " <<  endl;
		   cin >> x;
		   cout << sqrt(x);
		   break;
	   case 3:
		   double y;
		   cout << " Enter number: " << endl;
		   cin >> y;
		   cout << floor(y);
		   break;
	   case 4:
		   double z, m;
		   cout << "Enter base: " << endl;
		   cin >> z;
		   cout << "Enter power : " << endl;
		   cin >> m;
		   cout << pow(z, m);
           break;
	     
	   default:
           
		   cout << "Select an operation" << endl;
	   
	   
	   
	   }







	   return 0;

   }






















	
}