using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
  internal class _3DPoint
  {
    public int X;
    public int Y;
    public int Z;

    public _3DPoint() : this(10, 10, 10) { 

    }
    public _3DPoint(int x, int y, int z) : this(x, y)
    {
      Z = z;
    }
    public _3DPoint(int x, int y)
    {
      X = x;
      Y = y;
    }
    public void ChangeCoordinates(int newX, int newY, int newZ)
    {
      X = newX;
      Y = newY;
      Z = newZ;
    }

  }
}
