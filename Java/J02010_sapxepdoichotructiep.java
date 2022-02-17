package sourcecode;

import java.util.Scanner;

public class J02010_sapxepdoichotructiep {
    public static boolean check(int[] a, int n) {
        for(int i = 1; i < n; i++) {
            if(a[i] < a[i - 1]) return false;
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
        int i = 0;
        while(check(a, n) == false) {
            System.out.print("Buoc " + step + ": ");
            step++;
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            for(int k = 0; k < n; k++) {
                System.out.print(a[k] + " ");
            }
            System.out.println();
            i++;
        }
    } 
}
