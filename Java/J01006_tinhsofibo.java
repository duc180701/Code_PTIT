package sourcecode;

import java.util.Scanner;

public class J01006_tinhsofibo {
    public static void fb(int n, long[] a) {
        a[0] = 1;
        a[1] = 1;
        for(int i = 2; i < n; i++) {
            a[i] = a[i-1] + a[i-2];
        }
        System.out.println(a[n-1]);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        while(testCase > 0) {
            int n = sc.nextInt();
            long[] a = new long[n];
            fb(n, a);
            testCase--;
        }
    }
}
