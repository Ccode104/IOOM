#include"Course.h"
#include"Student.h"
#include "CourseManager.h"

unsigned int Course::get_code()const
{
	return code;
}
Student* Course::get_student(unsigned int i)
{
	return students_enrolled[i];
}
Student** Course::set_student(unsigned int i)
{
	return &students_enrolled[i];
}
unsigned int Course::get_no_of_students()const
{
	return no_of_students;
}
void Course::set_details()
{
	/*Fill in the Details of the Course*/

	cout<<"Enter the Course Code: "<<endl;
	cin>>code;

	cout<<"Enter the name of the instructor: "<<endl;
	instructor=new char[20];
	cin>>instructor;

	cout<<"Enter the Course Title: "<<endl;
	title=new char[20];
	cin>>title;

	cout<<"Enter the credits for the course: "<<endl;
	cin>>credits;

	cout<<"Enter the number of lectures allocated: "<<endl;
	cin>>total_lectures;

	cout<<"Enter the number of students who can register for the course(less than 100)"<<endl;
	cin>>no_of_students;
}
void Course::markAttendance(char attendance[100],CourseManager& cm)const
{
	/*Marks the attendance of a Student in the Course*/
	for(int i=0;i<no_of_students;i++)
	{
		if(attendance[i]=='p')
		{
			//If present
			students_enrolled[i]->updateAttendance(code,cm);
		}
	}	
}

void Course::enroll_students(Student *s,CourseManager& cm)
{
	if(no_of_students<100)
	{
		students_enrolled[no_of_students]=s;
		no_of_students++;
		s->addCourse(this->code,cm);
	}
	else
	{
		cout<<"Limit for Number of Students has been exceeded"<<endl;
	}
}