#include "Student.h"
#include "CourseManager.h"
#include "Course.h"

using namespace std;

Course* Student::get_Course(unsigned int i)
{
	return list[i];
}
void Student::addCourse(unsigned int code,CourseManager& cm)
{
	int i=0;
	while(cm.get_Course(i)!=NULL)
	{
		i++;
	}
	i=i-1;

	if(i<10)
	{
		cm.get_Course(i)->enroll_students(this,cm);
		
		int j=0;
		while(list[j]!=NULL)
		{
			j++;
		}
		if(j<6)
		{
			list[j]=cm.get_Course(i);
		}
		else
		{
			cout<<"Cannot enroll for more than 6 courses"<<endl;
		}
	}
}
void Student::updateAttendance(unsigned int code,CourseManager& cm)
{
	int i=0;
	while((cm.get_Course(i))->get_code()!=code)
	{
		i++;
	}
	
	attendance[i]=attendance[i]+1;
}
void Student::updateMarks(float m,unsigned int code,CourseManager& cm)
{
	int i=0;
	while(cm.get_Course(i)->get_code()!=code)
	{
		i++;
	}
	
	marks[i]=m;
}
void Student::removeCourse(unsigned int code,CourseManager& cm)
{
	int i=0;
	while(list[i]->get_code()!=code)
	{
		i++;
	}
	if(i<6)
	{
		for(int j=i;j<5;j++)
		{
			list[j]=list[j+1];
			attendance[j]=attendance[j+1];
			marks[j]=marks[j+1];
		}
		list[5]=NULL;
		attendance[5]=0.0;
		marks[5]=0.0;
		
		int z=0;
	
		while(cm.get_Course(z)->get_code()!=code)
		{
			z++;
		}
		if(z<10)
		{
			int x=0;
			while(cm.get_Course(z)->get_student(x)!=this)
			{
				x++;
			}		

			for(int j=x;j<(cm.get_Course(z)->get_no_of_students())-1;j++)
			{	
				*((cm.get_Course(z))->set_student(j))=cm.get_Course(z)->get_student(j+1);
			}
			*((cm.get_Course(z)->set_student(((cm.get_Course(z)))->get_no_of_students()-1)))=NULL;
		}
	}
	else
	{
		cout<<"The course code does not exists"<<endl;
	}
}