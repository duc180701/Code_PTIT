package sourcecode;

import java.util.Scanner;

public class J02014_diemcanbang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        short testCase = sc.nextShort();
        while(testCase > 0) {
            boolean in = true;
            int n = sc.nextInt();
            int sumLeft = 0;
            int sumRight = 0;
            int[] a = new int[n];
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                if(i >= 1) sumRight += a[i];
            }
            for(int i = 1; i < n - 1; i++) {
                sumLeft += a[i - 1];
                sumRight -= a[i];
                if(sumLeft == sumRight) {
                    System.out.println(i + 1);
                    in = false;
                    break;
                }
            }
            if(in) System.out.println(-1);
            testCase--;
        }
    }
}
