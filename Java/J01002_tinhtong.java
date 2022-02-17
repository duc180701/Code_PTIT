package sourcecode;

import java.util.*;

public class J01002_tinhtong {
     public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int testCase = s.nextInt();
        while(testCase>0){
            long k = s.nextLong();
            System.out.println(k*(2+(k-1))/2);
            testCase--;
        }
    }
}
