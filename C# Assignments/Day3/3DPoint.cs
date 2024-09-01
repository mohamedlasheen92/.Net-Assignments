using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Day3
{
  internal class _3DPoint
  {

    public int X;
    public int Y;
    public int Z;

    public _3DPoint() : this(10, 10, 10)
    {

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
    public override string ToString()
    {
      return $"X: {X} \t Y: {Y} \t Z: {Z}";
    }
    public override bool Equals(object obj)
    {
      //_3DPoint p = (_3DPoint)obj;

      //_3DPoint p = obj as _3DPoint;
      //if (p == null) return false;

      if (obj is _3DPoint p)
      {
        //_3DPoint p = (_3DPoint)obj;
        return X == p.X && Y == p.Y && Z == p.Z;
      }
      return false;
    }
    public static bool operator ==(_3DPoint p1, _3DPoint p2)
    {
      return p1.X == p2.X && p1.Y == p2.Y && p1.Z == p2.Z;
    }
    public static bool operator !=(_3DPoint p1, _3DPoint p2)
    {
      return p1.X != p2.X && p1.Y != p2.Y && p1.Z != p2.Z;
    }
    public static void Display(_3DPoint[] arr)
    {
      for (int i = 0; i < arr.Length; i++)
      {
        Console.WriteLine(arr[i].ToString());
      }
    }
  }
}
