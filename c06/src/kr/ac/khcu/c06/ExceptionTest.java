package kr.ac.khcu.c06;

public class ExceptionTest {

	public static void main(String[] args) {
		divide(30, 5);
		try {
			//divide(30, 0);
			divide2(3, 0);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			System.out.println("반드시 실행되는 코드");
		}
	}

	private static void divide(int a, int b) {
		int c = a / b;
		System.out.println(c);
	}

	private static void divide2(int a, int b) throws Exception {
		if (b == 0) {
			throw new Exception("0으로 나눌 수 없습니다.");
		}
		int c = a / b;
		System.out.println(c);
	}

}
