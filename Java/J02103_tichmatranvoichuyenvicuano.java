package sourcecode;

import java.util.Scanner;

public class J02103_tichmatranvoichuyenvicuano {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        int step = 1;
        while(testCase > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] arr = new int[n][m];
            int[][] arrT = new int[m][n];
            int[][] res = new int[n][n];
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    res[i][j] = 0;
                }
            }
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    arr[i][j] = sc.nextInt();
                    arrT[j][i] = arr[i][j];
                }
            }
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    for(int k = 0; k < m; k++) {
                        res[i][j] += arr[i][k] * arrT[k][j];
                    }
                }
            }
            System.out.println("Test " + step + ":");  
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    System.out.print(res[i][j] + " ");
                }
                System.out.println();
            }
            step++;
            testCase--;
        } 
    }
}
