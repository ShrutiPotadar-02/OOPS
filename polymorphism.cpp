#include<bits/stdc++.h>
using namespace std;


class AbstractEmployee
{
	virtual void AskforPromotion() = 0;
};

class Employee: AbstractEmployee
{
private:

	string Company;
	int Age;

protected:
	string Name;

public:
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}

	void setCompany(string company) //setter
	{
		Company = company;
	}
	string getCompany()    //getter
	{
		return Company;
	}

	void setAge(int age)
	{
		if (age >= 18)
			Age = age;
	}
	int getAge()
	{
		return Age;
	}

	void IntroduceYourself()
	{
		cout << "Name -" << Name << endl;
		cout << "Company -" << Company << endl;
		cout << "Age -" << Age << endl;
	}
	Employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}

	void AskforPromotion()
	{
		if (Age > 30)
		{
			cout << "Got Promoted" << endl;
		}
		else

		{
			cout << "No Promotion" << endl;
		}
	}

	void Work()
	{
		cout << Name << " " << "is checking mail,performing task..." << endl;
	}
};

class Developer: public Employee {
public:
	string FavprogramingLag;
	Developer(string name, string company, int age, string favprogramingLag)
		: Employee(name, company, age)
	{
		FavprogramingLag = favprogramingLag;
	}
	void FixBug()
	{
		cout << getName() << " " << "fixed bug using" << " " << FavprogramingLag << endl;
	}
	void  Work()
	{
		cout << Name << " " << "is Writing" << " " << FavprogramingLag << " " << "code" << endl;
	}
};


int main()
{
	Developer d = Developer("shruti", "Insta", 22, "C++");
	// d.FixBug();
	d.Work();

	Employee* e = &d;

	e->Work();

}