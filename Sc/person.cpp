#include <iostream>
#include "include/person.hpp"


person::person(std::string id, std::string nama, int tgl, int bln, int thn)
		: id(id), nama(nama), tgl(tgl), bln(bln), thn(thn)
{
}

void person::setId(std::string id)
{
	this->id = id;
}

std::string person::getId() 
{
	return this->id;
}

void person::setNama(std::string nama)
{
	this->nama = nama;
}

std::string person::getNama()
{
	return this->nama;
}

void person::setTglLahir(int tgl, int bln, int thn)
{
	this->tgl = tanggal;
	this->bln= bulan;
	this->thn = tahun;
}

int person::getTglLahir()
{
	return this->tgl;
}

int person::getBulanLahir()
{
	return this->bln;
}

int person::getTahunLahir()
{
	return this->thn;
}
