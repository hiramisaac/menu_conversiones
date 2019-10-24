#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <sstream>
#include <cmath>
#include <vector>
#include <array>
#include <windows.h>

using namespace std;

#define DEFAULTF "\x1b[49m"
#define WHITEF "\x1b[47m"
#define CYANF "\x1b[46m"
#define BLUEF "\x1b[44m"

using namespace std;

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
unsigned long conversor(unsigned long n1, int base1, int base2)
{
	unsigned long alg, mult = 1, n2 = 0;
	while (n1 > 0)
	{
		alg = n1 % base1;
		n1 /= base1;
		n2 += (alg * mult);
		mult *= base2;
	}
	return n2;
}

int  convertirBinarioaDecimal(long  long n)
{
	int  numeroDecimal = 0, i = 0, recordatorio;
	while (n != 0)

	{
		recordatorio = n % 10; n /= 10;
		numeroDecimal += recordatorio * pow(2, i);
		++i;
	}
	return  numeroDecimal;
}

void menu_binario_a_decimal()
{
	bool repite = true;
	int opcion;

	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                  MENU BINARIO-DECIMAL                                                  " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                            " BLUEF "  " CYANF "              1.- convertir de binario a decimal            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                            " BLUEF "  " CYANF "              2.- regresar al menu principal                " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                            " BLUEF "  " CYANF "             Opcion:                                        " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 14); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 19); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;

		// Alternativas
		switch (opcion)
		{
		case 1:
			system("cls");
			system("color 3F");
			{
				unsigned long n;
				gotoxy(30, 1); cout << "\t\t\t Introduce  un  numero:  \n";
				gotoxy(30, 2); cin >> n;

				gotoxy(30, 3); cout << "\t\t\t En  binario  \n";
				gotoxy(30, 4); cout << n;
				gotoxy(30, 5); cout << "\t\t\t En decimal\n";
				gotoxy(30, 6); cout << convertirBinarioaDecimal(n);
			}
			getwchar();
			getwchar();
			break;
		case 2:
			repite = false;
			break;
		}
	} while (repite);
}


void menu_decimal_a_binario()
{
	bool repite = true;
	int opcion;
	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                  MENU DECIMAL-BINARIO                                                  " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                            " BLUEF "  " CYANF "              1.- convertir de decimal a binario            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                            " BLUEF "  " CYANF "              2.- regresar al menu principal                " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                            " BLUEF "  " CYANF "             Opcion:                                        " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 14); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 19); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;

		int numero;
		string binario;

		// Alternativas
		switch (opcion)
		{

		case 1:
			system("cls");
			system("color 3F");

			gotoxy(30, 1); cout << "ingrese un numero entero positivo: \n";

			gotoxy(30, 2); cin >> numero;
			if (numero > 0)
			{
				while (numero > 0)
				{
					if (numero % 2 == 0)
					{
						binario = "0" + binario;
					}
					else {
						binario = "1" + binario;
					}
					numero = (int)numero / 2;
				}
			}
			else if (numero == 0) {
				binario = "0";
			}
			else
			{
				binario = "No se puede realizar la conversion. Ingrese solo numeros positivos\n";
			}
			gotoxy(30, 3); cout << "El resultado de la conversion es:";
			gotoxy(30, 4); cout << binario;
			getchar();
			getwchar();
			break;

		case 2:
			repite = false;
			break;

		}
	} while (repite);
}

