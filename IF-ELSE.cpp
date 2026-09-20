#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string fathername;
	cout << " Enter your name = ";
	getline(cin, name);
	cout << " Enter your father name = ";
	getline(cin, fathername);
	int marks;
	cout << " Enter your Marks = ";
	cin >> marks;
	if (marks >= 60)
	{
		cout << "Pass";
    }
	else{
		cout << "Fail";
	}
	return 0;
}
