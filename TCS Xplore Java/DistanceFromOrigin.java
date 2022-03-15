import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class DistanceFromOrigin {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        double x1,y1,x2,y2,x3,y3;
        Scanner scn=new Scanner(System.in);
        x1=scn.nextDouble();
        y1=scn.nextDouble();
        x2=scn.nextDouble();
        y2=scn.nextDouble();
        x3=scn.nextDouble();
        y3=scn.nextDouble();
        Point p1=new Point(x1, y1);
        Point p2=new Point(x2, y2);
        Point p3=new Point(x3, y3);
        Point highest = pointWithHighestOriginDistance(p1, p2, p3);
        System.out.format("%.1f \n",highest.x);
        System.out.format("%.1f",highest.y);
    }

    // Take three points and return the point with highest distance from origin.
    public static Point pointWithHighestOriginDistance(Point p1, Point p2, Point p3)
    {
        double d1=Math.sqrt(p1.x*p1.x+p1.y*p1.y);
        double d2=Math.sqrt(p2.x*p2.x+p2.y*p2.y);
        double d3=Math.sqrt(p3.x*p3.x+p3.y*p3.y);
        return d1>d2?(d1>d3?p1:p3):(d2>d3?p2:p3);
    }
}

class Point
{
    double x,y;
    Point(double x, double y)
    {
        this.x=x;
        this.y=y;
    }
}
