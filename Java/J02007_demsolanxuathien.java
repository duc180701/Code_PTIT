package sourcecode;

import java.util.Scanner;

public class J02007_demsolanxuathien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        int step = 1;
        while(testCase > 0) {
            int n = sc.nextInt();
            int[] a = new int[n + 1];
            int[] dd = new int[10001];
            int[] used = new int[10001];
            for(int i = 0; i < 10001; i++) {
                dd[i] = 0;
                used[i] = 0;
            }
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                dd[a[i]]++;
            }
            System.out.println("Test " + step + ":");
            for(int i = 0; i < n; i++) {
                if(used[a[i]] == 0) {
                    used[a[i]] = 1;
                    System.out.println(a[i] + " xuat hien " + dd[a[i]] + " lan");
                }
            }
            testCase--;
            step++;
        }
    }
}

