package sourcecode;

import java.util.Scanner;

public class J01011_boisochunguocsochung {
    public static long gcd(long a, long b) {
        if(a == 0 || b == 0) {
            return a + b;
        }
        while(a != b) {
            if(a > b) a -= b;
            if(b > a) b -= a; 
        }
        return a;
    }
    public static long lcm(long a, long b) {
        return (a / gcd(a, b)) * b;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        while(testCase > 0) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            System.out.println(lcm(a, b) + " " + gcd(a, b));
            testCase--;
        }
    }
}
