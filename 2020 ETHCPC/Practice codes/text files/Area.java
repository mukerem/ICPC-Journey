class Area {
int x=5, y=6;
Area(){this(3);}
Area(int x)
{this(x,8);}
Area(int a, int z)
{x=a+3;y=z+4;
System.out.println(x*y*5); } }
class Tri extends Area{
Tri()
{super(6);
System.out.println(x*y*0.5);}
Tri(int z)
{super(z);} }
class Circle extends Tri{
public Circle() {System.out.println(x+y); }
public static void main(String args [])
{ Area a1=new Area();
Tri t2=new Tri();
Circle c1=new Circle(); 
} }