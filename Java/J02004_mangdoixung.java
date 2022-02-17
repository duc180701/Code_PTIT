package sourcecode;

import java.util.Scanner;

public class J02004_mangdoixung {
    public static boolean check(int n, int[] a) {
        if(n % 2 == 0) {
            for(int i = 0; i < n / 2; i++) {
                if(a[i] != a[n - 1 - i]) return false;
            }
            return true;
        } else {
            for(int i = 0; i < n / 2 - 1; i++) {
                if(a[i] != a[n - 1 - i]) return false;
            }
            return true;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        while(testCase > 0) {
            int n = sc.nextInt();
            int[] a = new int[n + 1];
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            if(check(n, a)) System.out.println("YES");
            else System.out.println("NO");
            testCase--;
        }
    }
}
