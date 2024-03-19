#include "CourseManager.h"


class Course;
#include"Course.h"
#include "CourseManager.h"

Course* CourseManager::get_Course(unsigned int i)
{
	return list[i];
}

Course** CourseManager::set_Course(unsigned int i)
{
	return &list[i];
}
void CourseManager::addCourse()
{
	/*Adds a new course to be offerred*/

	Course *c;

	//Dynamically allocate an object of type Course
	c=new Course();

	//Fill the details
	c->set_details();

	//Find the position in list of courses for insertion
	int i=0;
	while((list[i]!=NULL)&&(i<10))
	{
		i++;
	}
	if(i<10)
	{
		//Insert the course pointer
		list[i]=c;
	}
	else
	{
		//In case of out of bounds(list full)
		cout<<"Limit of number of courses available exceeded"<<endl;
	}
	
}

void CourseManager::removeCourse(unsigned int code)
{
	/*Removes a course from list of offerred Courses */

	//Find the course in the list
	int i=0;
	while((list[i]->get_code()!=code)&&(i<10))
	{
		i++;
	}

	if(i<10)
	{
		//If found,remove the course from the report of each student
		for(int k=0;k<list[i]->get_no_of_students();k++)
		{
			list[i]->get_student(k)->removeCourse(list[i]->get_code(),*this);
		}

		//Then remove the course
		for(int j=i;j<9;j++)
		{
			list[j]=list[j+1];
		}
		list[9]=NULL;

		cout<<"The Course with the code "<<code<<" has been successfully removed"<<endl;
	}
	else
	{
		//If not found
		cout<<"Course Not offerred"<<endl;
	}
}

void CourseManager::displayAvailCourseInfo()
{
	/*Displays all the courses being offerred*/

	for(int i=0;i<10;i++)
	{
		//list[i]->displayDetails();
	}
}