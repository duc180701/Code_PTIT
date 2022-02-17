package sourcecode;

import java.util.Scanner;

public class J02013_sapxepnoibot {
    public static boolean check(int[] a, int n) {
        for(int i = 1; i < n; i++) {
            if(a[i] < a[i - 1]) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n + 1];
        for(int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int step = 1;
        while(check(a, n) == false) {
            System.out.print("Buoc " + step + ":");
            for(int i = 1; i < n; i++) {
                if(a[i] < a[i - 1]) {
                    int tmp = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = tmp;
                }
            }
            for(int i = 0; i < n; i++) {
                System.out.print(" " + a[i]);
            }
            System.out.println();
            step++;
        }
    }
}

