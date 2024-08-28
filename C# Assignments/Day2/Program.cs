namespace Day2
{
  internal class Program
  {
    static void ChangeStr(string str)
    {
      str += " Extra Text";
    }
    static void ChangeStr(ref string str)
    {
      str += " Extra Text";
    }
    static void Main(string[] args)
    {
      //Employee e1 = new Employee();
      //e1.Display();
      //e1.AssignRole(Role.Stock);
      //e1.AssignRole(Role.Accountant);
      //e1.Display();
      //Console.WriteLine(e1.HasRole(Role.Stock));
      //Console.WriteLine(e1.HasRole(Role.Reception));
      //Console.WriteLine(e1.HasRole(Role.Accountant));

      _3DPoint p1 = new _3DPoint(7, 9) { Z = 15 };
      _3DPoint p2 = new _3DPoint { X = 8, Y = 3, Z = 5 };

      string str = "Muhammed";
      ChangeStr(ref str);
      Console.WriteLine(str);


    }
  }
}
