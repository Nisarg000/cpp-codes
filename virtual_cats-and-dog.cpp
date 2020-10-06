// Function Overriding and virtua functions
#include <iostream>
using namespace std;

class Animal
{
public:
	//Experiment here with the keyword virtual
	virtual void Eat()
	{
		cout << "\nThe generic Animal.";
	}
};

class Dog : public Animal
{
public:
	void Eat()
	{
		cout << "\nCat eats cat food.";
	}
};

class Cat : public Animal
{
public:
	void Eat()
	{
		cout << "\nDog eats dog food.";
	}
};

void PrintFunction(Animal *whatever)
{
	whatever -> Eat();
}

int main(int argc, char const *argv[])
{
	Animal *pointer;
	Cat biladi;
	Dog dogo;

	pointer = &biladi;

	PrintFunction(pointer);

	pointer = &dogo;

	PrintFunction(pointer);

	return 0;
}