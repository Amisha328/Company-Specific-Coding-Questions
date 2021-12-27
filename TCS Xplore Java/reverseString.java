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