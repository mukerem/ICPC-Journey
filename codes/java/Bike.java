
/*abstract class Vachile
{  
final int y;
 int limit=40;  
 Vachile(){
System.out.println("constructor is invoked");
}  
 Vachile(int x)
{
System.out.println("constructor is invoked");
}  
 void getDetails()
{
System.out.println("it has two wheels");
} 
 abstract void run();  
}  
  
class Bike extends Vachile
{  

 void run()
{
System.out.println("running safely..");
}  
 public static void main(String args[])
{  
  Vachile obj = new Bike();  
  obj.run();
  obj.getDetails();  
  System.out.println(obj.limit);  
 }  
}  

interface Person
{  
void run();
}  
class Bike implements Person
{
 void run()
{
System.out.println("Run fast");
} 
public static void main(String args[])
{  
  Person obj = new Bike();  
  obj.run();
 
 }  
}

interface Developer
{  
void disp();
}  
interface Manager
{
void show();
} 

class Bike implements Developer, Manager
{
public void disp()
{
System.out.println("Hello Good Morning");  
}
public void show()
{
System.out.println("How are you ?");  
}
public static void main(String args[])
{
Bike obj=new Bike();
obj.disp();
//obj.show();
}  
}
*/
package test;
class Person
{
void walk()
{
System.out.println("Can Run....");
}
}
//package test2;
public class Bike extends Person
{

public static void main(String arg[])
{
Person p=new Bike(); //upcasting
p.walk();
}
}
