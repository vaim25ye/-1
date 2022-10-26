#pragma once
#include <iostream>
#include <Windows.h>

struct triangle
{
	double a, b;
	int corner;

	triangle()
	{
		a = 0; b = 0; corner = 0;
	};



	void ChangingTheAngle(int perc, int& corner, int choice)
	{
		switch (choice)
		{
		case 1: corner += (perc/100) * corner; break;
		case 2: corner -= (perc/100) * corner; break;
		default: std::cout << "Введен неизвестный символ\n";
		}
	};

	void TypeOfTriangle(int a, int b, int corner)
	{
		double c = sqrt(a * a + b * b - 2 * a * b * cos(corner));
		if (a == b && b == c)
			std::cout << "Треугольник равносторонний\n";
		else
		{
			if (a == b || a == c || b == c)
				std::cout << "Треугольник равнобедренный\n";
			else
				std::cout << "Треугольник разносторонний\n";
		}
	};

	double Distance(int a, int b, int corner)
	{
		double c = sqrt(a * a + b * b - 2 * a * b * cos(corner));
		double p = 0.5 * (a + b + c);
		double r = sqrt(((p - a) * (p - b) * (p - c)) / p);
		double R = c / (2 * sin(corner));
		return R - r;
	};

};