package com.demo.test;
import java.util.*;

public class TestStringData {

	public static void main(String[] args) {
		String s1="Test";
		String s2="Test";
		String s3=s2;
		String s4=new String("Test");
		System.out.println(" s2 == s3 "+(s2==s3));  //true
		System.out.println(" s2 == s4 "+(s2==s4));  //false 
		System.out.println(" s2 .equals(s4) "+(s2.equals(s4))); //true
		s1="welcome";
		System.out.println(" s2 == s1 "+(s2==s1));  //false
		
		//all the methods are synchronized, so they are thread safe
		//useful in Multi-Threaded program
		StringBuffer sbf=new StringBuffer("Hello");
		System.out.println(sbf.append(" Everyone")); //Hello Everyone
		
		//useful in single threaded program, It is not thread safe
		StringBuilder sbd=new StringBuilder("test");
		System.out.println("Appended String is" +sbd.append(" data"));   //test data
		
//		System.out.println(s6.indexOf("yyy"));   // returns the index of given string  
		String s6="xxx,yyy,zzz-rrrr";
		String[] arr=s6.split(",");
		String str=String.join(":",arr);
		System.out.println(str);
	    String b="Ameya:john:Suvir:Atharv ";
	    String c="Im The Best";
		System.out.println("Enter a String :");
		Scanner sc = new Scanner(System.in);
	    
		String [] d = {"Atharv" ,"Atul","Mukund","Aryan"};
		String e =":";
		String ans ="ans".join(e, d);
	 
	
		
		String a=sc.nextLine();
	    System.out.println("1. Lowercase "+a.toLowerCase());
	    
	    System.out.println("2. Uppercase "+a.toUpperCase());
	    
	    System.out.println("3. Contains "+a.contains(b));
	    
	    System.out.println("4. Split "+Arrays.toString(b.split(":")));    // array of strings 
	      
	    System.out.println("5.1 join "+ans);     // Join method needs An Array
	    
	    System.out.println("6. Starts With "+a.startsWith("A"));
	    
	    System.out.println("7. Ends With "+a.endsWith("v"));
	    
	    System.out.println("8. Char at  "+a.charAt(3));
	    
	    System.out.println("9. Matches "+a.matches(".*rv$"));
	    
	    System.out.println("10. Equals "+a.equals(b));
	    
	    System.out.println("11. CompareTo "+a.compareTo(c));
	    
	  /*  System.out.println("12. Append"+a.append("")); error in append method because
	     it needs stringBuilder method  */
 	    
	    
	   
		
	}

}
