

#ifndef COURSE_MANAGER_COURSE_H
#define COURSE_MANAGER_COURSE_H

#include "Student.h"
#include "CourseManager.h"

class Student;

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
    virtual void displayDetails()const=0;
    virtual char calculateGrade(Student &,CourseManager& cm)const=0;
    void markAttendance(char *,CourseManager&)const;
    void enroll_students(Student *,CourseManager&);
    void set_details();
    Student* get_student(unsigned int);
    Student** set_student(unsigned int);
    unsigned int get_code()const;
    char* get_title()const;
    char* get_instructor()const;
    unsigned int get_credits()const;
    unsigned int get_total_lectures()const;
    unsigned int get_no_of_students()const;

    Course()
    {
        no_of_students=0;
        code=0;
        title=nullptr;
        instructor=nullptr;
        credits=0;
        students_enrolled=new Student*[100];
        for(int i=0;i<100;i++)
        {
            students_enrolled[i]=nullptr;
        }
        total_lectures=0;
    }
};

class LectureCourse :public Course
{
public:
    void displayDetails()const;
    char calculateGrade(Student&,CourseManager&)const;
};

class LabCourse :public Course
{
public:
    void displayDetails()const;
    char calculateGrade(Student& ,CourseManager& )const;
};

class SeminarCourse :public Course
{
public:
    void displayDetails()const override;
    char calculateGrade(Student& ,CourseManager& )const;
};

#endif //COURSE_MANAGER_COURSE_H
