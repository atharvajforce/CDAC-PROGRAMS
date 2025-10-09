package com.demo.test;

import java.util.Scanner;

import com.demo.beans.Employee;
import com.demo.service.EmployeeService;

public class TestEmployeeMgntSystem {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int choice=0;
		do {
			System.out.println("1. Add New Employee\n2. Display all");
			System.out.println("3. Search by id\n4. Change sal or charges");
			System.out.println("5. Display Salaried Employee\n6. Display Contract Employee");
			System.out.println("7. Search By Name\n8. Calculate Net salary\n9. Compute Net Salary of all \n10.exit\n Choice :");
			choice=sc.nextInt();
			switch(choice) {
			case 1:
				System.out.println("1.salaried\n2.Contract\n3.Vendor\n choice: ");
				int ch=sc.nextInt();
				boolean status=EmployeeService.addNewEmployee(ch);
				if(status) {
					System.out.println("added successfully");
					
				}else {
					System.out.println("Error :not added");
				}
				break;
			case 2:
				EmployeeService.displayAll();
				
				break;
			case 3:
				System.out.println("Enter Id");
				String id=sc.next();
				Employee e=EmployeeService.searchById(id);
				if(e!=null) {
					System.out.println(e);
				}else {
					System.out.println("not found");
				}
				break;
			case 4:
				System.out.println("Enter Id");
				id=sc.next();
				System.out.println("Enter new sal/charges");
				double charges=sc.nextDouble();
				status=EmployeeService.modifyById(id,charges);
				if(status) {
					System.out.println("Updated successfully");
				}else {
					System.out.println("not found");
				}
				break;
			case 5:
				EmployeeService.displayOnlySalariedEmp();
				break;
			case 6:
				EmployeeService.displayOnlyContractEmp();
				break;
			case 7:
				System.out.println("Enter Name to Search :");
				String name=sc.next();
				sc.nextLine();
				EmployeeService.findByName(name);
				break;			
			case 8:
				/*System.out.println("1.salaried\n2.Contract\n3.Vendor\n choice: ");
				int ch1=sc.nextInt();
				EmployeeService.ComputeNetSalary();
				*/
				break;
			case 9:
				EmployeeService.computeAllNetSalaries();

				break;	
			case 10:
				System.out.println("Thank you for visiting......");
				sc.close();
			default:
				System.out.println("wrong choice");
				break;
			}
		}while(choice!=11);
	}

}
