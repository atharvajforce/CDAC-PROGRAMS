class Factorial {
	public static long fac(int n){
		long res = 1;
		if(n<=1){
			return 1;
		}
		return (n * fac(n-1));
	}
	
	public static void main(String [] args){
		System.out.println("Factorial:" + fac(Integer.parseInt(args[0])));
	}
}