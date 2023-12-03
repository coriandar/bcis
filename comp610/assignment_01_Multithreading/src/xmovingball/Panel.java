
package xmovingball;

import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.ComponentEvent;
import java.awt.event.ComponentListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import javax.swing.ImageIcon;
import javax.swing.JPanel;

public class Panel extends JPanel implements KeyListener, MouseListener, ComponentListener {

    int x = 0;
    int y = 0;
    int vx = 0;
    int vy = 0;
    int width = 1000;
    int height = 1000;
    int destination_x = 0;
    int destination_y = 0;
    boolean hasMouseClicked = false;
    
    Image image;

    public Panel()
    {
        this.addKeyListener(this);
        this.addMouseListener(this);
        this.addComponentListener(this);       
        this.setFocusable(true);
        image = new ImageIcon("emoji.jpg").getImage();
    }
    
    
    public void paint(Graphics g)
    {
        paintComponent(g);
        x+=vx;
        y+=vy;
        

        moveToDestination(destination_x, destination_y);
        System.out.println(vx+" "+vy);
        g.drawImage(image, x, y, this);
        g.drawString("Click on where you want me to move to", x, y+100);
       
        repaint();
    }
    
    private void moveToDestination(int destination_x, int destination_y)
    {
        if(x<destination_x)
        {
            vx = 1;
        }
        else if(x>destination_x)
        {
            vx = -1;
        }
        else
        {
            vx = 0;
        }
        
        if(y<destination_y)
        {
            vy = 1;
        }
        else if(y>destination_y)
        {
            vy = -1;
        }
        else
        {
            vy = 0;
        }
        
        if(vx ==0 && vy == 0)
        {
            hasMouseClicked = false;
        }
    }
    

    @Override
    public void keyTyped(KeyEvent ke) {
        

    }

    @Override
    public void keyPressed(KeyEvent ke) {

        if(ke.getKeyCode() == KeyEvent.VK_UP)
        {
            y-=1; 
            vy = -1;
        }
        if(ke.getKeyCode() == KeyEvent.VK_DOWN)
        {
            y+=1;
            vy = 1;
        }
        if(ke.getKeyCode() == KeyEvent.VK_LEFT)
        {
            x-=1;
            vx = -1;
        }
        if(ke.getKeyCode() == KeyEvent.VK_RIGHT)
        {
            x+=1;
            vx = 1;
        }
    }

    @Override
    public void keyReleased(KeyEvent ke) {
        vx = 0;
        vy = 0;
    }    

    @Override
    public void componentResized(ComponentEvent ce) {
        width = this.getWidth();
        height = this.getHeight();
    }

    @Override
    public void componentMoved(ComponentEvent ce) {

    }

    @Override
    public void componentShown(ComponentEvent ce) {
        
    }

    @Override
    public void componentHidden(ComponentEvent ce) {
        
    }

    @Override
    public void mouseClicked(MouseEvent me) {
        //System.out.println("x: "+ me.getX()+" y: "+me.getY());
        hasMouseClicked = true;
        this.destination_x = me.getX();
        this.destination_y = me.getY();
    }

    @Override
    public void mousePressed(MouseEvent me) {
        
    }

    @Override
    public void mouseReleased(MouseEvent me) {
       
    }

    @Override
    public void mouseEntered(MouseEvent me) {
        
    }

    @Override
    public void mouseExited(MouseEvent me) {
        
    }
}
