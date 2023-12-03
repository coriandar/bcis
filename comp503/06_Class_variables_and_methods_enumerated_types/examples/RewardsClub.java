package examples;

public enum RewardsClub{
    GOLD(1000){
    	@Override 
    	public boolean isAMember()
    	{
    		return true;
    	}
    },
    
    SILVER(750){
    	@Override 
    	public boolean isAMember()
    	{
    		return true;
    	}    	
    },
    
    BRONZE(650){
    	@Override 
    	public boolean isAMember()
    	{
    		return true;
    	}    	
    },
    
    NONMEMBER(0);
	
	
	private int fee;
	
	public boolean isAMember()
	{
		return false;
	}
	
	private RewardsClub(int fee)
	{
		this.setFee(fee);
	}
	
	

	public int getFee() 
	{
		return fee;
	}

	public void setFee(int fee) 
	{
		this.fee = fee;
	}	
	
	
	public String toString()
	{
	return this.name()+"("+this.getFee()+")";	
	}
	
	public static void main(String[] args)
	{
		System.out.println(RewardsClub.BRONZE == RewardsClub.GOLD);
		System.out.println(RewardsClub.SILVER == RewardsClub.SILVER);
	}
	
}