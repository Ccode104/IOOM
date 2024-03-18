class CourseManager
{
	private:
		Course *list;
	public:
		CourseManager():list(NULL);

		void addCourse();
		void removeCourse();
		void displayAvailCourseInfo();
};
