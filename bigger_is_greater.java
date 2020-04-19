import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.util.Arrays.*;

public class Solution {

    static String biggerIsGreater(String w) {
        char charArray[]=w.toCharArray();
        int n=charArray.length;
        int i=0;

        for(i=n-1;i>0;i--)
        {
            if(charArray[i]>charArray[i-1]){
                break;}
        }

        if(i==0){
            return "no answer";
         } else {
        
            int first=charArray[i-1];
            int nextSmallIndex=i;
            for(int j=i+1;j<n;j++){
                if(charArray[j]>first && charArray[j]<charArray[nextSmallIndex]) {
                        nextSmallIndex=j;
                }
            }

            swap(charArray,i-1,nextSmallIndex);
            Arrays.sort(charArray,i,n);
        }
        return new String(charArray);
    }

    static void swap(char charArray[], int i, int j) {
        char temp=charArray[i];
        charArray[i]=charArray[j];
        charArray[j]=temp;
        
        }
    
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int T = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int TItr = 0; TItr < T; TItr++) {
            String w = scanner.nextLine();

            String result = biggerIsGreater(w);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

