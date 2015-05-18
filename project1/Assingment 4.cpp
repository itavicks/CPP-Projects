#include <iostream> // A PROGRAM THAT INPUT A FIVE-DIGITS INTEGER, SEPERATES THE INTEGER INTO ITS UNITS AND PRINT THEM SEPERATED BY THREE SPACES EACH
using namespace std;

int main()

{
	int num1, num2, num3, num4, num5, largest, smallest;
	
	cout << "enter five integers: ";
	cin >>num1>>num2>>num3>>num4>>num5;
	
	largest = num1;
	smallest = num2;
	
	if (num1 > largest)
	largest = num1;
	
	if (num2 > largest)
	largest = num2;
	
	if (num3 > largest)
	largest = num3;
	
	if (num4 > largest)
	largest = num4;
	
	if (num5 > largest)
	largest = num5;
	
	if (num1 < smallest)
	smallest = num1;
	
	if (num2 < smallest)
	smallest = num2;
	
	if (num3 < smallest)
	smallest = num3;
	
	if (num4 < smallest)
	smallest = num4;
	
	if (num5 < smallest)
	smallest = num5;
	
	cout<<"largest"<<"/Smallest is "<<smallest<<endl;
	
	return 0;
}
	
