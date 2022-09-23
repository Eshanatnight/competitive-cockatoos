#include "bits/stdc++.h"

using namespace std;

/*
*******
**   **
* * * *
*  *  *
* * * *
**   **
*******
*/
void squareCross()
{
	int n = 7;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == 1 || i == n || j == 1 || j == n || i == j || j == n - i + 1)
			{
				printf("*");
			} else printf(" ");
		}
		printf("\n");
	}
}

void rightTriangle()
{
	int n = 7;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void rightTriangleHollow()
{
	int n = 7;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(j == 1 || i == j || i == n) printf("*");

			else printf(" ");
		}
		printf("\n");
	}
}

void invertTriangle()
{
	int n = 7, m = 1;

	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		for(int k = 1; k <= m; k++)
		{
			printf("*");
		}
		printf("\n");
		m++;
	}
}

void HollowInvertTriangle()
{
	int n = 7, m = 1;

	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		for(int k = 1; k <= m; k++)
		{
			if(k == 1 || k == m || m == n) printf("*");
			else printf(" ");
		}
		printf("\n");
		m++;
	}
}

void upsidedDownTriangle()
{
	int n = 7, m = 1;
	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void hollowUpsideDownTriangle()
{
	int n = 7, m = 1;

	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= i; j++)
		{
			if(j == 1 || j == i || i == n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

void invertedUpsideDownTriangle()
{
	int n = 7, m;
	m	  = n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for(int k = 1; k <= m; k++)
		{
			printf("*");
		}
		m--;

		printf("\n");
	}
}

int main()
{
	squareCross();
	rightTriangle();
	rightTriangleHollow();
	invertTriangle();
	HollowInvertTriangle();
	upsidedDownTriangle();
	hollowUpsideDownTriangle();
	invertedUpsideDownTriangle();
}