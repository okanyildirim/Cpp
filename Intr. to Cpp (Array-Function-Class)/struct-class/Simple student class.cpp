#include <iostream>
using namespace std;

class Student{
	
	public:
		int age;
		string name;
		
	Student(){
		age=18;
		name="noname";
	}	
	Student(string ad, int yas){
		age=yas;
		name=ad;
		
	}
	
	void showtable(Student stu1, Student stu2,Student stu3){
		cout << "Student1: " << stu1.name << "/" << stu1.age << "\nStudent2: " << stu2.name << "/" << stu2.age << "\nStudent3: " << 
		stu3.name << "/" << stu3.age << "\n"; 
	}
};
int main(){
	Student s1,s3;
	
	s1.name="Okan";
	s1.age=21;
	
	Student s2("Volkan",19);
	s3.showtable(s1,s2,s3);
	
	system("Pause");
	return 0;
}
