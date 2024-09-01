using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day3
{
  internal class Employee : Person
  {
    public int NID;
    public int Salary;

    public Employee(string name, int age, int NID, int salary) : base(name, age)
    {
      this.NID = NID;
      Salary = salary;
    }
    public override void Work()
    {
      Console.WriteLine("Employee is Working Right Now");
    }
    public override string ToString()
    {
      return $"Name: {Name}, Age: {Age}, NID: {NID}, Salary: {Salary}";
    }

  }
}
