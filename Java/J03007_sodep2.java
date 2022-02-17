package sourcecode;

import java.util.Scanner;

public class J03007_sodep2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        sc.nextLine();
        while(testCase > 0) {
            int yes = 1;
            String str = sc.nextLine();
            int sum = 0;
            if(str.length() % 2 == 0) {
                for(int i = 0; i < str.length() / 2; i++) {
                    if(str.charAt(i) == str.charAt(str.length() - 1 - i)) {
                        int num = str.charAt(i) - 48;
                        sum += 2 * num;
                    } else {
                        yes = 0;
                        break;
                    }
                }
            } else {
                for(int i = 0; i < str.length() / 2; i++) {
                    if(str.charAt(i) == str.charAt(str.length() - 1 - i)) {
                        int num = str.charAt(i) - 48;
                        sum += 2 * num;
                    } else {
                        yes = 0;
                        break;
                    }
                }
                int num1 = str.charAt(str.length() / 2) - 48;
                sum += num1;
            }
            if(str.charAt(0) != '8' || str.charAt(str.length() - 1) != '8') {
                yes = 0;
            }
            if(yes == 1) {
                if(sum % 10 == 0) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            } else {
                System.out.println("NO");
            }
            testCase--;
        }
    }
}
