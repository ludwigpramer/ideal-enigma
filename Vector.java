
public class Vector
{
     private int[] coords;
     private int dimension;
     
     public Vector(int dimension, int...coords)
     {
          if(coords.length == dimension)
          {
          this.dimension = dimension;
          this.coords = coords;
          }
          else
          {
               throw new IllegalArgumentException("Illegal number of coordinates given");
          }
     }
     public int get2DX()
     {
          return this.coords[0];
     }
     public int get2DY()
     {
          return this.coords[1];
     }
     public int[] getCoordinates()
     {
          return this.coords;
     }
     public int multiply(Vector v)
     {
          int result = 0;

          if(this.dimension == 2 && v.dimension == 2)
          {
               //handle the more common 2d Vecs
          }
          else if( this.dimension == v.dimension)
          {
               for(int i = 0; i < this.dimension; i++)
               {
                    result += (this.coords[i] * v.coords[i]);
               }
          }
          return result;
     }
     
  
}