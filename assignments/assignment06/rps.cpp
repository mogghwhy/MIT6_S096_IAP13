#include <iostream>

using namespace std;

class Tool {
	/* Fill in */
	private:
		int strength;
		char type;
		const int strength_c;
	public:
		Tool(char t): type(t) {}
		void setStrength(int s);
		bool fight(Tool);
		~Tool() {};

};

void Tool::setStrength(int s) {
	strength = s;
}

/*
	Implement class Scissors
*/
class Scissors: public Tool {
	public:
		Scissors(int s) : Tool('s') { Tool::setStrength(s); }
		~Scissors() {};
};

/*
	Implement class Paper
*/

/*
	Implement class Rock
*/

int main() {
	// Example main function
	// You may add your own testing code if you like

	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}
