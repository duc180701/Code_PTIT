package sourcecode;

import java.util.Scanner;

public class J04008_chuvitamgiac {
    static class point{
        private double x;
        private double y;

        public point(){}

        public void nhap(Scanner s){
            x = s.nextDouble();
            y = s.nextDouble();
        }

        public double getX(){
            return x;
        }

        public double getY(){
            return y;
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        while (n-->0){
            point p1 = new point();
            p1.nhap(s);
            point p2 = new point();
            p2.nhap(s);
            point p3 = new point();
            p3.nhap(s);
            double c1 = Math.sqrt(Math.pow((p2.getX() - p1.getX()),2) + Math.pow((p2.getY() - p1.getY()), 2));
            double c2 = Math.sqrt(Math.pow((p3.getX() - p1.getX()),2) + Math.pow((p3.getY() - p1.getY()), 2));
            double c3 = Math.sqrt(Math.pow((p3.getX() - p2.getX()),2) + Math.pow((p3.getY() - p2.getY()), 2));
            if (c1+c2>c3 && c1+c3>c2 && c3+c2>c1){
                double cv = c1+c2+c3;
                System.out.println(String.format("%.3f", cv));
            }else{
                System.out.println("INVALID");
            }
        }
    }
}
