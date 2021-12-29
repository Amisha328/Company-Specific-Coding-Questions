/*
Create a Class Player with below attributes:

playerId - int
playerName - String
iccRank - int
noOfMatchesPlayed - int
totalRunsScored - int

Write getters, setters and parameterized constructor as required. 

Implement static method - findAverageScoreOfPlayers in MyClass class.

This method will take an int parameter named target along with the other parameter as array of Player objects. The method will calculate the average runrate of the player based on totalRunsScored and
noOfMatchesPlayed and return the same in a double array where the noOfMatchesPlayed attribute is greater than or equal to the int parameter target passed.

This method should be called from the main method and display the Grade of the players. If the averageRunRate is greater than or equal to 80 then it should print "Grade A Player". If
the averageRunRate is between 50 to 79 then it should print "Grade B Player", else it should print "Grade C Player".

Consider below sample input and output:

Input:
100
Sachin
1
102
13000
101
Shewag
2
110
10000
102
Dhoni
3
80
7500
104
Kholi
4
70
7000
100

Output:
Grade A Player
Grade A Player
*/

import java.util.*;                
public class MyClass
{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Player[] players = new Player[4];
        for(int i = 0; i < players.length; i++){
            players[i] = new Player(sc.nextInt(),sc.next(),sc.nextInt(),sc.nextInt(),sc.nextInt());
        }
        int target = sc.nextInt();

        double[] averageRun = findAverageOfRuns(players,target);
        for(int i = 0;i < averageRun.length;i++)
        {
            if(averageRun[i] >= 80)
                System.out.println("Grade A Player");
            else if(averageRun[i] >= 50 && averageRun[i] <= 79)
                System.out.println("Grade B Player");
            else
                System.out.println("Grade C Player");
        }
}
    
  public static double[] findAverageOfRuns(Player[] players, int target)
  {
        double averageRun[]= new double[0];
        for(int i = 0;i < players.length;i++)
        {
            if(players[i].getMatchesPlayed() >= target)
            {
                averageRun = Arrays.copyOf(averageRun, averageRun.length+1);
                averageRun[averageRun.length-1] = (double)(players[i].getRunsScored()/players[i].getMatchesPlayed());
            }
        }
        return averageRun;
    }
}

class Player
{
    int id;
    String name;
    int iccRank;
    int matchesPlayed;
    int runsScored;
	
    public Player(int id,String name,int iccRank,int matchesPlayed,int runsScored)
    {
        this.id=id;
        this.name=name;
        this.iccRank=iccRank;
        this.matchesPlayed=matchesPlayed;
        this.runsScored=runsScored;
    }
  
    public int getMatchesPlayed(){
        return matchesPlayed;
    }
    public int getRunsScored(){
        return runsScored;
    }
}
