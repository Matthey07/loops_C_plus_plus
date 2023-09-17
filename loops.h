#pragma once
#include<iostream>
void f7(int a, int b);
double f10(int n) {
	double sum = 0;
	for (double  i = 0; i <= n; i++)
	{
		try
		{
			if (i == 0) {
				throw "na nol delit nelzy";
			}
			sum += 1 / i;
		}
		catch (const char* message)
		{
			std::cerr << "oshibka " << message << std::endl;
		}
	}
	return sum;
}
double f11(int n) {
	double sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += pow(n + i, 2);
	}
	return sum;
}
double f13(int n) {
	double sum = 0;
	int z = 1;
	for (double i = 1.1; i <= n; i += 0.1, z++) {
		z % 2 == 0 ? sum -= i : sum += i;
	}
	return sum; 
}
double f14(int n) {
	int sum = 0;
	for (int  i = 1; i <= n; i++)
	{
		sum += 2*i-1 ;
	}
	return sum;
}