
/**
 * @author atili
 * @version 0.1
 */

import java.io.*;
import java.util.Scanner;

public class Decoder {

	public static RandomAccessFile raf; 
	public static RandomAccessFile raf2;
	public static RandomAccessFile raf3;

	public static char a, b;

	public static void cleberTradutor() throws Exception {

		raf = new RandomAccessFile("testeula.ula", "r");
		raf2 = new RandomAccessFile("testeula.hex", "rw");
		String str = raf.readLine();
		System.out.println (str);

		while (!str.equals("fim.")) {
			
			switch (str.length()) {

			case 4:
				if (str.charAt(0) == 'A' && str.charAt(1) == '=') {
					a = str.charAt(2);
				} else if (str.charAt(0) == 'B' && str.charAt(1) == '=') {
					b = str.charAt(2);
				} else if (str.charAt(0) == 'A') {
					raf2.writeBytes(a + "" + b + "5\n");
				} else
					raf2.writeBytes(a + "" + b + "1\n");
				break;

			case 3:
				if (str.charAt(0) == 'A') {
					raf2.writeBytes(a + "" + b + "2\n");
				} else
					raf2.writeBytes(a + "" + b + "3\n");
				break;

			case 5:
				if (str.charAt(1) == 'o') {
					raf2.writeBytes(a + "" + b + "4\n");
				} else if (str.charAt(1) == 'n') {
					raf2.writeBytes(a + "" + b + "C\n");
				} else
					raf2.writeBytes(a + "" + b + "D\n");
				break;
				
			case 6:
				if (str.charAt(0) == 'z') {
					raf2.writeBytes(a + "" + b + "0\n");
				} else if (str.charAt(1) == 'x') {
					raf2.writeBytes(a + "" + b + "6\n");
				} else if (str.charAt(3) == 'r') {
					raf2.writeBytes(a + "" + b + "8\n");
				} else if (str.charAt(3) == 'u' ) {
					raf2.writeBytes(a + "" + b + "A\n");
				} else if (str.charAt(2) == 'u') {
					raf2.writeBytes(a + "" + b + "B\n");
				} else 
					raf2.writeBytes(a + "" + b + "F\n");
				break;
				
			case 7:
				if (str.charAt(2) == 'a') {
					raf2.writeBytes(a + "" + b + "7\n");
				} else if (str.charAt(2) == 'n') {
					raf2.writeBytes(a + "" + b + "9\n");
				} else if (str.charAt(2) == '0')
					raf2.writeBytes(a + "" + b + "E\n");
			}//fim switch
			
			str = raf.readLine();
			System.out.println (str);

		}//fim while
		raf.close();
		raf2.close();
	}//fim cleberTradutor
	
	public static void cleberX9 () throws Exception {
		
		raf3 = new RandomAccessFile("testeula.hex", "r");
		String command;
		Scanner scan = new Scanner(System.in);
		scan.nextLine ();
		
		command = raf3.readLine();
		
		while (command != null) {
			
			System.out.println(command);
			scan.nextLine ();
			command = raf3.readLine();
			
		}//fim while
		
		scan.close();
		raf3.close();
	}//fim cleberX9
	
	public static void main(String[] args) {

		try {

			cleberTradutor();
			cleberX9 ();

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	
}//fim Decoder