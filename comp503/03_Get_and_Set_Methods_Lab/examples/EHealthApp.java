package examples;

public class EHealthApp {

	public static void main(String[] args) 

	{
		Prescription pr = new Prescription("RX","31/07/2017",5,30.0);

		System.out.println(pr.getDrugDescription());
		//pr.setDrug(null);
		//pr.setDosage(900.34354435);
		System.out.println(pr.getDrugDescription());
		System.out.println(pr.getDosageMG());

		//System.out.println(pr.drug);	
	//	System.out.println(pr);


	}

}
