// In the main method, write code to read a String value using Scanner and print the smallest vowel. Assume all input values are in lower case.
// E.g If the input value is "matrix" then output will be a (since there are two vowels a and i where a is smaller as per ASCII sequence).


import java.util.*; 
class MyClass 
{ 
    public static void main(String[] args) 
    {
         Scanner sn = new Scanner(System.in);
         String s = sn.next();
         //s = s.toLowerCase();
         char st = 'u';
         for(int i = 0; i < s.length(); i++)
         {
             char ch = s.charAt(i);
             
             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
             {
               if(ch <= st) st = ch;
             }
        }
             
        System.out.print(st); 
    } 
}            
