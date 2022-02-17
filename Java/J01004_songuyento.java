package sourcecode;

import java.util.Scanner;

public class J01004_songuyento {
    
    public static boolean snt(int n) {
        if(n < 2) return false;
        else if(n == 2) return true;
        else {
            for(int i = 3; i <= (int) Math.sqrt(n); i++) {
                if(n % i == 0) return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        while(testCase > 0) {
            int n = sc.nextInt();
            if(snt(n)) System.out.println("YES");
            else System.out.println("NO");
            testCase--;
        }
    }
}
