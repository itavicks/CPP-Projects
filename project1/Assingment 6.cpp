#include <iostream>
int main ()
{
	using namespace std;
	int height;
	int weight;
	int BMI;
	cout <<"input your height:";
	cin>> height;
	cout<<"input your weight:\n";
	cin>> weight;
    BMI=(weight/height*height);
	
	if(BMI >=20.0 && BMI <=25.0)
	cout <<"you are underweight";
	else
	cout <<"you are overweight";
	
	return 0;
	
}
