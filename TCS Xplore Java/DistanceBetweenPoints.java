import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class DistanceBetweenPoints {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int x1,y1,x2,y2;
        Scanner scn=new Scanner(System.in);
        x1 = scn.nextInt();
        y1 = scn.nextInt();
        x2 = scn.nextInt();
        y2 = scn.nextInt();
        Points p1 = new Points(x1, y1);
        Points p2 = new Points(x2, y2);
        double distance = findDistance(p1, p2);
        System.out.format("%.3f",distance);
    }

    public static double findDistance(Points p1, Points p2)
    {
        double distance=Math.sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
        return distance;
    }
}

class Points
{
    int x,y;
    Points(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
}