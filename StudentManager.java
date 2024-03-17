package A1Q2;

public class StudentManager
{
	private:Student s[SIZE];
	private:int num_of_students;
	private:int computeInsertAt()
	{
		int i=0;
		while((s[i].name!=" ")&&(i<SIZE))
		{
			i++;
		}
		return i;
	}

	public:StudentManager()
	{
		for(int i=0;i<SIZE;i++)
		{
			s[i].name=" ";
		}
	}
	public:void addStudent()
	{
		Student stud;
		System.out.println("Enter the name: ");
		stud.name = reader.readLine(); // taking string input
		System.out.println("Enter the Id: ");
		stud.id=scn.nextInt();
		s[computeInsertAt()]=stud;
		num_of_students++;
	}

	public:double computAvgGrades()
	{
		double sum;
		for(int i=0;i<SIZE;i++)
		{	
			if(s[i].name!=" ")
				sum=sum+s[i].getGrade();
		}
		return ((sum)/(num_of_students));
	}

	public:void displayAllStudents()
	{
		for(int i=0;i<SIZE;i++)
		{	
			if(s[i].name!=" ")
				s[i].displayInfo();
		}
	}
}