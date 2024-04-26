#include <iostream>

#include "Course.h"
#include "CourseManager.h"
#include "Student.h"

using namespace std;

void Student::setDetails()
{
    this->Name=new char();
    cout<<"Enter the Name "<<endl;
    cin>>this->Name;
    cout<<"Enter Student Id "<<endl;
    cin>>this->id;
    cout<<"Enter the semester "<<endl;
    cin>>this->semester;
}
Course* Student::get_Course(unsigned int i)
{
    return list[i];
}
void Student::addCourse(unsigned int code,CourseManager& cm)
{
    int i=0;
    while(cm.get_Course(i)!=nullptr)
    {
        i++;
    }
    i=i-1;

    if(i<10)
    {
        //cm.get_Course(i)->enroll_students(this,cm);

        int j=0;
        while(list[j]!=nullptr)
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
void Student::updateMarks(unsigned int m,unsigned int code,CourseManager& cm)
{
    int i=0;
    while(cm.get_Course(i)->get_code()!=code)
    {
        i++;
    }
if(i<6)
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
        list[5]=nullptr;
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
            *((cm.get_Course(z)->set_student(((cm.get_Course(z)))->get_no_of_students()-1)))=nullptr;
        }
    }
    else
    {
        cout<<"The course code does not exists"<<endl;
    }
}
unsigned int Student::get_Marks(unsigned int code,CourseManager& cm)
{
    int i=0;
    while(cm.get_Course(i)->get_code()!=code)
    {
        i++;
    }

    return marks[i];
}
