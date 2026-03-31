#include <iostream>
using namespace std;

// 1. Print numbers from 1 to N using a for loop.

void printNumbers(int n)
{
      for (int i = 0; i <= n; i++)
      {
            cout << i << endl;
      }
}
// 2. Print numbers from N to 1 using a while loop.

void printNumber2(int n)
{
      int i = 0;
      while (i < n)
      {
            i++;
            cout << i << endl;
      }
}
// 3. Print all even numbers between 1 and 50.

void printEven(int n)
{
      for (int i = 0; i <= n; i++)
      {
            if (i % 2 == 0)
            {
                  cout << i << "  even" << endl;
            }
      }
}

// 4. Print all odd numbers between 1 and N.

void printOdd(int n)
{
      for (int i = 0; i < n; i++)
      {
            if (i % 2 == 1)
            {
                  cout << i << "  odd " << endl;
            }
      }
}
//  Print the multiplication table of a number(table of n).

void multiplicationOfN(int n)
{
      for (int i = 1; i <= 10; i++)
      {
            cout << n << " * " << i << " = " << n * i << endl;
      }
}

//  Find the sum of first N natural numbers.
void Sum(int n)
{
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += i;
      }
      cout << "The sum of number till n is:- " << sum << endl;
}

//  Print numbers divisible by 5 between 1 and 100.
void divisibleBy5(int n)
{
      for (int i = 1; i < n; i++)
      {
            if (i % 5 == 0)
            {
                  cout << "Number is divisible by 5 " << "number is:- " << i << endl;
            }
      }
}

// Check whether a number is positive, negative, or zero.

void checkNumber(int n)
{
      if (n < 0)
      {
            cout << "Given Number is Negative " << n << endl;
      }
      else if (n == 0)
      {
            cout << "Given Number is equal to Zero  " << endl;
      }
      else
      {
            cout << "Number is Positive" << endl;
      }
}

// Find the largest of three numbers.

void largest(int a, int b, int c)
{
      int largestNumber = a;

      if (largestNumber < b)
      {
            largestNumber = b;
      }
      else if (c > largestNumber)
      {
            c = largestNumber;
      }
      cout << largestNumber << endl;
}

//  Print all factors of a number.

void Factor(int n)
{

      for (int i = 1; i <= n; i++)
      {
            if (n % i == 0)
            {
                  cout << i << " The give number is a factor of " << n << endl;
            }
      }
}

// Check whether a number is prime.

void isPrime(int n)
{
      if (n <= 1)
      {
            cout << "Non - Prime!! " << endl;
      }

      for (int i = 2; i < n; i++)
      {
            if (n % i == 0)
            {
                  cout << "Non-Prime! " << endl;
            }
      }
      cout << " Yeah its Prime!! " << endl;
}

// Print all prime numbers between 1 and N.

void printPrime(int n)
{
      for (int num = 2; num <= n; num++)
      {
            bool isPrime = true;

            for (int i = 2; i < num; i++)
            {
                  if (num % i == 0)
                  {
                        isPrime = false;
                        break;
                  }
            }

            if (isPrime)
            {
                  cout << num << " ";
            }
      }
}

//  Reverse a number.

void reverse(int n)
{
      int reverse = 0;

      while (n != 0)
      {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
      }
      cout << reverse << endl;
}

// Check whether a number is palindrome.

void palindrome(int n)
{
      int original = n;

      int reverse = 0;

      while (n != 0)
      {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
      }
      if (original == reverse)
      {
            cout << "Number is Palindrome! " << endl;
      }
      else
      {
            cout << "Non - Palindrome! " << endl;
      }
}

// Print Fibonacci series up to N terms.
void fibonachi(int n)
{
      int first = 0, second = 1;

      if (n >= 1)
      {
            cout << first << " ";
      }
      if (n >= 2)
      {
            cout << second << " ";
      }

      for (int i = 3; i <= n; i++)
      {
            int next = first + second;
            cout << next << " ";
            first = second;
            second = next;
      }
}

// Count numbers between 1 and N divisible by both 3 and 5.

void divisible(int n)
{
      for (int i = 3; i < n; i++)
      {
            if (i % 3 == 0 && i % 5 == 0)
            {
                  cout << i << endl;
            }
      }
}

// Implement FizzBuzz from 1 to 100.
void FizzBuzz(int n)
{
      for (int i = 1; i < n; i++)
      {
            if (i % 3 == 0)
            {
                  cout << i << " " << "Fizz" << endl;
            }
            if (i % 5 == 0)
            {

                  cout << i << " " << "Buzz" << endl;
            }
            if (i % 3 == 0 && i % 5 == 0)
            {
                  cout << i << " " << "FizzBuzz" << endl;
            }
      }
}
// Find the factorial of give number.
int factorial(int n)
{
      int fact = 1;
      for (int i = 1; i <= n; i++)
      {
            fact = fact * i;
      }
      return fact;
}
// Check whether a number is a Strong number.

void strongNum(int n)
{
      int original = n;
      int sum = 0;

      while (n > 0)
      {
            int digit = n % 10;
            sum = sum + factorial(digit);
            n = n / 10;
      }
      if (sum == original)
      {
            cout << "Strong Number";
      }
      else
      {
            cout << "Not Strong Number";
      }
}
// Check whether a number is Armstrong.

// Check whether a number is a Perfect number.

//  Find the second largest digit in a number.

// Rotate a number K times to the right.

// Check whether two numbers are digit anagrams.

//  Convert decimal to binary manually.

// Check if three sides form a valid triangle.

// Find quadrant of a point in 2D plane.

// Validate password using conditions.

//  Simulate ATM withdrawal logic.

// Find electricity bill using slab logic

// Find number of days in a month with leap year check.

// Count trailing zeros in factorial.

// Find smallest divisor of a number > 1.

// Check if a number is sum of two primes.

//
int main()
{
      int n;
      // int a, b, c;
      cout << "Enter the number:- " << endl;
      cin >> n;
      // cin >> a >> b >> c;
      // cout << n << endl;

      // printNumbers(n);
      // printNumber2(n);
      // printEven(n);
      // printOdd(n);
      // multiplicationOfN(n);
      // Sum(n);
      // divisibleBy5(n);
      // checkNumber(n);
      // largest(a, b, c);
      // Factor(n);
      // isPrime(n);
      // printPrime(n);
      // reverse(n);
      // palindrome(n);

      // fibonachi(n);
      // divisible(n);
      // FizzBuzz(n);
      // factorial(n);
      strongNum(n);
      return 0;
}