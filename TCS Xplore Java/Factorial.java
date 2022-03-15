import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Factorial {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        Scanner sc = new Scanner(System.in);
        long fact;
        int[] arr=new int[5];
        for(int i=0;i<=arr.length-1;i++)
        {
            arr[i]=sc.nextInt();
        }

        for(int i=0;i<=arr.length-1;i++){

            fact = 1;
            for(int j=1;j<=arr[i];j++)
            {
                fact=fact*j;
            }
            System.out.println(fact);
        }

    }
}