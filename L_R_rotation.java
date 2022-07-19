/*
 java lab assignment:04
 Question:04
 roll number:2020pgcaca03
 */



import java.util.Scanner;

public class L_R_rotation {
	
	static String leftrotate(String str, int pos) {
		String res = str.substring(pos) + str.substring(0, pos);
		return res;
	}
	
	  static String rightrotate(String str, int pos)
	    {
	            return leftrotate(str, str.length() - pos);
	    }
	
	@SuppressWarnings("resource")
	public static void main(String[] args) {
		
		
		Scanner var = new Scanner(System.in);
		
		System.out.print("Enter the String: ");
		String str = var.nextLine();
		
		System.out.print("Enter thevalue for rotation: ");
		int rot = var.nextInt();
		
		String strl, strr;
		strl = leftrotate(str,rot);
		strr = rightrotate(str,rot);
		System.out.println("After left rotation string by "+rot+" -> "+ strl);
		System.out.println("After right rotation string by "+rot+" -> "+strr);
	}

}