#include<bits/stdc++.h>
using namespace std;

// class and object


class Employee {
public:
	string Name;
	string Company;
	int Age;

	void IntroduceYourself()
	{
		cout << "Name -" << Name << endl;
		cout << "Company -" << Company << endl;
		cout << "Age -" << Age << endl;
	}
};

int main()
{
	Employee employee1;
	// employee1.Name = "Shruti";
	// // employee1.Company = "youtube";
	// employee1.Age = 22;
	employee1.IntroduceYourself();
	return 0;
}