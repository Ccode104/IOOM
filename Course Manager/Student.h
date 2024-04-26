//
// Created by HP on 04-04-2024.
//

#ifndef COURSE_MANAGER_STUDENT_H
#define COURSE_MANAGER_STUDENT_H

class Course;
#include "Course.h"
#include "CourseManager.h"

class Student
{
private:
    unsigned int id{};
    char *Name;
    unsigned int semester{};
    Course *list[6]{};
    float attendance[6]{};
    unsigned int marks[6]{};

public:
    void setDetails();
    void updateAttendance(unsigned int,CourseManager&);
    void updateMarks(unsigned int,unsigned int,CourseManager&);
    unsigned int get_Marks(unsigned int,CourseManager&);
    void addCourse(unsigned int,CourseManager&);
    void removeCourse(unsigned int,CourseManager&);
    Course* get_Course(unsigned int i);

    Student()
    {
        Name= nullptr;
        for(int i=0;i<6;i++)
        {

            list[i]= nullptr;
            attendance[i]=0.0;
            marks[i]=0.0;
        }
    }

};
#endif //COURSE_MANAGER_STUDENT_H
