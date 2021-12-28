/*
In the main method, read a String (which may have alphabets along with numeric digits) and print the number of vowel and consonants (any alphabet apart from vowel is a consonant) present in the given String.
Note: The output should be printed in the same format as mentioned in the sample output.

Consider below sample input and output:

Input:
Welcome123

Output:
Number of Vowels: 3
Number of Consonants: 4
*/

import java.util.*; 
class MyClass 
{ 
    public static void main(String[] args) 
    {
         Scanner sn = new Scanner(System.in);
         String s = sn.next();
         int v = 0, c = 0;
        
         for(int i = 0; i < s.length(); i++)
         {
             char ch = s.charAt(i);
             if(Character.isLetter(ch))
             {
                 if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                     ++v;
                else
                    ++c;
             }
         } 
          System.out.print("Number of Vowels: " + v + "\n" + "Number of Consonants: "+ c); 
    } 
}
            
