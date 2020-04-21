/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,a, b;
        Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		for(int i=0;i<t;i++)
        {
            a=sc.nextInt();
            b=sc.nextInt();
            
            if(a==1 && b==1)
           { 
               System.out.println("34");
               System.out.print("2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 3\n6 4\n5 3\n4 4\n3 3\n2 4\n1 3\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n") ;
           }
           
            else if(a==b)
            {
               System.out.println("35");
               System.out.print("1 1\n2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 3\n6 4\n5 3\n4 4\n3 3\n2 4\n1 3\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n") ;
           }
                
            else if(a>b)
            {
            System.out.println("36");
            while(a!=b)
            {
                a-=1 ; b+=1 ;
            }
            System.out.println(a+" "+b) ;
            System.out.print("1 1\n2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 3\n6 4\n5 3\n4 4\n3 3\n2 4\n1 3\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n") ;

            }
            
            else if(a<b)
            {
            System.out.println("36");
            while(a!=b)
            {
                a+=1 ; b-=1 ;
            }
            System.out.println(a+" "+b) ;
            System.out.print("1 1\n2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 3\n6 4\n5 3\n4 4\n3 3\n2 4\n1 3\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n") ;

            }
	    }
	}
}