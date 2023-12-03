package Task11_2;

import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.Date;

public class Metadata {
    private String createdBy;
    private Date createdOn;

	public Metadata() {
		this.createdBy = getHostName();
		this.createdOn = new Date();
	}

	public Date getDate() { return this.createdOn; }
	public String getAuthor() { return this.createdBy; }

    private String getHostName() {
        String hostname = "Unknown";
        try {
            InetAddress addr;
            addr = InetAddress.getLocalHost();
            hostname = addr.getHostName();
        }
		catch (UnknownHostException ex) { System.out.println("Hostname can not be resolved"); }
        return hostname;
    }
}
