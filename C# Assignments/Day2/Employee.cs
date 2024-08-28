using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
  [Flags]
  enum Color
  {
    Red = 1,
    Green = 2,
    Blue = 4,
    Yellow = 8,
  }
  [Flags]
  enum Role
  {
    None = 0,
    Admin = 1,
    Accountant = 2,
    Stock = 4,
    Reception = 8
  }
  struct Employee
  {
    private string Name;
    private double Salary;
    private Role Role;


    public void Display()
    {
      Console.WriteLine($"Name: {Name}\t Salary: {Salary}\t Role: {Role}");
    }
    public void AssignRole(Role role)
    {
      Role |= role;
    }
    public bool HasRole(Role role)
    {
      return (this.Role & role) == role;
    }
  }
}
