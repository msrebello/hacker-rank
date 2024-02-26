// https://www.hackerrank.com/challenges/java-static-initializer-block/problem?isFullScreen=true

package staticblock;

import java.util.*;

public class Solution {
    
    static int B, H;
    static boolean flag = true;
    
    static {
        Scanner sc = new Scanner(System.in);
        B = sc.nextInt();
        H = sc.nextInt();
        
        if (B <= 0 || H <= 0) {
            flag = false;
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        }
        
        sc.close();     
    }

    public static void main(String[] args) {
        
        if (flag) {
            int area = B * H;
            System.out.println(area);
        }
            
    }
}
