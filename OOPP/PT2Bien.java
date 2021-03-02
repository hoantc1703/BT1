import java.util.Scanner;

public class PT2Bien {
    public static void main(String[] args) {
        double a11, a12, b1, a21, a22, b2;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Nhap a11");
        a11 = s1.nextDouble();
        System.out.println("Nhap a12");
        a12 = s1.nextDouble();
        System.out.println("Nhap a21");
        a21 = s1.nextDouble();
        System.out.println("Nhap a22");
        a22 = s1.nextDouble();
        System.out.println("Nhap b1");
        b1 = s1.nextDouble();
        System.out.println("Nhap b2");
        b2 = s1.nextDouble();

        double D = a11*a22 - a21*a12;
        double D1 = b1*a22 - b2*a12;
        double D2 = a11*b2 - a21*b1;

        System.out.println("Phuong trinh co dang : ");
        System.out.println(a11 + "x1 + " + a12 + "*x2 " + "= "  + b1);
        System.out.println(a21 + "x1 + " + a22 + "*x2 " + "= "  + b2);

        double x1 = D1/D;
        double x2 = D2/D;

        if(D != 0)
        {
            System.out.println(" Gia tri x1, x2 la : (x1;x2) = " + "(" + x1 + " ; " + x2 + ")");
        }
        else
        {
            if(D == 0 )
            {
                if(D1 == 0)
                {
                    if(D2==0)
                    {
                        System.out.println("PT vo so nghiem");
                    }
                }
                else{
                    System.out.println("PT vo nghiem");
                }
            }
        }
    }
}
