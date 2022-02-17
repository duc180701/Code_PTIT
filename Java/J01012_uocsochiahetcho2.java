package sourcecode;

import java.util.Scanner;

public class J01012_uocsochiahetcho2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        while(testCase > 0) {
            long a = sc.nextLong();
            if(a % 2 != 0) {
                System.out.println("0");
            } else {
                int cnt = 0;
                for(long i = 1; i <= (long) Math.sqrt(a); i++) {
                    if(a % i == 0) {
                        if(i % 2 == 0) {
                            cnt++;
                        }
                        if((a / i) % 2 == 0 && (a / i) != i) {
                            cnt++;
                        }
                    }
                }
                System.out.println(cnt);
            }
            testCase--;
        }
    }
}
