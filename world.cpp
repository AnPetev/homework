#include <iostream>

class Sun 
{
public:
	bool light() 
	{
		std::cout << "There is light now." << std::endl;
		return true;
	}
	bool dark()
	{
		std::cout << "There is dark now." << std::endl;;
		return true;
	}
};

class Tree 
{
public:
	void produce_air(Sun sun) 
	{
		if (sun.light()) 
		{
			std::cout << "The air is producing" << std::endl;;
		}
	}
};

class Frog 
{
public:
	void sleep(Sun sun)
	{
		if (sun.dark()) 
		{
			std::cout << "I am sleeping." << std::endl;
		}
	}
	void breathe() 
	{
		std::cout << "I am breathing air." << std::endl;

	}
	void move_forward() 
	{
		std::cout << "I am moving right" << std::endl;
	}
	void move_back() 
	{
		std::cout << "I am moving left." << std::endl;
	}
	void eat()
	{
		std::cout << "I am eating grass." << std::endl;
	}
};

class Grass
{
public:
	void consume(Frog frog) 
	{
		frog.eat();
	}
};

int main() 
{
	Frog frog;
	Sun s;
	frog.sleep(s);
	Tree t;
	t.produce_air(s);
	frog.move_forward();
	Grass g;
	g.consume(frog);
	frog.breathe();


}