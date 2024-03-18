#include<Course.h>

Course::void set_details()
{
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
}
Course::void markAttendance(Student *s,unsigned int num_of_students)
{
	for(int i=0;i<num_of_students;i++)
	{
		
	}
}