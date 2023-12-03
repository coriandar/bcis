package examples;

import java.util.Scanner;

public class CasinoGame 
{
	DicePair dice;
	int winAmount;

	boolean isWinningRoll()
	{
		boolean result=false;

		switch(dice.faceValue())
		{
		case 2: 
			result=true;
			break;
		case 3: 
			result = true;
			break;
		case 4: 
			result = true;
			break;
		case 10: 
			result = true;
			break;
		case 11: 
			result = true;
			break;
		case 12: 
			result = true;
			break;

		default:
			result = false;
		}
		return result;		
	}


	void throwDice()
	{
		this.dice.roll();
		if(this.isWinningRoll())
		{
			this.winAmount++;
		}
		else
		{
			this.winAmount--;
		}
	}
	


	CasinoGame()
	{
		this.dice = new DicePair();
		this.winAmount=0;
	}



	public static void main(String[] args) 
	{


		CasinoGame cg = new CasinoGame();

		System.out.println("Welcome to the casino");
		System.out.println("Press enter to roll the dice");
		Scanner scan = new Scanner(System.in);

		boolean playing=true;



		while(playing)  
		{
			System.out.println("Total amount won: "+cg.winAmount);
			System.out.println("Wager $1 and roll the dice? (Y\\N)");
			String response = scan.nextLine();

			if(response.toUpperCase().contains(("Y")))
			{
				cg.throwDice();
				System.out.println("You rolled a "+cg.dice.faceValue());
				if(cg.isWinningRoll())
				{
					System.out.println("You win!");
				}
				else
				{
					System.out.println("Sorry, you lost!");
				}
			}			
			else
			{
				playing=false;
			}

			
	

		}



	}

}
