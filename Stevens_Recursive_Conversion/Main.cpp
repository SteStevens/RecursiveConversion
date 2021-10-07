/*Programmer: Stephanie Stevens
Program: Recursive Conversion
Purpose: To display a recusive function
Start Date: 20181029
End Date: 20181029
Issues: No known issues
*/

//Libraries
#include <iostream>
using namespace std;

//function declaration
void sign(int);


int main()
{  //declare vars
	int signs;

	//Gather info
	cout << "You are driving down the road, you see a row of signs. How many signs do you see? ";
	cin >> signs;
	cout << endl;

	//call the function
	sign(signs);

	//ending the data
	cout << endl << "After passing all of the signs, you finally find one that lets you park." << endl << endl;

	system("pause");
	return 0;
}

//function
void sign(int n)
{
	//keeps calling itself until the number is less than 0
	if (n > 0)
	{
		cout << "No Parking\n";
		sign(n - 1);
	}
}