// https://www.hackerrank.com/challenges/java-end-of-file/problem?isFullScreen=true

package eof;

import java.util.*;

public class Solution {

    public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);
    
    int i = 1;
    
    while (scanner.hasNext()) {
        String line = scanner.nextLine();
        System.out.println(i + " " + line);
        i++;
    }
    
    scanner.close();

    }
}
