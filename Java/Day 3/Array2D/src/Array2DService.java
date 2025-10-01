import java.util.*;

public class Array2DService {
	
	public static int[][] Cpy_array(int [] [] arr){
		int [][] temp = new int[arr.length][arr[0].length];
		for(int i=0; i<arr.length; i++){
			for(int j=0; j<arr[0].length; j++) {
				temp[i][j] = arr[i][j];
			}
		}
		return temp;	
	}

	public static void displayData(int[][] arr){
		for(int i=0; i<arr.length; i++) {
			for(int j=0; j<arr[0].length; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}

	public static int addAllNumbers(int[][] arr) {
		// TODO Auto-generated method stub
		return 0;
	}

	public static int[] addRowwise(int[][] arr) {
		// TODO Auto-generated method stub
		return null;
	}

	public static int[] addColumnwise(int[][] arr) {
		// TODO Auto-generated method stub
		return null;
	}

	public static int[][] add2Darrays(int[][] arr, int[][] arr1) {
		// TODO Auto-generated method stub
		return null;
	}

	public static int[][] multiplyArray(int[][] arr, int[][] arr1) {
		// TODO Auto-generated method stub
		return null;
	}

	public static int[][] findTranspose(int[][] arr) {
		// TODO Auto-generated method stub
		return null;
	}

	public static boolean checkIdentity(int[][] arr) {
		// TODO Auto-generated method stub
		return false;
	}

	public static int[][] rotateRow(int[][] arr, int n) {
		// TODO Auto-generated method stub
		return null;
	}

	public static int[][] rotateColumn(int[][] arr, int n) {
		// TODO Auto-generated method stub
		return null;
	}

	public static int[] convertTo1DArray(int[][] arr) {
		// TODO Auto-generated method stub
		return null;
	}

}
