CourseManager::void addCourse()
{
	/*Adds a new course to be offerred*/

	Course *C;

	//Dynamically allocate an object of type Course
	c=new Course();

	//Fill the details
	c->set_Details();

	//Find the position in list of courses for insertion
	int i=0;
	while((list[i]!=NULL)&&(i<10))
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

CourseManager::void removeCourse(unsigned int code)
{
	/*Removes a course from list of offerred Courses */

	//Find the course in the list
	int i=0;
	while((list[i]->code!=code)&&(i<10))
	{
		i++;
	}
	if(i<10)
	{
		//If found,remove the course from the report of each student
		for(int k=0;k<list[i]->no_of_students;k++)
		{
			list[i]->students_enrolled[k]->r.removeCourse(list[i]->code);
		}

		//Then remove the course
		for(int j=i;j<9;j++)
		{
			list[j]=list[j+1];
		}

		cout<<"The Course with the code "<<code<<" has been successfully removed"<<endl;
	}
	else
	{
		//If not found
		cout<<"Course Not offerred"<<endl;
	}
}

CourseManager::void displayAvailCourseInfo()
{
	/*Displays all the courses being offerred*/
	
	for(int i=0;i<10;i++)
	{
		list[i]->displayDetails();
	}
}