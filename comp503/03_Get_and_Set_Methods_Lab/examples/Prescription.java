package examples;

public class Prescription {

	private String drugDescription;
	private String startDate;
	private int nWeeksToRepeat;
	private double dosageMG;

	public Prescription(String drugDescription, String startDate, int nWeeksToRepeat, double dosageMG) {

		this.setDrugDescription(drugDescription);
		this.setStartDate(startDate);
		this.setnWeeksToRepeat(nWeeksToRepeat);
		this.setDosageMG(dosageMG);
	}
	
	public String getDrugDescription() {
		return drugDescription;
	}

	public void setDrugDescription(String drugDescription) {
		this.drugDescription = drugDescription;
	}

	public String getStartDate() {
		return startDate;
	}

	public void setStartDate(String startDate) {
		this.startDate = startDate;
	}

	public int getnWeeksToRepeat() {
		return nWeeksToRepeat;
	}

	public void setnWeeksToRepeat(int nWeeksToRepeat) {
		this.nWeeksToRepeat = nWeeksToRepeat;
	}

	public double getDosageMG() {
		return dosageMG;
	}

	public void setDosageMG(double dosageMG) 
	{
	if((dosageMG>0)&&(dosageMG<50))
			this.dosageMG = dosageMG;
	}



}
