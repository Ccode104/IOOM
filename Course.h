#ifndef _COURSE_H_
#define _COURSE_H_
#include<iostream>
#include <cstddef>

class Student;

#include"Student.h"
#include "CourseManager.h"

using namespace std;

class Course
{
	private:
		unsigned int code;
		char *title;
		char *instructor;
		unsigned int credits;
		Student **students_enrolled;
		unsigned int no_of_students;
		unsigned int total_lectures;

	public:
		virtual void displayDetails()const{}
		virtual void calculateGrade(Student &)const{}
		void markAttendance(char *,CourseManager&)const;
		void enroll_students(Student *,CourseManager&);
		void set_details();
		unsigned int get_no_of_students()const;
		Student* get_student(unsigned int);
		Student** set_student(unsigned int);
		unsigned int get_code()const;

		Course()
		{
			code=0;
			title=NULL;
			instructor=NULL;
			credits=0;
			students_enrolled=new Student*[100];
			for(int i=0;i<100;i++)
			{
				students_enrolled[i]=NULL;
			}
			total_lectures=0;
		}
};
#endif