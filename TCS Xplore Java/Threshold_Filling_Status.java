/*
Problem Statement:

Create a Class Inventory with below attributes:

inventoryId - String
maximumQuantity - int
currentQuantity - int
threshold - int

Write getters, setters and parameterized constructor as required. 

Create class Solution with main method. 

Implement static method - replenish in Solution class.

This method will take an int parameter named limit along with the other parameter as array of Inventory objects. 
The method will return array of Inventory where the threshold attribute is less than or equal to the int parameter passed.

This method should be called from main method and display the id of returned objects along with Filling status.

if the threshold is greater than or equal to 75 then it should print "Critical Filling" as Filling Status. If the threshold is between 74 to 50 then Filling status should be "Moderate Filling", else should be "Non-Critical Filling" .

Before calling this method(replenish) in the main method, use Scanner object to read values for four Inventory objects referring the attributes in the above sequence. 
then, read the value for limit parameter. 
Next call the method replenish and display the result. 

Consider below sample input and output:

Input:
1
100
50
40
2
100
50
50
3
100
40
45
4
100
80
25
45

Output:
1 Non-Critical Filling
3 Non-Critical Filling
4 Non-Critical Filling
*/

// Solution:

import java.util.Arrays;
import java.util.Scanner;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Inventory[] inv = new Inventory[4];
        for(int i = 0; i < 4; i++)
        {
             String inventoryId = sc.nextLine();
             int maximumQuantity = sc.nextInt();sc.nextLine();
             int currentQuantity = sc.nextInt();sc.nextLine();
             int threshold = sc.nextInt();sc.nextLine();
             inv[i] = new Inventory(inventoryId, maximumQuantity,currentQuantity,threshold);
        }

        int limit = sc.nextInt();
        Inventory[] result = replenish(limit, inv);

        for(Inventory it : result)
        {
            if(it.getThreshold() >= 75)
                System.out.println(it.getInventoryId()+" Critical Filling");
            else if(it.getThreshold() < 75 && it.getThreshold() >= 50)
                System.out.println(it.getInventoryId()+" Moderate Filling");
            else
                System.out.println(it.getInventoryId()+" Non-Critical Filling");
        }

    }

    public static Inventory[] replenish(int limit, Inventory[] inventory)
    {
        Inventory[] res = new Inventory[0];
        for(int i = 0; i < 4; i++)
        {
            if(inventory[i].getThreshold() <= limit){
                res = Arrays.copyOf(res, res.length+1);
                res[res.length-1] = inventory[i];
            }
        }
        return res;
    }
}

class Inventory
{
    //code to build Inventory class
    private String inventoryId;
    private int maximumQuantity;
    private int currentQuantity;
    private int threshold;
    Inventory(String inventoryId, int maximumQuantity, int currentQuantity, int threshold)
    {
        this.inventoryId = inventoryId;
        this.currentQuantity = currentQuantity;
        this.maximumQuantity = maximumQuantity;
        this.threshold = threshold;
    }
    public String getInventoryId()
    {
        return inventoryId;
    }
    public void setInventoryId(String inventoryId)
    {
        this.inventoryId = inventoryId;
    }
    public int getCurrentQuantity()
    {
        return currentQuantity;
    }
    public void setCurrentQuantity(int currentQuantity)
    {
        this.currentQuantity = currentQuantity;
    }
    public int getMaximumQuantity()
    {
        return maximumQuantity;
    }
    public void setMaximumQuantity(int maximumQuantity)
    {
        this.maximumQuantity = maximumQuantity;
    }
    public int getThreshold()
    {
        return threshold;
    }
    public void setThreshold(int threshold)
    {
        this.threshold = threshold;
    }
}
