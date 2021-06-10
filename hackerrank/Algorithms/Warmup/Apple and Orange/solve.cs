/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

using System;
using System.ComponentModel;
using System.Linq;

class Solution
{

    // Complete the countApplesAndOranges function below.
    static void countApplesAndOranges(int s, int t, int a, int b, int[] apples, int[] oranges)
    {
        int sumApple = 0;
        int sumOrange = 0;
        for (int i = 0; i < apples.Length; i++)
        {
            if (((apples[i] + a) >= s) && ((apples[i] + a) <= t))
            {
                sumApple++;
            }
        }
        Console.WriteLine(sumApple);
        for (int i = 0; i < oranges.Length; i++)
        {
            if (((oranges[i] + b) >= s) && ((oranges[i] + b) <= t))
            {
                sumOrange++;
            }
        }
        Console.WriteLine(sumOrange);
    }

    static void Main(string[] args)
    {
        string[] st = Console.ReadLine().Split(' ');
        int s = Convert.ToInt32(st[0]);
        int t = Convert.ToInt32(st[1]);
        string[] ab = Console.ReadLine().Split(' ');
        int a = Convert.ToInt32(ab[0]);
        int b = Convert.ToInt32(ab[1]);
        string[] mn = Console.ReadLine().Split(' ');
        int m = Convert.ToInt32(mn[0]);
        int n = Convert.ToInt32(mn[1]);
        int[] apples = Array.ConvertAll(Console.ReadLine().Split(' '), applesTemp => Convert.ToInt32(applesTemp));
        int[] oranges = Array.ConvertAll(Console.ReadLine().Split(' '), orangesTemp => Convert.ToInt32(orangesTemp));
        countApplesAndOranges(s, t, a, b, apples, oranges);
    }
}

