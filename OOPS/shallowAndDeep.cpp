#include <bits/stdc++.h>

using namespace std;

class Student{
   int age;
   char *name;

public:
   Student(int age, char* name){
      this->age = age;
      //shallow copy
      this->name = name;

      //deep copy
      this->name = new char[strlen(name) + 1];
      strcpy(this->name, name);
   }

   void display(){
      cout << name << " " << age << endl;
   }
};
int main(){
   char name[] = "Savio";
   Student s1(24, name);
   s1.display();

   name[3] = 'y';
   Student s2(23, name);
   s2.display();

   s1.display();
   return 0;
}

