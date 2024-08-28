using System.Collections.Specialized;

namespace Day1
{
  internal class Program
  {
    static void CalculateOperation( char ope,  float fir,  float sec, ref bool validOperator, out float res)
    {
      switch (ope)
      {
        case '+':
          res = fir + sec;
          break;
        case '-':
          res = fir - sec;
          break;
        case '*':
          res = fir * sec;
          break;
        case '/':
          res = fir / sec;
          break;
        default:
          res = 0;
          validOperator = false;
          break;
      }
    }

    static bool IsCompleteNumber(int num)
    {
      int sumOfFactors = 0;
      for (int i = 1; i <= num / 2   ; i++)
      {
        if (num % i == 0)
        {
          sumOfFactors += i;
        }
      }
      return sumOfFactors == num;
    }
    static void Main(string[] args)
    {
      #region Simple Calculator

      // 1.Write a program that represents a simple calculator that has the following Operations:
      //-Add, Subtract, Multiply, Divide
      //User should enter the two operands and the type of operation he wants.


      /*
      Console.WriteLine("Simple Calculator\n");

      Console.Write("Enter the first number: ");
      float first = Single.Parse(Console.ReadLine());
      Console.Write("Enter the second number: ");
      float second = Single.Parse(Console.ReadLine());
      Console.Write("Enter the operator: ");
      char ope = Char.Parse(Console.ReadLine());

      bool validOperator = true;

      CalculateOperation( ope,  first,  second, ref validOperator, out float result);


      if (validOperator) Console.WriteLine($"The Result is: {result}");
      else Console.WriteLine("Please Enter a Valid Operator");
      */

      #endregion


      #region Complete Numbers
      for (int i = 1; i < 1000; i++)
      {
        if (IsCompleteNumber(i))
        {
          Console.WriteLine($"{i} is a Complete Number");
        }
      } 
      #endregion







    }
  }
}
