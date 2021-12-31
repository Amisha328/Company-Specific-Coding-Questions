/*

Create a Class Player with below attributes:

id - int
country - String
side - String
price - double

Write getters, setters and parameterized constructor as required. 
Implement static method - searchPlayerForMatch in Solution class.

This method will take a String parameter along with the other parameter as array of Player objects. 
The method will return array of Player where the String parameter appears in the side attribute (with case insensitive search).

This method should be called from main method and display the id of returned objects in ascending order. 

Before calling this method(searchPlayerForMatch) in the main method, use Scanner object to read values for four Player objects referring the attributes in the above sequence. 
then, read the value for search parameter. 
Next call the method searchPlayerForMatch, write the logic to sort the id in ascending order (in main method) and display the result. 

Consider below sample input and output:

Input:
1
India
Batting
2500000
2
Australia
Batting
1000000
3
Srilanka
Bowling
1700000
4
England
Bowling
2000000
Batting

Output:
1
2
*/

import java.util.*;
public class MyClass
{

public static void main(String[] args)
{
//code to read values
//code to call required method
//code to display the result
  Scanner sc = new Scanner(System.in);
        Player[] players = new Player[4];
        for(int i = 0; i < players.length; i++){
            int id = sc.nextInt();
            sc.nextLine();
            String country = sc.nextLine();
            String side = sc.nextLine();
            double price = sc.nextDouble();
            players[i] = new Player(id, country, side, price);
        }
  String search = sc.next();
  Player playerId[] = searchPlayerForMatch(search, players);
  
  for(int i=0; i < playerId.length; i++) 
  {
   System.out.println(playerId[i].getId());
  }
} 

public static Player[] searchPlayerForMatch(String search, Player[] players)
{
//method logic
  Player[] detail = new Player[0];
  for(int i = 0; i < players.length; i++)
  {
    if(players[i].getSide().equalsIgnoreCase(search))
    {
      detail = Arrays.copyOf(detail, detail.length+1);
      detail[i] = players[i];
    }
 }
  return detail;
}

}

class Player
{
//code to build Player class
  int id;
  String country, side;
  double price;
  
  public Player(int id, String country, String side, double price)
  {
    this.id = id;
    this.country = country;
    this.side = side;
    this.price = price;
  }
  
  public String getSide(){
        return side;
    }
    public int getId(){
        return id;
    }
  
}
            
