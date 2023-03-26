#include<iostream>
using namespace std;


class Clock
{
public:
	int second;


	Clock(int s) : second(s)
	{}
	void display()
	{
		cout << second << " " << "second" << endl;
	}
};
int main()
{
	//operator ���() const;

	//Counter counter(1250);
	//counter.display();

	/*int sec = counter;
	cout << sec;*/

	//===============


	Counter counter(5, 5, 20);
	counter.display();

	Clock sec = counter.t();
	sec.display();

}