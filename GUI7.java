//import java.awt.*;
import javax.swing.*;

import java.awt.event.*;
class GUI4
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}
class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
       JFrame fobj = new JFrame(title);
        fobj.setSize(300,600);  // (W,H)
        fobj.setVisible(true);

        JButton bobj = new JButton("Submit");
        fobj.add(bobj);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener extends WindowAdapter
{
   
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void windowOpened(WindowEvent obj){}
}

