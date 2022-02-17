package sourcecode;

import java.util.Scanner;

public class J01008_phantichthuasonguyento {
    public static boolean snt(int x) {
        if(x < 2) return false;
        else {
            for(int i = 2; i <= (int) Math.sqrt(x); i++) {
                if(x % i == 0) return false;
            }
            return true;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        int step = 1;
        while(testCase > 0) {
            long n = sc.nextLong();
            System.out.print("Test " + step + ":");
            int i = 2;
            int cnt = 0;
            while(n > 1) {
                while(n % i == 0 && snt(i) == true) {
                    n /= i;
                    cnt++;
                }
                if(snt(i) && cnt > 0) System.out.print(" " + i + "(" + cnt + ")");
                cnt = 0;
                i++;
            }
            System.out.println();
            testCase--;
            step++;
        }
    }
}
