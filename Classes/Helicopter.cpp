#include <iostream>
#include <string.h>
#include <vector>

using namespace std;


class Helicopter {
private:
	int fuel;
	int seat;
	string blade;
public:
	Helicopter(int fuel, int seat)
	{
		this->fuel = fuel;
		this->seat = seat;
		//this->blade = blade;
	}

	void fly(int fuel, int seat)
	{
		if (fuel <= 12 && seat >= 10)
		{
			cout << "Cant fly! ";
		}
		if (fuel > 12  && seat < 10)
		{
			cout << "Ready to fly!";
		}
	}

	void landing(bool destination)
	{
		if (destination) 
		{
			cout << "Attention, trying safely land ";
		}
		else
		{
			cout << "Cant land yet ";
		}
	}
};

int main()
{
	Helicopter h(12, 20);
	h.fly(12, 20);
	h.landing(false);
}