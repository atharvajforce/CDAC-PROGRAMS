import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class StudentService {
   static Student[] studarr;
   static int cnt;
   static {
	   studarr=new Student[100];
	   studarr[0]=new Student(12,"Rajan",98,97,new Date(2000-11-11));
	   studarr[1]=new Student(13,"Atharv",98,97,new Date(1997-11-11));
	   cnt=2;
   }
public static boolean addNewStudent() {
	Scanner sc=new Scanner(System.in);
	System.out.println("enter id");
	int id=sc.nextInt();
	sc.nextLine();
	System.out.println("enter name");
	String nm=sc.nextLine();
	System.out.println("enter marks1");
	float m1=sc.nextFloat();
	System.out.println("enter marks2");
	float m2=sc.nextFloat();
	System.out.println("enter birth date(dd/mm/yyyy)");
	String dt=sc.next();
	//convert string to java date
	SimpleDateFormat sdf=new SimpleDateFormat("dd/MM/yyyy");
	Date bdt=null;
	try {
		bdt=sdf.parse(dt);
	} catch (ParseException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	Student s=new Student(id,nm,m1,m2,bdt);
	if(cnt==studarr.length) {
		return false;
	}else {
		studarr[cnt]=s;
		cnt++;
		return true;
	}
	
}
public static void displayAll() {
//	for(Student s:studarr) {
//		if(s==null)
//			break;
//		else
//			System.out.println(s);
//	}
	for(int i=0;i<cnt;i++) {
		System.out.println(studarr[i]);
	}
  
}
public static int findById(int id) {
	for(Student s:studarr) {
		if(s==null)
			break;
		else
		{
		if(id==s.getId())
		{
		 System.out.println("id Found " + s.getName());
		 break;
		}
		else
		{
		 System.out.println("id Not Found");	
		}
		//break;
	}
		
	}
	 
	return id;
	
}

public static String updateMarks(int id, float marks) {
	for(Student s: studarr) {
		if(s == null) {
			return "Id Not found! Nothing to update";	
		}
		else {
			if(id == s.getId()){
				s.setM1(marks);
				return "Marks Updated Succesfully!";
			}
			else {
				return "Id Not found! Nothing to update";
			}
		}
	}
	return "Id Not found! Nothing to update ";
  
 }

public static Student findByName(String name) {
    for(Student s : studarr) {
        if(s == null) {
            break;
        }
        if(name.equals(s.getName())) {
            System.out.println("Name is Found " + " ' "+ s.getName()+" ' " );
            return s; 
        }
    }
    System.out.println("Name Not Found");
    return null;
}
}
