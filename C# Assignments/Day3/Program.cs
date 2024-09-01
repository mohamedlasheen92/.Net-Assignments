using System;
using System.Collections.Specialized;


namespace Day3
{
  internal class Program
  {
    static void Test(Object obj)
    {
      //Employee other = (Employee)obj;
      Person other = obj as Person;

      if (other == null) return;

      other.Work();
    }
    static void Main(string[] args)
    {
      _3DPoint p1 = new _3DPoint { X = 15, Y = 20, Z = 35 };
      _3DPoint p2 = new _3DPoint { X = 64, Y = 25, Z = 34 };
      _3DPoint p3 = new _3DPoint();

      if (p1.Equals(p2)) Console.WriteLine("Equals");
      else Console.WriteLine("Not Equals");

      Console.WriteLine(p1 != p2);

      _3DPoint[] points = new _3DPoint[] { p1, p2, p3 };
      _3DPoint.Display(points);


      Person p = new Trainee("Ahmed", 29, 56456, 98500);
      //Console.WriteLine(p.Name);
      //Console.WriteLine(p.Age);
      //p.Work();


      Person[] ps = new Person[]
{
        new Person("Ahmed", 35),
        new Employee("Ali", 40, 1111101, 9800),
        new Trainee("Ibrahim", 22, 100022, 35)
};
      for (int i = 0; i < ps.Length; i++)
      {
        //ps[i].Work();
      }

      Employee e1 = new Employee("Muhammed", 25, 5455, 6500);
      Trainee t1 = new Trainee("Ibrahim", 22, 100022, 35);
      Test(e1);
      Test(t1);



    }
  }
}
