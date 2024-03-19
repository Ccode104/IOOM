#ifndef _STUDENT_H_
#define _STUDENT_H_

class CourseManager;
class Course;
#include <cstddef>
#include "Course.h"
#include "CourseManager.h"

class Student
{
	unsigned int id;
	char *Name;
	unsigned int semester;
	Course *list[6];
	float attendance[6];
	float marks[6];
	
	public:
			void updateAttendance(unsigned int,CourseManager&);
			void updateMarks(float,unsigned int,CourseManager&);
			void addCourse(unsigned int,CourseManager&);
			void removeCourse(unsigned int,CourseManager&);
			Course* get_Course(unsigned int i);

			Student()
			{
				for(int i=0;i<6;i++)
				{
					list[i]=NULL;
					attendance[i]=0.0;
					marks[i]=0.0;
				}
			}
	
};
#endif