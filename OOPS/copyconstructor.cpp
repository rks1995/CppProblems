#include <bits/stdc++.h>

using namespace std;

class Student{
   int age;
   char *name;

public:
   Student(int age, char name[]){
      this->age = age;
      this->name = new char(strlen(name)+1);
      strcpy(this->name, name);
   }

   //copyconstructor
   Student(const Student &s1){
      this->age = s1.age;
      this->name = s1.name;
   }

   void display(){
      cout << name << " " << age << endl;
   }

};
int main(){

   char name[] = "savio";
   Student s1(24, name);
   s1.display();

   Student s2(s1);
   s2.display();
   return 0;
}

