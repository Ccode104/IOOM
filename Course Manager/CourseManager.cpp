#include <iostream>

#include "Course.h"
#include "CourseManager.h"

using namespace std;

Course* CourseManager::get_Course_based_on_code(unsigned int code)
{
    Course *ptr=nullptr;
    //Find the course in the list
    int i=0;
    if(list[0]!=nullptr)
    {
        while((list[i]->get_code()!=code)&&(i<10))
        {
            cout<<"here"<<i<<endl;
            i++;
        }
        if(i<10)
        {
            ptr=list[i];
        }
    }
    return ptr;
}

Course* CourseManager::get_Course(unsigned int i)
{
    return list[i];
}

Course** CourseManager::set_Course(unsigned int i)
{
    return &list[i];
}

void CourseManager::addLectureCourse()
{
    /*Adds a new course to be offerred*/

    LectureCourse *c;

    //Dynamically allocate an object of type Course
    c= new LectureCourse();

    //Fill the details
    c->set_details();

    //Find the position in list of courses for insertion
    int i=0;
    while((list[i]!=nullptr)&&(i<10))
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
void CourseManager::addLabCourse()
{
    /*Adds a new course to be offerred*/

    LabCourse *c;

    //Dynamically allocate an object of type Course
    c= new LabCourse();

    //Fill the details
    c->set_details();

    //Find the position in list of courses for insertion
    int i=0;
    while((list[i]!=nullptr)&&(i<10))
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
void CourseManager::addSeminarCourse()
{
    /*Adds a new course to be offerred*/

    SeminarCourse *c;

    //Dynamically allocate an object of type Course
    c= new SeminarCourse();

    //Fill the details
    c->set_details();

    //Find the position in list of courses for insertion
    int i=0;
    while((list[i]!=nullptr)&&(i<10))
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
        list[9]=nullptr;

        cout<<"The Course with the code "<<code<<" has been successfully removed"<<endl;
    }
    else
    {
        //If not found
        cout<<"Course Not offerred"<<endl;
    }
}

void CourseManager::displayAvailCourseInfo() {
    /*Displays all the courses being offerred*/
    int flag = 0;
    for (int i = 0; i < 10, flag == 0; i++) {
        if (list[i] != nullptr)
            list[i]->displayDetails();
        else
            flag = 1;
    }
}