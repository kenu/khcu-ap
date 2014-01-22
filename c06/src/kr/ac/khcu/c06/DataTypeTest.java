package kr.ac.khcu.c06;
public class DataTypeTest {
// dtlog
// 2014. 1. 22. 오후 2:53:49
	public static void main(String[] args) {
		byte b = Byte.MAX_VALUE;
		System.out.println("byte: " + b);

		short sh = Short.MAX_VALUE;
		System.out.println("short: " + sh);
		
		int i = Integer.MAX_VALUE;
		System.out.println("int: " + i);
		
		long l = Long.MAX_VALUE;
		System.out.println("long: " + l);
		
		float f = Float.MAX_VALUE;
		System.out.println("float: " + f);
		
		double d = Double.MAX_VALUE;
		System.out.println("double: " + d);
		
		boolean tf = Boolean.TRUE;
		System.out.println("boolean: " + tf);
		
		char c = '\uffff';
		System.out.println("char: " + Integer.toHexString(c));
	}

}
