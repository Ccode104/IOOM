#include<iostream>
using namespace std;

class Course;
class CourseManager;
class Student;

#include "Student.h"
#include "Course.h"
#include "CourseManager.h"

int main()
{
    int choice=1,i=0;
    CourseManager cm;
    Student* s;

    while(choice!=0)
    {
        cout<<endl<<"Menu:";
        cout<<endl<<"1)Add a Course to be offered";
        cout<<endl<<"2)Enroll a Student in a Course";
        cout<<endl<<"3)Update Marks of all Students";
        cout<<endl<<"4)Mark all present in a Course";
        cout<<endl<<"0)Press 0 to Exit"<<endl;
        cin>>choice;

        if(choice==0)
        {
            cout<<"Thank you for using our Course Manager!"<<endl;
        }
        else if(choice==1)
        {
            cout<<"Enter 1 for Lecture course to be created"<<endl;

            //cin>>
            cm.addLectureCourse();
        }

        else if(choice==2)
        {
            unsigned int code;

            cout<<"Enter the Student details"<<endl;
            s=new Student();
            i++;
            s->setDetails();

            cm.displayAvailCourseInfo();
            cout<<"Enter the course code of any course given above for which you want to register"<<endl;
            cin>>code;

            if(cm.get_Course_based_on_code(code)!= nullptr){
                cm.get_Course_based_on_code(code)->enroll_students(s,cm);
            }
        }
        else if(choice==3){
            unsigned int c_id,marks=0;
            cout<<"Enter the Course Id"<<endl;
            cin>>c_id;
            cout<<"Number of Students enrolled"<<cm.get_Course_based_on_code(c_id)->get_no_of_students()<<endl;
            for(int i=0;i<cm.get_Course_based_on_code(c_id)->get_no_of_students();i++)
            {
                cout<<"Enter the marks"<<endl;
                cin>>marks;
                cm.get_Course_based_on_code(c_id)->get_student(i)->updateMarks(marks,c_id,cm);

            }
        }
        else if(choice==4)
        {
            unsigned  int c_id;
            cout<<"Enter the Course Id"<<endl;
            cin>>c_id;
            cout<<"Number of Students enrolled"<<cm.get_Course_based_on_code(c_id)->get_no_of_students();
            cm.get_Course_based_on_code(c_id)->get_student(0)->updateAttendance(c_id,cm);
        }
    }

    return 0;
}

