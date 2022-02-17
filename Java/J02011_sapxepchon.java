package sourcecode;

import java.util.Scanner;

public class J02011_sapxepchon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n + 1];
        for(int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int step = 1;
        for(int i = 0; i < n - 1; i++) {
            int min = i;
            for(int j = i + 1; j < n; j++) {
                if(a[j] < a[min]) {
                    min = j;
                }
            }
            int tmp;
            tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
            System.out.print("Buoc " + step + ":");
            for(int k = 0; k < n; k++) {
                System.out.print(" " + a[k]);
            }
            System.out.println();
            step++;
        }
    } 
}
