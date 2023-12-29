import java.awt.*;
import java.awt.event.*;
class GUI2
{
    public  static void main(String arg[])
 { marvellousframe mobj = new marvellousframe("ppa49")
   }
}
class marvellousframe
{
    public marvellousframe(String title)
    {
        Frame fobj = new Frame ("title");
        fobj .setSize(300,600);
        fobj.setVisible(true);
        fobj.addwindowlistener(new marvellouslistener());

    }
}
class marvellouslistener implements Windowlistener
{
public viod WindowDeactinvated(Window Event obj){}
public viod WindowActinvated(Window Event obj){}
public viod WindowDeiconifeid(Window Event obj){}
public viod WindowIconfeid(Window Event obj){}
public viod Windowclosed(Window Event obj){}
public viod Windowclosing(Window Event obj){}
{
    System.exist(0);
}


}
