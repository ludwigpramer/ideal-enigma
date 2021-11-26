import java.util.ArrayList;

public class Erastostenes
{
     private static final int START = 2;
     private static final int END = 120;
     private static ArrayList<Integer> result = new ArrayList<>();
     public static void main(String[] args)
     {
          result.add(START);
          loop:
          for( int i = START-1; i <= END; i += 2 )
          {
               for ( int j : result )
               {
                    if ( i % 2 == 0 )
                    {
                         
                    }
               }
               result.add(i);
          }
     }
}