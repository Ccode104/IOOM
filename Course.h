#include<stdio.h>

using namespace std;

class Course
{
	private:
		unsigned int code;
		char *title;
		char *instructor;
		unsigned int credits;
		Students **students_enrolled;
		unsigned int total_lectures;

	public:
		virtual void displayDetails()const;
		virtual calculateGrade(Student &)const;
		void markAttendance(Student *)const;
		void enroll_students(Students *);
		Course()
		{
			code=0;
			title=NULL;
			instructor=NULL;
			credits=0;
			students_enrolled=NULL;
			total_lectures=0;
		}

		void set_details();

}