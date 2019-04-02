
/**
 * @author atili
 * @version 0.1
 */

import java.io.*;
import java.util.Scanner;

public class Decoder {

	public static File raf; 
	public static BufferedReader raf2;
	public static BufferedWriter raf3;
   public static ProcessBuilder pb;
   public static Process p; 

	public static char a, b;

	public static void cleberTradutor() throws Exception {

		raf = new File ("testeula.ula");
		raf2 = new BufferedReader( new FileReader (raf));
		raf3 = new BufferedWriter ( new FileWriter ("testeula.hex"));
		String str = raf2.readLine();
		System.out.println (str);

		while (!str.equals("fim.")) {
			
			switch (str.length()) {

			case 4:
				if (str.charAt(0) == 'A' && str.charAt(1) == '=') {
					a = str.charAt(2);
				} else if (str.charAt(0) == 'B' && str.charAt(1) == '=') {
					b = str.charAt(2);
				} else if (str.charAt(0) == 'A') {
					raf3.write (a + "" + b + "5\n");
					raf3.flush();
				} else
					raf3.write (a + "" + b + "1\n");
					raf3.flush();
				break;

			case 3:
				if (str.charAt(0) == 'A') {
					raf3.write(a + "" + b + "2\n");
					raf3.flush();
				} else
					raf3.write(a + "" + b + "3\n");
					raf3.flush();
				break;

			case 5:
				if (str.charAt(1) == 'o') {
					raf3.write(a + "" + b + "4\n");
					raf3.flush();
				} else if (str.charAt(1) == 'n') {
					raf3.write(a + "" + b + "C\n");
					raf3.flush();
				} else
					raf3.write(a + "" + b + "D\n");
					raf3.flush();
				break;
				
			case 6:
				if (str.charAt(0) == 'z') {
					raf3.write(a + "" + b + "0\n");
					raf3.flush();
				} else if (str.charAt(1) == 'x') {
					raf3.write(a + "" + b + "6\n");
					raf3.flush();
				} else if (str.charAt(3) == 'r') {
					raf3.write(a + "" + b + "8\n");
					raf3.flush();
				} else if (str.charAt(3) == 'u' ) {
					raf3.write(a + "" + b + "A\n");
					raf3.flush();
				} else if (str.charAt(2) == 'u') {
					raf3.write(a + "" + b + "B\n");
					raf3.flush();
				} else 
					raf3.write(a + "" + b + "F\n");
					raf3.flush();
				break;
				
			case 7:
				if (str.charAt(2) == 'a') {
					raf3.write(a + "" + b + "7\n");
					raf3.flush();
				} else if (str.charAt(2) == 'n') {
					raf3.write(a + "" + b + "9\n");
					raf3.flush();
				} else if (str.charAt(2) == '0')
					raf3.write(a + "" + b + "E\n");
					raf3.flush();
			}//fim switch
			
			str = raf2.readLine();
			System.out.println (str);

		}//fim while
		raf3.close();
		raf2.close();
	}//fim cleberTradutor
	
	public static void cleberX9 () throws Exception {
		
		raf = new File ("testeula.hex");
		raf2 = new BufferedReader( new FileReader (raf));
		String command;
		Scanner scan = new Scanner(System.in);
		scan.nextLine ();
		
		command = raf2.readLine();
		
		while (command != null) {
			
			System.in.read ();
         		System.in.read ();
      			pb = new ProcessBuilder ("envia.exe", "COM5", command);
       			System.out.println(command);
			p = pb.start ();
         		p.waitFor ();
			command = raf2.readLine();
			
		}//fim while
		
		scan.close();
		raf2.close();
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
