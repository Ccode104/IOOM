
#ifndef COURSE_MANAGER_COURSEMANAGER_H
#define COURSE_MANAGER_COURSEMANAGER_H

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
            list[i]= nullptr;
        }
    }

    void addLectureCourse();
    void addLabCourse();
    void addSeminarCourse();
    void removeCourse(unsigned int);
    void displayAvailCourseInfo();
    Course* get_Course_based_on_code(unsigned int code);
    Course* get_Course(unsigned int i);
    Course** set_Course(unsigned int i);
};
#endif //COURSE_MANAGER_COURSEMANAGER_H
