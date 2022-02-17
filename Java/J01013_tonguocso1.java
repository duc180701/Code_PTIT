package sourcecode;

import java.util.Scanner;
import java.util.Arrays;

public class J01013_tonguocso1 {
    public static boolean[] snt = new boolean[2000001];
    public static int[] arr = new int[2000001];
    public static void sangEratos() {
        Arrays.fill(snt, true);
        snt[0] = false;
        snt[1] = false;
        int j = 0;
        for(int i = 2; i <= Math.sqrt(2000000); i++) {
            if(snt[i]) {
                arr[j] = i;
                j++;
                for(int k = 2 * i; k <= 2000000; k += i) {
                    snt[k] = false;
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        sangEratos();
        int testCase = sc.nextInt();
        long res = 0;
        while(testCase > 0) {
            int n = sc.nextInt();
            if(snt[n]) res += n;
            else {
                int t = 0;
                while(n > 1) {
                    while(n % arr[t] == 0) {
                        n /= arr[t];
                        res += arr[t];
                    }
                    t++;
                    if(snt[n]) {
                        res += n;
                        break;
                    }
                } 
            }
            testCase--;
        }
        System.out.println(res);
    }
}
