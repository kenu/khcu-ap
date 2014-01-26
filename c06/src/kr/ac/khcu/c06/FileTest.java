package kr.ac.khcu.c06;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FileTest {
	public static void main(String[] args) throws IOException {
	      BufferedReader in = new BufferedReader(new FileReader("README.md"));
	      String s;
	      while((s = in.readLine()) != null) {
	    	  System.out.println(s);
	      }
	      in.close();
	}
}
