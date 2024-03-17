package A1Q2;

public class Student
{
	private unsigned int id;
	private string Name;
	private double grade;

	public Student()
	{
		id=0;
		Name=" ";
		grade=0.0;
	}
	public unsigned int getId();
	public string getName();
	public double getGrade();
	public void displayInfo();
};