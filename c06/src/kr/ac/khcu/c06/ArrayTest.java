package kr.ac.khcu.c06;

import java.util.Arrays;
import java.util.Collections;

public class ArrayTest {
	public static void main(String[] args) {
		intArray();
		stringArray();
		stringSplit();
	}

	private static void intArray() {
		int[] numbers = {1, 2, 3, 4, 5};
		for (int i = 0; i < numbers.length; i++) {
			System.out.println(numbers[i]);
		}
	}

	private static void stringArray() {
		String[] items = {"apple", "banana", "melon"};
		for (int i = 0; i < items.length; i++) {
			String item = items[i];
			System.out.println(item);
		}
	}
	
	private static void stringSplit() {
		String fruits = "apple,banaba,orange,mango";
		String[] items = fruits.split(",");
		printArray(items);

		Arrays.sort(items);
		printArray(items);
		
		Collections.reverse(Arrays.asList(items));
		printArray(items);
	}

	private static void printArray(String[] items) {
		System.out.println("====");
		for (String item : items) {
			System.out.println(item);
		}
	}

	
}
