package sourcecode;

import java.util.Scanner;

public class J03006_sodep1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        sc.nextLine();
        while(testCase > 0) {
            int yes = 1;
            String str = sc.nextLine();
            for(int i = 0; i <= str.length() / 2; i++) {
                int num = str.charAt(i);
                if(num % 2 == 0) {
                    if(str.charAt(i) != str.charAt(str.length() - 1 - i)) {
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
