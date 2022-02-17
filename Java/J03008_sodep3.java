package sourcecode;

import java.util.Scanner;

public class J03008_sodep3 {
    public static boolean checknt(int n) {
        if (n < 2) {
            return false;
        }
        int squareRoot = (int) Math.sqrt(n);
        for (int i = 2; i <= squareRoot; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        sc.nextLine();
        while(testCase > 0) {
            int yes = 1;
            String str = sc.nextLine();
            for(int i = 0; i < str.length() / 2; i++) {
                if(str.charAt(i) == str.charAt(str.length() - 1 - i)) {
                    int num = str.charAt(i) - 48;
                    if(checknt(num) == false) {
                        yes = 0;
                        break;
                    }
                } else {
                    yes = 0;
                    break;
                }
            }
            if(yes == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            testCase--;
        }
    }
}
