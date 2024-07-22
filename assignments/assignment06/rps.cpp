#include <iostream>

using namespace std;

class Tool {
	/* Fill in */
	private:
		int strength;
		char type;
		const int strength_c;
	public:
		Tool(char t, int s): type(t), strength_c(s) { strength = s;};
		void setStrength(int s);
		virtual bool fight(Tool d) { return false;}
		char getType(void) { return type; }
		int getStrength(void) { return strength; }
		void restoreStrength(void);
		void increaseStrength(void);
		void decreaseStrength(void);
		~Tool() {};

};

void Tool::setStrength(int s) {
	strength = s;
}

void Tool::restoreStrength(void) {
	strength = strength_c;
}

void Tool::increaseStrength(void) {
	strength = strength_c * 2;
}

void Tool::decreaseStrength(void) {
	strength = strength_c / 2;
}

/*
	Implement class Scissors
*/
class Scissors: public Tool {
	public:
		Scissors(int s) : Tool('s', s) {};
		bool fight(Tool d);
		~Scissors() {};
};

bool Scissors::fight(Tool d) {
	this->restoreStrength();
	d.restoreStrength();	
	switch (d.getType())
	{
	case 'p':
		this->increaseStrength();
		break;
	case 'r':
		this->decreaseStrength();
		break;	
	default:
		break;
	}
	bool result = false;
	if (getStrength() < d.getStrength())
	{
		result = false;
	}
	else
	{
		result = true;
	};
	return result;
}

/*
	Implement class Paper
*/
class Paper: public Tool {
	public:
		Paper(int s) : Tool('s', s) {};
		bool fight(Tool d);
		~Paper() {};
};

bool Paper::fight(Tool d) {
	restoreStrength();
	d.restoreStrength();	
	switch (d.getType())
	{
	case 'r':
		this->increaseStrength();
		break;
	case 's':
		this->decreaseStrength();
		break;	
	default:
		break;
	}
	bool result = false;
	if (getStrength() < d.getStrength())
	{
		result = false;
	}
	else
	{
		result = true;
	};
	return result;
}

/*
	Implement class Rock
*/
class Rock: public Tool {
	public:
		Rock(int s) : Tool('s', s) {};
		bool fight(Tool d);
		~Rock() {};
};

bool Rock::fight(Tool d) {
	restoreStrength();
	d.restoreStrength();
	switch (d.getType())
	{
	case 's':
		this->increaseStrength();
		break;
	case 'p':
		this->decreaseStrength();
		break;	
	default:
		break;
	}
	bool result = this->getStrength() < d.getStrength();	
	return result;
}

int main() {
	// Example main function
	// You may add your own testing code if you like

	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	//cout << p1.fight(r1) << r1.fight(p1) << endl;
	//cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}
