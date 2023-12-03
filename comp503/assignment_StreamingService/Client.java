package PartB;

import java.util.Scanner;

public class Client implements Play {
	private StreamingService streamingService;
	private DigitalContent currentlyStreamed;
	
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		StreamingService netflux = new StreamingService();
		netflux.add(new Film("Parasite","2019","Barunson","Song Kang-ho, Lee Sun-kyun, Cho Yeo-jeong"));
		netflux.add(new Film("Everything Everywhere All at Once","2022","A24","Michelle Yeoh, Ke Huy Quan, Stephanie Hsu"));
		netflux.add(new Film("Get Out","2017","Universal Pictures","Daniel Kaluuya, Allison Williams, Bradley Whitford"));
		netflux.add(new Film("Smallfoot","2018","Warner Bros Pictures","Channing Tatum, Zendaya, Danny DeVito"));
		netflux.add(new Film("Tickled","2016","Magnolia Pictures","David Farrier, Dylan Reeve"));
		netflux.add(new Music("Father, Father","2016","Cosa Nostra Music","Jay Prince"));
		netflux.add(new Music("DDU-DU DDU-DU","2018","YG Entertainment","BLACKPINK"));
		netflux.add(new Music("Hey Ya!","2003","Arista","Outkast"));
		netflux.add(new Music("Bohemian Rhapsody","1975","EMI","Queen"));
		netflux.add(new Music("Supalonely","2019","Republic Records","BENEE"));
		
		Client webApp = new Client(netflux);

		do {
			System.out.println("Select an option:");
			System.out.println("A. Display Digital Content library");
			System.out.println("B. Display currently streaming DigitalContent");
			System.out.println("C. Match Digital Content to Stream");
			System.out.println("D. Stop Streaming");
			System.out.println("E. Quit Client Application");
			
			char input = Character.toUpperCase(scan.next().charAt(0));
			
			if(input == 'A') {
				System.out.println(webApp.getStreamingService());
			}
			else if(input == 'B') {
				streamStatus(webApp);
			}
			else if(input == 'C') {
				scan.nextLine(); // buffer
				System.out.print("Search: ");
				webApp.stream(scan.nextLine());
				streamStatus(webApp);
			}
			else if(input == 'D') {
				webApp.stop();
				System.out.println("Streaming stopped.\n");
			}
			else if(input == 'E') {
				System.out.println("Application quit successfully.");
				break;
			}
		} while (true);
	}
	
	/**
	 * Method: constructor
	 * --------------------------------------------------
	 * */
	public Client(StreamingService streamingService) {
		this.streamingService = streamingService;
		this.currentlyStreamed = null;
	}
	
	/**
	 * Method: stream
	 * --------------------------------------------------
	 * Sets currentlyStreamed to first DigitalContent object 
	 * returned from matching input query if there is a match.
	 * */
	@Override
	public void stream(String query) {
		if (!this.streamingService.match(query).isEmpty()){
			currentlyStreamed = this.streamingService.match(query).get(0);
		}
	}

	/**
	 * Method: stop
	 * --------------------------------------------------
	 * Sets currentlyStreamed to null.
	 * */
	@Override
	public void stop() {
		this.currentlyStreamed = null;
	}
	
	/**
	 * Method: streamStatus
	 * --------------------------------------------------
	 * @param webApp - webApp to get stream information from.
	 * */
	public static void streamStatus(Client webApp) {
		if(webApp.getCurrentStream() == null) {
			System.out.println("Nothing streaming!\n");
		}
		else if(webApp.getCurrentStream() != null) {
			System.out.println("Now playing: "+ webApp.getCurrentStream()+"\n");
		}
	}

	/**
	 * Method: getMethods
	 * --------------------------------------------------
	 * */
	public StreamingService getStreamingService() {
		return this.streamingService;
	}
	
	@Override
	public DigitalContent getCurrentStream() {
		return this.currentlyStreamed;
	}
}












