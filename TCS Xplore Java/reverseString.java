/*
In the main method, write code to read a numeric digit(without any alphabets or special characters) using Scanner and print it in the reverse sequence as they appear in the input.

Consider below sample input and output:

Input:
12345

Output:
Reverse of the number is 54321
*/

import java.util.*; 
class MyClass 
{ 
    public static void main(String[] args) 
    {
         Scanner sn = new Scanner(System.in);
         String s, str = ""; 
         s = sn.next(); 
         for(int i = s.length()-1; i >= 0; i--) 
            str += s.charAt(i); 
        System.out.print("Reverse of the number is "+ str); 
    } 
}
