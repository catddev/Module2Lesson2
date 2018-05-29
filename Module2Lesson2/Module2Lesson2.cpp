#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>



void main() 
{
	setlocale(LC_ALL, "Rus");

	int v = 0;
	printf("введите номер задачи:\t");
	scanf("%d", &v);

	if (v == 22) {
		unsigned int a, b;
		float c;
		scanf("%d %d", &a, &b);
		c = sqrt(a*b);
		printf("%f\n", c);
	}

	if (v == 1) {
		float a, c, e, y;
		const float x = 3.5, b = 0.4;
		scanf("%f %f", &a, &e);
		y = pow(e, 2*x) + pow(9.7, e);
		c = pow(a, 2) + sqrt(b*x);
		a = log10(x);
		printf("%f\n %f\n %f\n", y, c, a);
	}
	else if (v == 2) {
		float y, a, b, e;
		const float x = 1.3;
		scanf("%f %f %f", &a, &b, &e);
		y = x*pow(a, 3) + pow(b, 2);
		a = log(fabs(x));
		b = pow(e, 2 * x) + a*x;
		printf("%f \n%f \n%f \n", y, a, b);
	}
	else if (v == 3) {
		float y, a, b, e;
		const float x = 2.1, p = 1;
		scanf("%f %f %f", &a, &b, &e);
		y = pow(a, 3) / pow(b, 2);
		a = pow(e, sqrt(fabs(x)));
		b = (sin(pow(p, 2) + pow(x, 3)));
		printf("%f \n%f \n%f \n", y, a, b);
	}
	else if (v == 4) {
		float y, a, b;
		const float x = 2.7, t = -6;
		scanf("%f %f", &a, &b);
		y = pow(fabs(a - b*x), 0.2);
		a = log10(x);
		b = sqrt(pow(x, 2) + pow(t, 2));
		printf("%f \n%f \n%f \n", y, a, b);
	}
	else if (v == 5) {
		float y, x, k;
		const float t = 4.1, p = 3;
		scanf("%f %f", &x, &k);
		y = pow(tan(pow(x, 2)), 3) + k*t;
		x = p*pow(t, 2) + sqrt(k);
		k = sqrt(p*t);
		printf("%f \n %f \n%f \n", y, x, k);
	}
	else if (v == 6) {
		/* 1.	Тело движется по закону S =t3 – 3t2 + 2. Вычислить скорость тела в момент времени t.
		Значение t ввести с клавиатуры (Функция скорости есть производная от функции расстояния по времени).*/

		float t, S, V;
		scanf("%f", &t);
		S = pow(t, 3) - 3 * pow(t, 2) + 2;
		V = S / t;
		printf("скорость =%f\n", V);
	}
	else if (v == 7) {
		/* 2.	Найти корни квадратного уравнения a·x2 + b·x + c = 0, 
		введя с экрана коэффициенты a, b, c (коэффициент a не равен 0), для которых дискриминант положителен. */

		float a, b, c, x1, x2, D;
		scanf("%f %f %f", &a, &b, &c);
		D = pow(b, 2) - 4 * a*c;
		if (D >= 0) {
			x1 = (-b + sqrt(D)) / 2*a;
			x2 = (-b - sqrt(D)) / 2 * a;
		}
		printf("%f %f/n", x1, x2);
	}
	else if (v==8) {
		/* 3.	Вычислить корень уравнения 2x/a +b-12=0 при различных значениях параметров a, b.
		Значения a, b ввести с экрана.*/

		float a, b, x;
		scanf("%f %f", &a, &b);
		x = (12 - b)*a / 2;
		printf("%f", x);
	}
	else if (v==9) {
		/*4.	Вычислить рентабельность работы предприятия за месяц по формуле рент = прибыль/себестоимость100%,
		если себестоимость продукции в текущем месяце уменьшилась по сравнению с прошлым на 5 %.
		Значение прибыли и себестоимости за прошлый месяц ввести с экрана */

		float R, P, S;
		scanf("%f %f", &P, &S);
		R = P / S * 100;
		printf("рентабельность предприятия=%f\n", R);
	}
	else if (v == 10) {
		/* 5.	Идет k-я секунда суток. Определить, сколько целых часов (Н) и целых минут (М) прошло с начала суток.
		Вывести на экран фразу: «Эточасовминут». Вместо многоточий поставить вычисленные значения Н и М*/

		int H, M, k;
		scanf("%d", &k);
		M = k / 60;
		H = M / 60;
		M = M - H * 60;
		printf("Прошло %d час(а/ов) %d минут(ы)\n", H, M);
	
	}
}