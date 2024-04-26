#include <iostream>

#include "Student.h"
#include "Course.h"

using namespace std;

unsigned int Course::get_code()const
{
    return code;
}
Student* Course::get_student(unsigned int i)
{
    return students_enrolled[i];
}
Student** Course::set_student(unsigned int i)
{
    return &students_enrolled[i];
}
unsigned int Course::get_no_of_students()const
{
    return no_of_students;
}
void Course::set_details()
{
    /*Fill in the Details of the Course*/

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

    cout<<"Enter the number of students who can register for the course(less than 100)"<<endl;
    cin>>no_of_students;
}
void Course::markAttendance(char attendance[100],CourseManager& cm)const
{
    /*Marks the attendance of a Student in the Course*/
    for(int i=0;i<no_of_students;i++)
    {
        if(attendance[i]=='p')
        {
            //If present
            students_enrolled[i]->updateAttendance(code,cm);
        }
    }
}

void Course::enroll_students(Student *s,CourseManager& cm)
{
    if(s!= nullptr)
    {
        if(this->no_of_students<100)
        {
            cout<<"Registered Successfully"<<endl;
            students_enrolled[this->no_of_students]=s;
            this->no_of_students++;
            s->addCourse(this->code,cm);
        }
        else
        {
            cout<<"Limit for Number of Students has been exceeded"<<endl;
        }
    }
    else
    {
        cout<<"The student does not exists"<<endl;
    }
}
char* Course::get_title()const
{
    return title;
}
char* Course::get_instructor()const
{
    return instructor;
}
unsigned int Course::get_credits()const
{
    return credits;
}
unsigned int Course::get_total_lectures()const
{
    return total_lectures;
}
void LectureCourse::displayDetails()const
{
    cout<<"Type of the course : Lecture Course"<<endl;
    cout<<"Course Code : "<<get_code()<<endl;
    cout<<"Course Tiltle : "<<get_title()<<endl;
    cout<<"Course Instructor : "<<get_instructor()<<endl;
    cout<<"Course Credits : "<<get_credits()<<endl;
    cout<<"Number of lectures : "<<get_total_lectures()<<endl;
    cout<<"Number of students registered : "<<get_no_of_students()<<endl;
}
void LabCourse::displayDetails()const
{
    cout<<"Type of the course : Lab Course"<<endl;
    cout<<"Course Code : "<<get_code()<<endl;
    cout<<"Course Tiltle : "<<get_title()<<endl;
    cout<<"Course Instructor : "<<get_instructor()<<endl;
    cout<<"Course Credits : "<<get_credits()<<endl;
    cout<<"Number of lectures : "<<get_total_lectures()<<endl;
    cout<<"Number of students registered : "<<get_no_of_students()<<endl;
}
void SeminarCourse::displayDetails()const
{
    cout<<"Type of the course : Seminar Course"<<endl;
    cout<<"Course Code : "<<get_code()<<endl;
    cout<<"Course Tiltle : "<<get_title()<<endl;
    cout<<"Course Instructor : "<<get_instructor()<<endl;
    cout<<"Course Credits : "<<get_credits()<<endl;
    cout<<"Number of lectures : "<<get_total_lectures()<<endl;
    cout<<"Number of students registered : "<<get_no_of_students()<<endl;
}

char LectureCourse::calculateGrade(Student& s,CourseManager& cm)const
{
    char g;

    if(s.get_Marks(get_code(),cm)<get_credits()*10)
    {
        g='F';
    }
    else{
        g='P';
    }
    return g;
}
char LabCourse::calculateGrade(Student& s,CourseManager& cm)const
{
    char g;

    if(s.get_Marks(get_code(),cm)<get_credits()*20)
    {
        g='F';
    }
    else{
        g='P';
    }
    return g;
}
char SeminarCourse::calculateGrade(Student& s,CourseManager& cm)const
{
    char g;

    if(s.get_Marks(get_code(),cm)<get_credits()*5)
    {
        g='F';
    }
    else{
        g='P';
    }
    return g;
}

