// https://www.hackerrank.com/challenges/java-loops-i/problem?isFullScreen=true

package loops;

import java.io.*;

public class Solution {
    
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        
        int N = Integer.parseInt(bufferedReader.readLine().trim());

        for (int i = 1; i < 11; i++) {
            System.out.println(N + " x " + i + " = " + N * i);
        }   

        bufferedReader.close();
    }
}


