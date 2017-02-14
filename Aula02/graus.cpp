#include <iostream>
#include <string>		// Necessário para usar strings
using namespace std;

int test(int argc, char** argv) {
float celsius;
float fahrenheit;

celsius = 25;
fahrenheit = celsius*1.8 + 32;

cout<<celsius<<" graus Celsius equivale a "<<fahrenheit<<" graus Fahrenheit.";
}
