#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	int n;
  	cin>> n;
  	int marks[n];
  	for (int i = 0; i < n; ++i)
  	{
  		cin >> marks[i];
  	}
  	int temp;
  	for (int i = 0; i < n; ++i)
  	{
  		if(marks[i]>37)
  		{
  			temp=marks[i];
  			while(temp%5!=0)
  			{
  				temp++;
        	}
        	if(temp-marks[i]<3)
        		marks[i]=temp;
  		}
  	}
  	for (int i = 0; i < n; ++i)
  	{
  		cout << marks[i] << "\n";
  	}
  	return 0;
}
