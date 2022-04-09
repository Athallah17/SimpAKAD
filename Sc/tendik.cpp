#include <iostream>
#include "include/tendik.hpp"


tendik::tendik(std::string id, std::string nama, int tgl, int bln, int thb, std::string npp, std::string unit)
		: person(id, nama, tgl, bln, thn), npp(npp), unit(unit)
{
}

void tendik::setUnit(std::string unit)
{
	this->unit = unit;
}

std::string tendik::getUnit()
{
	return this->unit;
}


std::string tendik::getNPP()
{
	return this->npp;
}