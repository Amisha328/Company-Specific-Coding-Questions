/*
Question 1 :
Create a Class Medicine with the below attributes:

medicineName - String
batchNo - String
disease - String
price - int

Write getters, setters and parameterized constructor as required. 

This method will take a String parameter named disease along with the other parameter as array of Medicine objects. 
The method will return an array of Integer containing the price of the medicines in ascending order, if the given input(disease) matches the disease attribute of the medicine objects in the Array.

Note : 
1) Same disease can have more than one medicine.
2) disease search should be case insensitive.

Consider below sample input and output:

Input:
Hyadry
FHW0602
EyeDryness
140
Dolo
FHW0603
Fever
10
OpsionHA
P5011
EyeDryness
435
Mucinex
C0011
Cold
15
EyeDryness

Output:
140
435

*/



import java.util.*;

public class MyClass {
 public static void main(String[] args) {
  Medicine[] medicine = new Medicine[4];
  String search;

  Scanner sc = new Scanner(System.in);

  for (int i = 0; i < medicine.length; i++) {
   String medicineName = sc.nextLine();
   String batchNo = sc.nextLine();
   String disease = sc.nextLine();
   int price = sc.nextInt();
   sc.nextLine();
   medicine[i] = new Medicine(medicineName, batchNo, disease, price);

  }

  search = sc.nextLine();
  Integer[] price = medicinePriceForGivenDisease(medicine, search);
  
  for(int i=0;i<price.length;i++) {
   System.out.println(price[i]);
  }
  sc.close();
 }

 public static Integer[] medicinePriceForGivenDisease(Medicine[] medicine,String disease)
 {
  //method logic
  //code to find price, sort and return the sorted array.
  Integer [] ans = new Integer[0];  
  for(int i= 0;i < medicine.length; i++)
  {
      if(medicine[i].getDisease().equals(disease))
      {
          int len = ans.length;
          ans = Arrays.copyOf(ans, len + 1 );
          ans[len] = medicine[i].getPrice(); 
      }
  }
  Arrays.sort(ans);
  return ans;
 }

}


class Medicine {
    private
    String medicineName, batchNo , disease; 
    int price;

    // Constructor
    public Medicine(String medicineName, String batchNo, String disease, int price) {
        this.medicineName = medicineName;
        this.batchNo = batchNo;
        this.disease = disease;
        this.price = price;
    }

    // Generate getter and setter methods
    public String getMedicineName() {
        return medicineName;
    }

    public void setMedicineName(String medicineName) {
        this.medicineName = medicineName;
    }

    public String getBatchNo() {
        return batchNo;
    }

    public void setBatchNo(String batchNo) {
        this.batchNo = batchNo;
    }

    public String getDisease() {
        return disease;
    }

    public void setDisease(String disease) {
        this.disease = disease;
    }

    public int getPrice() {
        return price;
    } 
}
