package sourcecode;

import java.util.Scanner;
import java.math.BigInteger;

public class J03011_uocchunglonnhatcuasonguyenlon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        while(testCase > 0) {
            long n = sc.nextInt();
            BigInteger a = BigInteger.valueOf(n);
            BigInteger b = sc.nextBigInteger();
            System.out.println(a.gcd(b));
            testCase--;
        }
    }
}

