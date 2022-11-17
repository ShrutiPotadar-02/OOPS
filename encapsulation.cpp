#include<bits/stdc++.h>
using namespace std;
int main() {

	//Encapsulation-The idea of encapsulation is to tie together the data and methods that operate on that data so that they are grouped within a class.

	//To access this encapsulated properties of a class we use methods like- Getters and Setters.


	class Employee
	{
	private:
		string Name;
		string Company;
		int Age;

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
		string getAge()
		{
			return age;
		}

	};
	return 0;
}