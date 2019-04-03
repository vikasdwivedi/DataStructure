using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Solution2
{

	static void printMatrixSpirally(int[,] input, int row, int col) {

		//row = ending row index
		//column = ending column index
		int l = 0; //starting row index
		int m = 0; //starting column index
		int i;

		while (l < row && m < col)
		{
			for (i = m; i < col; i++)
			{
				Console.Write(input[l, i] + " ");
			}
			l++;
			for (i = l; i < row; i++)
			{
				Console.Write(input[i, col - 1] + " ");
			}
			col--;
			if (l < row)
			{
				for (i = col - 1; i >= m; i--)
				{
					Console.Write(input[row - 1, i] + " ");
				}
				row--;
			}
			if (m < col)
			{
				for (i = row - 1; i >= l; i--)
				{
					Console.Write(input[i, m] + " ");
				}
				m++;
			}
		}

	}
	
	static void Main(string[] args)
	{
		int[,] array = new int[,] { { 1, 2, 3, 4, 5 },
									{ 16, 17, 18, 19, 6},
									{ 15, 24, 25, 20, 7 },
									{ 14, 23, 22, 21, 8 },
									{ 13, 12, 11, 10, 9 }};
		printMatrixSpirally(array, 5, 5);
		Console.ReadKey();
	}
	
}
