
class Student
{
	unsigned int id;
	char *Name;
	unsigned int semester;
	class Record
	{
		Courses list[6];
		unsigned int attendance[6];
		unsigned int marks[6];

		public:
			void updateAttendance();
			void updateMarks();
			void addCourse(Course);
			void removeCourse(Course);
	} r;
};
