using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day3
{
  internal class Person
  {
    public string Name;
    public int Age;

    public Person(string name, int age)
    {
      Name = name;
      Age = age;
    }
    public virtual void Work()
    {
      Console.WriteLine("Person is Breathing");
    }
    public override string ToString()
    {
      return $"Name: {Name}, Age: {Age}";
    }
  }
}
