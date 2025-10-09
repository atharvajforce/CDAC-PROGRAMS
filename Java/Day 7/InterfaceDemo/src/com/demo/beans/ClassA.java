package com.demo.beans;

public class ClassA {
	private int x;
	public final void m1() {
		System.out.println("in m1 of ClaasA");
	}

}

 class ClassB extends ClassA{
	// public void m1() {     // cannot override this method because m1 is final 
		//	System.out.println("in m1 of ClaasA");
		}
	

