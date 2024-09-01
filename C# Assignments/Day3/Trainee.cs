using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Day3
{
  internal class Trainee : Person
  {
    public int NID;
    public int IntakeNumber;

    public Trainee() : this("Unknown", 20, 10, 30)
    {

    }
    public Trainee(string name, int age, int NID, int intakeNumber) : base(name, age)
    {
      this.NID = NID;
      IntakeNumber = intakeNumber;
    }
    public override void Work()
    {
      Console.WriteLine("Trainee is Running Right Now");
    }
    public override string ToString()
    {
      return $"Name: {Name}, Age: {Age}, NID: {NID}, IntakeNumber: {IntakeNumber}";
    }
  }
}
