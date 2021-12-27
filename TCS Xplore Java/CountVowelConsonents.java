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
             ch = Character.toLowerCase(ch);
             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
               v++;
             else
               c++;
           }
         }
             
        System.out.print("Number of Vowels: " + v + "\n" + "Number of Consonants: "+ c); 
    } 
}            