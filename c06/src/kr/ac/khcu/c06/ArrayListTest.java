package kr.ac.khcu.c06;

import java.util.ArrayList;

public class ArrayListTest {
	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<>();
		list.add("Hello");
		list.add("World");
		
		for (int i = 0; i < list.size(); i++) {
			String string = list.get(i);
			System.out.println(string);
		}
		
		for (String string : list) {
			System.out.println(string);
		}

	}
}