void menu_hexadecimal_a_binario()
{
	bool repite = true;
	int opcion;

	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                 MENU HEXADECIMAL-BINARIO                                               " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                            " BLUEF "  " CYANF "              1.- convertir de binario a hexadecimal        " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                            " BLUEF "  " CYANF "              2.- regresar al menu principal                " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                            " BLUEF "  " CYANF "             Opcion:                                        " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 14); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 19); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;

		unsigned long decnum = 0;
		char hex[9];
		char* hexstr;
		int length = 0;
		const int base = 16;
		int i;

		int par; string resus, repu;
		vector <string> bina;
		vector <string> resul;

		// Alternativas
		switch (opcion)
		{
		case 1:
			system("cls");
			system("color 3F");

			cout << "Ingresa la cantidad de pares del numero binario: \n";
			cin >> par;
			for (int i = 0; i < par; i++) {
				cout << "Ingresa el valor de el par numero \n" << i + 1 << ": ";
				cin >> repu;
				bina.push_back(repu);
				if (bina[i] == "0000") {
					resul.push_back("0");
				}
				if (bina[i] == "0001") {
					resul.push_back("1");
				}
				if (bina[i] == "0010") {
					resul.push_back("2");
				}
				if (bina[i] == "0011") {
					resul.push_back("3");
				}
				if (bina[i] == "0100") {
					resul.push_back("4");
				}
				if (bina[i] == "0101") {
					resul.push_back("5");
				}
				if (bina[i] == "0110") {
					resul.push_back("6");
				}
				if (bina[i] == "0111") {
					resul.push_back("7");
				}
				if (bina[i] == "1000") {
					resul.push_back("8");
				}
				if (bina[i] == "1001") {
					resul.push_back("9");
				}
				if (bina[i] == "1010") {
					resul.push_back("A");
				}
				if (bina[i] == "1011") {
					resul.push_back("B");
				}
				if (bina[i] == "1100") {
					resul.push_back("C");
				}
				if (bina[i] == "1101") {
					resul.push_back("D");
				}
				if (bina[i] == "1110") {
					resul.push_back("E");
				}
				if (bina[i] == "1111") {
					resul.push_back("F");
				}
				resus = resus + resul[i];
			}
			gotoxy(60, 3); cout << "El resultado es \n";
			gotoxy(60, 4); cout << resus;
			getwchar();
			getwchar();
			break;

		case 2:
			repite = false;
			break;
		}

	} while (repite);
}

long long convertOctalToBinary(int octalNumber)
{
	int decimalNumber = 0, i = 0;
	long long binaryNumber = 0;
	while (octalNumber != 0)
	{
		decimalNumber += (octalNumber % 10) * pow(8, i);
		++i;
		octalNumber /= 10;
	}
	i = 1;
	while (decimalNumber != 0)
	{
		binaryNumber += (decimalNumber % 2) * i;
		decimalNumber /= 2;
		i *= 10;
	}
	return binaryNumber;
}

void menu_octal_a_binario()
{
	bool repite = true;
	int opcion;

	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                   MENU OCTAL-BINARIO                                                   " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                            " BLUEF "  " CYANF "              1.- convertir de octal a binario              " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                            " BLUEF "  " CYANF "              2.- regresar al menu principal                " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                            " BLUEF "  " CYANF "             Opcion:                                        " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 14); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 19); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;

		// Alternativas
		switch (opcion)
		{
		case 1:
			system("cls");
			system("color 3F");

			int octalNumber;
			gotoxy(30, 1); cout << "Ingresa un numero octal: ";
			gotoxy(30, 2); cin >> octalNumber;
			gotoxy(30, 3); cout << octalNumber << " En octal  \n";
			gotoxy(30, 4); cout << convertOctalToBinary(octalNumber) << " Binario \n";
			getwchar();
			getwchar();
			break;
		case 2:
			repite = false;
			break;
		}
	} while (repite);
}

string convertir_letra_a_binario(char letra)
{
	ostringstream buffer;
	int D1, D2, D3, D4, D5, D6, D7, D8, R1, R2, R3, R4, R5, R6, R7, R8;

	D1 = letra / 2; R1 = letra % 2;
	D2 = D1 / 2; R2 = D1 % 2;
	D3 = D2 / 2; R3 = D2 % 2;
	D4 = D3 / 2; R4 = D3 % 2;
	D5 = D4 / 2; R5 = D4 % 2;
	D6 = D5 / 2; R6 = D5 % 2;
	D7 = D6 / 2; R7 = D6 % 2;
	D8 = D7 / 2; R8 = D7 % 2;

	buffer << R8 << R7 << R6 << R5 << R4 << R3 << R2 << R1;

	return buffer.str();
}

string convertir_texto_a_binario(string texto)
{
	ostringstream buffer;

	for (int i = 0; i < texto.size(); i++)
	{
		buffer << convertir_letra_a_binario(texto.c_str()[i]);
	}

	return buffer.str();
}

void menu_texo_a_binario()
{
	bool repite = true;
	int opcion;

	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                   MENU TEXTO-BINARIO                                                   " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                            " BLUEF "  " CYANF "              1.- convertir de texto a binario              " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                            " BLUEF "  " CYANF "              2.- regresar al menu principal                " BLUEF "  " CYANF "                            " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                            " BLUEF "  " CYANF "             Opcion:                                        " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 14); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 19); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                            " BLUEF "  " CYANF "                                                            " BLUEF "  " CYANF "                             " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;

		string texto;

		// Alternativas
		switch (opcion)
		{
		case 1:
			system("cls");
			system("color 3F");

			gotoxy(39, 1); cout << "Ingrese el texto a convertir: \n";
			gotoxy(38, 2); cin >> texto;

			gotoxy(38, 3); cout << convertir_texto_a_binario(texto) << endl;

			getchar();
			getwchar();
			break;

		case 2:
			repite = false;
			break;
		}

	} while (repite);
}

