import java.lang.Thread;
public class A implements Runnable
{
    Thread t;
    A()
    {
        t=new Thread(this,"Dip Thread");
        System.out.println(t);
        t.start();
    }
    public void run()
    {
        int i;
        for(i=1; i<=100; i++)
        {
            System.out.println(t.getName()+" Yo");
            try
            {
                Thread.sleep(100);
            }
            catch(InterruptedException d)
            {
                //System.out.println(d.toString());
            }
        }
    }
    public static void main(String arg[])
    {
        new A();
        int i;
        for(i=1; i<=100; i++)
        {
            System.out.println("Yooo");
            try
            {
                Thread.sleep(100);
            }
            catch(InterruptedException f)
            {
                //System.out.println(f.toString());
            }
        }
    }

}

