package sourcecode;

import java.util.Scanner;

public class J02012_sapxepchen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int st = 1;
        int[] a = new int[n + 1];
        for(int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int step = 0;
        for(int i = 1; i <= n; i++) {
            System.out.print("Buoc " + step + ":");
            for(int j = 0; j < i; j++) {
                for(int k = j + 1; k < i; k++) {
                    if(a[j] > a[k]) {
                        int tmp = a[j];
                        a[j] = a[k];
                        a[k] = tmp;
                    }
                }
            }
            for(int j = 0; j < i; j++) {
                System.out.print(" " + a[j]);
            }
            System.out.println();
            step++;
        }
    }
}