void menu_creditos()
{
	bool repite = true;
	int opcion;

	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                      INTEGRANTES                                                       " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                     " BLUEF "  " CYANF "              .-Hiram Isaac Valencia Perez                                                       " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                     " BLUEF "  " CYANF "                      . interfaz y diseno de menu                                                " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                     " BLUEF "  " CYANF "              .-Porfirio Daniel Jaime Monrial                                                    " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                     " BLUEF "  " CYANF "                     . interfaz y diseno de menu                                                 " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                     " BLUEF "  " CYANF "              .-Fernando Israel Galvan Linares                                                   " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                     " BLUEF "  " CYANF "                     . codigo texto a binario                                                    " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                     " BLUEF "  " CYANF "              .-Brnadon Ali Lozano Mateos                                                        " DEFAULTF;
		gotoxy(0, 14); cout << CYANF "                     " BLUEF "  " CYANF "                     . codigo binario a decimal                                                  " DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                     " BLUEF "  " CYANF "              .-Cruz Lisseth Palacios Valdivieso                                                 " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                     " BLUEF "  " CYANF "                     . codigo decimal a binario                                                  " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                     " BLUEF "  " CYANF "              .-Andrea Lisbet Salas Gordillo                                                     " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                     " BLUEF "  " CYANF "                     . codigo octal a binario                                                    " DEFAULTF;
		gotoxy(0, 19); cout << CYANF "                     " BLUEF "  " CYANF "                     . codigo binario a exadecimal                                               " DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                     " BLUEF "  " CYANF "               1.- regresar al menu                                                              " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                     " BLUEF "  " CYANF "               Opcion:                                                                           " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                     " BLUEF "  " CYANF "                                                                                                 " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;

		// Alternativas
		switch (opcion)
		{
		case 1:
			repite = false;
			break;
		}

	} while (repite);

}

void menu_principal()
{
	bool repite = true;
	int opcion;

	do
	{
		system("cls");

		gotoxy(0, 0); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 1); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 2); cout << CYANF "                                                     MENU PRINCIPAL                                                     " DEFAULTF;
		gotoxy(0, 3); cout << CYANF "                                                                                                                        " DEFAULTF;
		gotoxy(0, 4); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 5); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 6); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 7); cout << CYANF "                     " BLUEF "    " CYANF "               1.-binario a decimal                                                            " DEFAULTF;
		gotoxy(0, 8); cout << CYANF "                     " BLUEF "    " CYANF "               2.-decimal a binario                                                            " DEFAULTF;
		gotoxy(0, 9); cout << CYANF "                     " BLUEF "    " CYANF "               3.-hexadecimal a binario                                                        " DEFAULTF;
		gotoxy(0, 10); cout << CYANF "                     " BLUEF "    " CYANF "               4.-octal a binario                                                              " DEFAULTF;
		gotoxy(0, 11); cout << CYANF "                     " BLUEF "    " CYANF "               5.-texto a binario                                                              " DEFAULTF;
		gotoxy(0, 12); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 13); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 14); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 15); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 16); cout << CYANF "                     " BLUEF "    " CYANF "               6.-creditos                                                                     " DEFAULTF;
		gotoxy(0, 17); cout << CYANF "                     " BLUEF "    " CYANF "               7.-salir del menu                                                               " DEFAULTF;
		gotoxy(0, 18); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 19); cout << WHITEF "========================================================================================================================" DEFAULTF;
		gotoxy(0, 20); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 21); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 22); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 23); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 24); cout << CYANF "                     " BLUEF "    " CYANF "               Opcion:                                                                         " DEFAULTF;
		gotoxy(0, 25); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 26); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 27); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 28); cout << CYANF "                     " BLUEF "    " CYANF "                                                                                               " DEFAULTF;
		gotoxy(0, 29); cout << WHITEF "========================================================================================================================" DEFAULTF;
		cin >> opcion;


		// Alternativas
		switch (opcion)
		{
		case 1:
			menu_binario_a_decimal();
			break;

		case 2:
			menu_decimal_a_binario();
			break;

		case 3:
			menu_hexadecimal_a_binario();
			break;

		case 4:
			menu_octal_a_binario();
			break;

		case 5:
			menu_texo_a_binario();
			break;

		case 6:
			menu_creditos();
			break;

		case 7:
			repite = false;
			break;

		}

	} while (repite);
}


int main()
{
	menu_principal();
	return 0;
}

