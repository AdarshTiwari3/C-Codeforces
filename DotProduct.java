/*
Java Lab -> Assignment:02
Roll No:2020PGCACA03
Q:04->Vectors dot products
*/
public class DotProduct{

    public static void main(String args[])
    {
      int n=4;
      int v1[]={1,4,6,5};
      int v2[]={2,3,4,5};
      int prod=0;
      for(int i=0;i<n;i++)
      {
          prod+=v1[i]*v2[i];
      }
      System.out.printf("Dot product of the two vector=%d",prod);
      System.out.println();
    }
}