package com.demo.service;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

import com.demo.beans.ContractEmp;
import com.demo.beans.Employee;
import com.demo.beans.SalariedEmp;

public class EmployeeService {
   static Employee[] emparr;
   static int count;
   static {
	   emparr=new Employee[100];
	   emparr[0]=new SalariedEmp("Rajan",new Date(2000,04,23),"HR","Designer",88888);
   	   emparr[1]=new SalariedEmp("Revati",new Date(2000,04,23),"UX","Designer",99999);
	   emparr[2]=new ContractEmp("Ameya",new Date(2000,04,23),"HR","Designer",80,3000);
	   emparr[3]=new ContractEmp("Ajneesh",new Date(2000,04,23),"UX","Designer",80,4000);		   
	   count=4;
   }
    public static boolean addNewEmployee(int ch) {
	    Scanner sc=new Scanner(System.in);
	    if(count<emparr.length) {
		    System.out.println("Enter name");
		    String nm=sc.nextLine();
		    System.out.println("Enter birth date(dd/MM/yyyy)");
		    String bdate=sc.next();
		    SimpleDateFormat sdf=new SimpleDateFormat("dd/MM/yyyy");
		    Date dt=null;
		    try {
			 dt=sdf.parse(bdate);
			} catch (ParseException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		    System.out.println("Enter department");
		    String dept=sc.next();
		    System.out.println("Enter designation");
		    String desg=sc.next();
		    if(ch==1) {
		    	System.out.println("Enter salary");
		    	double sal=sc.nextDouble();
		    	emparr[count]=new SalariedEmp(nm,dt,dept,desg,sal);
		    	count++;
		    }else if(ch==2) {
		    	System.out.println("Enter hrs");
		    	float hrs=sc.nextFloat();
		    	System.out.println("Enter charges");
		    	double charges=sc.nextDouble();
		    	emparr[count]=new ContractEmp(nm,dt,dept,desg,hrs,charges);
		    	count++;
		    	
		    }else {
		    	
		    	//accept details of vendor
		    }
		    return true;
	    }
	    return false;
   }
	public static void displayAll() {
		for(Employee emp:emparr) {              // modern for each loop
			if(emp!=null) {
			  System.out.println(emp);
			}
		}
		
	}
	public static void displayOnlySalariedEmp() {
		for(Employee emp:emparr) {                          //emp is a reference 
			if(emp!=null && emp instanceof SalariedEmp)
				System.out.println(emp);
		}

		
	}
	public static void displayOnlyContractEmp() {
		for(Employee emp:emparr) {
			
			if(emp!=null && emp instanceof ContractEmp)
				System.out.println(emp);
		}
		
	}
	public static Employee searchById(String id) {
		for(Employee e:emparr) {
			if(e!=null) {
				if(e.getPid().equals(id)) {
					return e;
				}
			}
		}
		return null;
	}
	public static boolean modifyById(String id, double charges) {
		Employee e=searchById(id);
		if(e!=null) {
			if(e instanceof SalariedEmp) {
				//type casting is required for calling child specific method
				 ((SalariedEmp)e).setSal(charges);
			}else if(e instanceof ContractEmp) {
				((ContractEmp)e).setCharges(charges);
			}else {
				//set amount for vendor
			}
			return true;
		}
		return false;
	}
	public static void findByName(String name) {
	    boolean found = false;
	    for (Employee e : emparr) {
	        if (e != null  && e.getPname().equals(name)) {        // additionally we can add && e.getPname() != null
	            System.out.println("Name is found '" + name + "'");
	            found = true;
	           
	            System.out.println(e);
	        }
	    }
	    if (!found) {
	        System.out.println("Name not Found");
	    }
	}
//	public static void ComputeNetSalary() {
//		// TODO Auto-generated method stub     // home assignments 
//		
//	}
	public static void computeAllNetSalaries() {
	    for (Employee emp : emparr) {
	        if (emp != null) {
	            double netSalary = emp.calculateSal();
	            System.out.println("Employee: " + emp.getPname());
	            System.out.println("Net Salary: " + netSalary);
	            System.out.println("---------------------------");
	        }
	    }
	}


}