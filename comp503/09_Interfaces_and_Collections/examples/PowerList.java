package examples;

import java.util.ArrayList;
import java.util.Arrays;

public class PowerList 
{
	
	public static void main(String[] args) 
	{
		
	
		LED ledTv1 = new LED();
		LED ledTv2 = new LED();
		
		CRT crtTv1 = new CRT();
		CRT crtTv2 = new CRT();		

		ArrayList<Television> tvs = new ArrayList<Television>(Arrays.asList(ledTv1,ledTv2,crtTv1,crtTv2));
				
		for(Television tv : tvs)
		{
			System.out.println(tv+" is a Television object");
		}
		
		Radio radio1 = new Radio();
		Radio radio2 = new Radio();
		
		Computer computer1 = new Computer();
		Computer computer2 = new Computer();		
		
		ArrayList<PowerButton> power = new ArrayList<PowerButton>(Arrays.asList(radio1,computer1,radio2,computer2));
		
		power.addAll(tvs);
		
		for(PowerButton pb : power)
		{
			pb.on();
		}
	}
}
