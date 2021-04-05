#include <bits/stdc++.h>
#include "ClassStudent.cpp"

using namespace std;

int main() {
	/*Student s1;
	s1.age = 20;
	s1.setRollno(1004, 1234);

	Student s2(s1); // copy constructor.
	// cout << "s1 :" << s1.age << " " << s1.rollno << endl;
	// cout << "s2 :" << s2.age << " " << s2.rollno << endl;
	cout << "s1: ";
	s1.display();
	cout << "s2 :";
	s2.display();*/


	Constructor c1(3, 4);
	Constructor c2(10, 12);
	Constructor *c3 = new Constructor(c2);

	c1.display();
	c2.display();
	c3->display();

	delete c3;

	//copy assignment operator


	return 0;
}