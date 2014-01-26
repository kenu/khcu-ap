package kr.ac.khcu.c06;

public class StringTest {
	public static void main(String[] args) {
		String string = new String("Hello World");
		String string1 = "Hello World";
		System.out.println(string == string1);
		System.out.println(string.equals(string1));

		String string2 = "Hello World";
		System.out.println(string1 == string2);

		CharSequence cs = "Hello World";
		CharSequence csb = new StringBuffer("Hello StringBuffer");
		CharSequence csb2 = new StringBuilder("Hello StringBuilder");

		print(cs);
		print(csb);
		print(csb2);
	}

	private static void print(CharSequence cs) {
		System.out.println(cs);
	}

}
