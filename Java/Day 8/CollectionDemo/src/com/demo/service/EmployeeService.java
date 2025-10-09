package com.demo.service;

import java.util.List;

import com.demo.beans.Employee;

public interface EmployeeService {

	boolean addNewEmployee();

	List<Employee> displayAll();

	Employee searchById(int eid);

	boolean deleteById(int eid);

	List<Employee> findByName(String nm);

	boolean updatebyID(int eid, double sal);   //new method added-> go to implementation class 

	boolean deleteBySalary(double sal);

	List<Employee> searchBySal(double sal);

	List<Employee> sortBySal();

	List<Employee> sortByName();

}
