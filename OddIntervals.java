import java.util.Scanner;
  public class OddIntervals {
    public static void main(String args[]) {
    Scanner sc=new Scanner(System.in);
      System.out.println("Enter two numbers for ranges:");
    int a=sc.nextInt();
    int b=sc.nextInt();
  for(int i=a;i<=b;i=i+2) {
     if(i%2==0) {
      System.out.println(i+1);
        } else {
      System.out.println(i);
      }
    }
  }
}
