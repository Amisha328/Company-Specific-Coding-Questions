import java.util.*; 
class MyClass 
{ 
    public static void main(String[] args) 
    {
         Scanner sn = new Scanner(System.in);
         String s = sn.next();
         int v = 0, c = 0;
         s = s.toLowerCase();
        
         for(int i = 0; i < s.length(); i++)
         {
             char ch = s.charAt(i);
           // check vowels
             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
         		 ++v;

            // check if character is in between a to z
            else if ((ch >= 'a' && ch <= 'z')) 
              	++c;
        }
             
        System.out.print("Number of Vowels: " + v + "\n" + "Number of Consonants: "+ c); 
    } 
}
            