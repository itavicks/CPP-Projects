#include <iostream> // A PROGRAM THAT READS IN TWO INTEGER TO DETERMINE IF THE FIRST IA A MULTIPLE OF THE SECOND

using namespace std;

int main()

{
	int num1, num2;
	
	std::cout << "enter two integers: ";
	cin>>num1>>num2;
	
	if (num1 % num2==0)
	cout<<num1<< "is amultiple of" <<num2<< endl;
	
	if (num1 % num2 !=0)
	cout<<num1<< "is not a multiple of" <<num2<< endl;
	
	return 0;
}
