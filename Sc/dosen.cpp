#include <iostream>

#include "include/dosen.hpp"


dosen::dosen(std::string id, std::string nama, int tgl, int blm, int thn, std::string npp, std::string departemen, int pendidikan)
		: person(id, nama, tgl, bln, thn), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}

void dosen::setPendidikan(int pendidikan)
{
	this->pendidikan = pendidikan;
}

int dosen::getPendidikan()
{
	return this->pendidikan;
}
