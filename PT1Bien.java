import java.util.Scanner;

public class PT1Bien {
    public static void main(String[] args) {
        double a,b;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Nhap so a");
        a = s1.nextDouble();
        System.out.println("nhap so b");
        b = s1.nextDouble();

        System.out.println("Phuong trinh cua ban la : " + a + "x + " + b  + "= 0");
        if(a==0)
        {
            if(b==0)
               { System.out.println("PT vo so nghiem");
                }
            else{
                System.out.println("PT vo ngiem");
                }
        }
        else{
            double nghiem = -b/a;
            System.out.println("Nghiem cua pt la : " + nghiem);
            }
        }
}
