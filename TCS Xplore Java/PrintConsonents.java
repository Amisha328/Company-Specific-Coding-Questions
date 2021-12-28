/*
In the main method, read a String and print all consonants characters (in lower case) in the sequence as they appear in the input value. Please note: The consonants are characters that are not vowels.

Sample input:
DATABase

Output:
dtbs
*/

import java.util.*;
class MyClass 
{
  public static void main(String[] args) 
  {
    Scanner sn = new Scanner(System.in);
    String s = sn.next();
    s = s.toLowerCase();
    for(int i = 0; i < s.length(); i++)
    { 
      char ch = s.charAt(i);
      // check vowels 
      if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        System.out.print(ch);
    }
  }
}
