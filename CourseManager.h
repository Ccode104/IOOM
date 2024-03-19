#ifndef _COURSE_MANAGER_H_
#define _COURSE_MANAGER_H_

class Course;
#include <cstddef>
#include "Course.h"
class CourseManager
{
	private:
		Course* list[10];
	public:
		CourseManager()
		{
			for(int i=0;i<10;i++)
			{
				list[i]=NULL;
			}
		}

		void addCourse();
		void removeCourse(unsigned int);
		void displayAvailCourseInfo();
		Course* get_Course(unsigned int i);
		Course** set_Course(unsigned int i);
};
#endif