import java.util.Scanner;

public class TestStudentArray {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int choice=0;
		do {
		System.out.println("1. add new student\n2. display all\n3. search by id");
		System.out.println("4. search by name\n5. update marks\n6.exit\nchoice:");
		choice=sc.nextInt();
		switch(choice) {
		case 1:
			boolean status=StudentService.addNewStudent();
			if(status) {
				System.out.println("Student added successfuly");
			}else {
				System.out.println("error: Not added");
			}
			System.out.println("-------------------");
			break;
		case 2:
			  StudentService.displayAll();
			  System.out.println("-------------------");
			break;
		case 3:
			  System.out.println("Enter id For Search : ");
			  int  id = sc.nextInt();
			  StudentService.findById(id);
			  System.out.println("-------------------");
			break;
		case 4:
			System.out.print("Enter Name For Search : ");
			String name = sc.next();
		     sc.nextLine();	
			Student found = StudentService.findByName(name);
			if (found != null) {
			    // Optional: display or use found student
			} else {
			    System.out.println("Student not found.");
			}
			System.out.println("-------------------");
			break;
		case 5:
			System.out.println("Enter the id to update:");
			int idfind = sc.nextInt();
			System.out.println("Enter Marks to update:");
			float marks = sc.nextFloat();
			System.out.println(StudentService.updateMarks(idfind, marks));
			System.out.println("-------------------");
			break;
		case 6:
			sc.close();
			System.out.println("Thank you for visiting....");
			break;
		default:
			System.out.println("wrong choice");
			
		}
		}while(choice!=6);

	}

}
