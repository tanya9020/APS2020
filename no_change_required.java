import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
//long arr1[]=new long[10000];

class Codechef
{
  
  static long gcd(long a, long b)
  {
      if (a <= 0)
        return b;
      if (b <= 0)
        return a;
   
      if (a == b)
          return a;
   
      if (a > b)
          return gcd(a-b, b);
      return gcd(a, b-a);
  }
 
  static long compute(long a,long b)
  {
      if(a%b==0)
          return a/b;
      else
          return (a/b) + 1;
  }
 
public static void main (String[] args) throws java.lang.Exception
{

      long T,N,P;
      Scanner sc=new Scanner(System.in);
      T=sc.nextLong();
      long arr[]=new long[100005];
      long arr1[]=new long[100005];

      for(int m=0;m<T;m++)
      {
          N=sc.nextLong();
          P=sc.nextLong();
         
          for(int q = 0; q<=N; q++)
          {
              arr1[q]=0;
          }
         
          for(int w=0;w<N;w++)
              {arr[w]=sc.nextLong();}
             
          int i=0;
         
          while(i<N && (P%arr[i])==0)
             { i++; }
             
          if(i<N)
          {
              //v.add(i,(P/arr[i])+1);
              arr1[i]=(P/arr[i])+1;
              System.out.print("YES ");
             
              for(i=0;i<N;i++)
                 // System.out.print(v.get(i)+" ");
                 System.out.print(arr1[i]+" ");
         
              System.out.print("\n");
              continue;
          }
         
          int flag=0;
          for( i=0;i<N;i++)
          {
              for(int j=i+1;j<N;j++)
              {
                  if(arr[i]!=1 && arr[j]!=1 && ((gcd(arr[i],arr[j]))!=Math.min(arr[i],arr[j])))
                  {
                      flag=1;
                      if(arr[i]>arr[j])
                      {
                           //v.add(i,(P/arr[i])-1);  
                           arr1[i]=(P/arr[i])-1;
                           if(arr1[i]<0)
                            arr[i]=0;
                           //long y=compute((P-(arr[i]*(v.indexOf(i)))),arr[j]);
                           long y=compute((P-(arr[i]*(arr1[i]))),arr[j]);
                           //v.add(j,y);
                           arr1[j]=y;
                      }
                     
                      else
                      {
                          arr1[j]=(P/arr[j])-1;
                          long y=compute((P-(arr[j]*(arr1[j]))),arr[i]);
                          arr1[i]=y;
                      }
                      break;
                  }
               
              }
              if(flag==1)
                  break;
          }
          if(flag==1)
          {
             System.out.print("YES ");
           
             for(i=0;i<N;i++)
                 { 
                 System.out.print(arr1[i]+" ");}
   
             System.out.print("\n");
          }
          else
             { System.out.print("NO");
              System.out.print("\n");
             }
      }
     
      }
}