package sourcecode;

import java.util.*;

public class J02104_danhsachcanh {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a[][] = new int[n][n];
        for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                a[i][j] = s.nextInt();
            }
        }
        for (int i = 0;i<n;i++){
            for (int j = 0; j < n ; j++){
                if(a[i][j] == 1){
                    System.out.println("("+(i+1)+","+(j+1)+")");
                    a[i][j] = 0;
                    a[j][i] = 0;
                }
            }
        }
    }
}
