// exemplo.cpp

#include "color.hpp"

int main() {
	color::coutc("Teste", style::fRED);
	color::coutc("Teste", style::fGREENs, style::bWHITE);
	color::coutc("Teste", style::fBLUE, style::bBLACK, style::sUNDERLINE);
	return 0;
}