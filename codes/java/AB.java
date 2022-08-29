class AB{
static int x=10;
int y = 20;
void ab(){
System.out.println(x);
}
public static void main(String args[]){
    System.out.println(x);

    new AB().ab();
}
}
