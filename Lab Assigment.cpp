#include <iostream>
#include <string>
using namespace std;
int main()
{
	//.........TASK =01 ............
	cout << " \t Task 01 = ASCII Art/ Pattern:";
	cout << endl;
	cout << "\n";
	cout << "    *    \n";
	cout << "   ***   \n";
	cout << "  *****  \n";
	cout << " ******* \n";
	cout << "  *****  \n";
	cout << "   ***   \n";
	cout << "    *    \n";
	cout << endl;
	
	//....... TASK 02 ...........
	cout << " \t Task 02 = Arithmetic on two number:";
	cout << endl;
	cout << "\n";
	double num1, num2;
	cout << "Enter First number  = ";
	cin >> num1;
	cout << "Enter second number = ";
	cin >> num2;
	cout << " Sum         = " << num1 + num2;
	cout << endl;
	cout << " Suntraction = " << num1 - num2;
	cout << "\n";
	cout << " Product     = " << num1 * num2;
	cout << "\n";
	cout << " Quotient    = " << num1 / num2;
	cout << "\n";
	cout << endl;
	
	//......... TASK 03 ...........-
	cout << " \t Task 03 = Formatted Student Profile:";
	cout << endl;
	cout << endl;
	string name;
	int age;
	double cgpa;
	bool enrolled;
	cout << " Enter your name : ";
	cin >> name;
	cout << " Enter your age  : ";
	cin >> age;
	cout << "Enter your CGPA  : ";
	cin >> cgpa;
	cout << " Are your enroll : ";
	cin >> enrolled;
	cout << endl;
	cout << "  Student Profile: ";
	cout << " \n";
	cout << " Name   : " << name << endl;
	cout << " Age    : " << age << endl;
	cout << " CGPA   : " << cgpa << endl;
	cout << " Enroll : " << enrolled << endl;
	cout << endl;
	cout << endl;
	
	//........ TASK 04 ...........
	cout << " \t Task 04 = Using getline for Names with space:";
	cout << endl;
	cout << endl;
	string Name;
	string city;
	cout << "Enter your full name : ";
	getline(cin, Name);
	cout << endl;
	cout << "Enter your city      : ";
	getline(cin, city);
	cout << "\n \n";
	cout << " Name : " << Name;
	cout << endl;
	cout << " City : " << city;
	cout << endl;
	cout << endl;

	//........ TASK 05 ...........
	cout << " \t Task 05 = Challege: Check if a character is vowel:";
	cout << endl;
	cout << endl;
	char vowel;
	bool a;
	cout << "Enter your character: ";
	cin >> vowel;
	a = vowel == 'a' || 'e' || 'i' || 'o' || 'u';
	cout << boolalpha << a;
	return 0;
}
