#include <iostream>
#include <string.h>

using namespace std;

class Dog 
{
private:
	int age;
	string name;
	string breed;
public:
	Dog() {
		cout << "Default ctor. " << endl;
	}
	Dog(int age, string name, string breed)
	{
		this->age = age;
		this->name = name;
		this->breed = breed;
	}
	Dog(const Dog& other)
	{
		this->age = other.age;
		this->name = other.name;
		this->breed = other.breed;
		cout << "copy ctor has called" << endl;
	}
	void set_age(int age) 
	{
		this->age = age;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	void set_breed(string breed)
	{
		this->breed = breed;
	}
	int get_age() 
	{
		return age;
	}
	string get_name()
	{
		return name;
	}
	string get_breed()
	{
		return breed;
	}
	void bark()
	{
		cout << "Woof! " << endl;
	}
	string show_dog()
	{
		return ("My name is " + get_name() + "\n" + "my gender is " + get_breed());
	}
};

int main()
{
	Dog dog(2, "Micky", "male");
	cout << dog.get_breed() << endl;
	dog.set_name("Rex");
	cout << dog.get_name() << endl;
	cout << dog.show_dog() << endl;
	dog.set_age(3);
	cout << dog.get_age() << endl;
	dog.bark();
	Dog dog1 = dog;
	cout << dog1.show_dog();
}