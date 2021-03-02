package OOLT;

import java.util.Scanner;

public class PTBac2 {
    public static void main(String[] args) {
        double a,b,c,x1,x2;
        Scanner sr = new Scanner(System.in);
        System.out.println("Nhap a");
        a = sr.nextDouble();
        System.out.println("Nhap b");
        b = sr.nextDouble();
        System.out.println("Nhap c");
        c = sr.nextDouble();
        System.out.println("PT co dang : " + a + "x^2 + " + b + "x + "+ c + " = 0");
        double delta = b*b - 4*a*c;
        if(a== 0)
        {
            if(b == 0)
                System.out.println("PT vo nghiem");
            else
                System.out.println("PT co nghiem duy nhat " + " x = " + (-c/b));
            return;
        }
        if(delta > 0)
        {
            x1 = ((-b + Math.sqrt(delta))/(2*a));
            x2 = ((-b - Math.sqrt(delta))/ (2*a));
            System.out.println("x1 = " + x1 + " va x2 = " + x2);
        }
        else if(delta == 0)
        {
            x1 = (-b / (2*a));
            System.out.println("x1 = x2 = " + x1);
        }
        else 
            System.out.println("PT vo nghiem");
    }
}
