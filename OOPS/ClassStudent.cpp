using namespace std;

class Student {
public:
	int age;
	void display() {
		cout << this->age << " " << this-> rollno << endl;
	}
	void setRollno(int rn) {
		this->rollno = rn;
	}

private:
	int rollno;

};

class Constructor {
public:
	int a;
	int b;

	//parameter contructor taking two argument
	Constructor(int a, int b) {
		this->a = a;
		this->b = b;
	}

	void display() {
		cout << this->a << " " << this -> b << endl;
	}

	//destructor
	~Constructor() {
		cout << "destructor called:" << endl;
	}

};
