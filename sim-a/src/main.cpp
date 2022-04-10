#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "-------------------------------------------" << endl;
		cout << "Selamat datang di Neraka" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  |1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa |" << endl;
		cout << "  |2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa |" << endl;
		cout << "  |3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa |" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << " ---------------------------------------------------" << endl << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					string id, nama, tmp, nrp, departemen;
					int dd, mm, yy, tahunmasuk;
					cout << "Masukkan Id: " << endl;
					cin >> id;
					cout << "Masukkan Nama Lengkap: " << endl;
					cin >> nama;
					cout << "Masukkan Tempat Lahir: " << endl;
					cin >> tmp;
					cout << "Masukkan Tanggal Lahir: " << endl;
					cin >> dd;
					cout << "Masukkan Bulan Lahir: " << endl;
					cin >> mm;
					cout << "Masukkan Tahun Lahir: " << endl;
					cin >> yy;
					cout << "Masukkan NRP: " << endl;
					cin >> nrp;
					cout << "Masukkan Asal Departemen: " << endl;
					cin >> departemen;
					cout << "Masukkan Tahun Masuk: " << endl;
					cin >> tahunmasuk;

					mahasiswa mhs(id, nama, tmp, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					string id, nama,tmp , npp, departemen;
					int dd, mm, yy, pendidikan;
					cout << "Masukkan Id: " << endl;
					cin >> id;
					cout << "Masukkan Nama Lengkap: " << endl;
					cin >> nama;
					cout << "Masukkan Tempat Lahir: " << endl;
					cin >> tmp;
					cout << "Masukkan Tanggal Lahir: " << endl;
					cin >> dd;
					cout << "Masukkan Bulan Lahir: " << endl;
					cin >> mm;
					cout << "Masukkan Tahun Lahir: " << endl;
					cin >> yy;
					cout << "Masukkan NPP: " << endl;
					cin >> npp;
					cout << "Masukkan Asal Departemen: " << endl;
					cin >> departemen;
					cout << "Masukkan Jenjang Pendidikan: " << endl;
					cin >> pendidikan;

					dosen dsn(id, nama, tmp, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					string id, nama, tmp,  npp, unit;
					int dd, mm, yy;
					cout << "Masukkan Id: " << endl;
					cin >> id;
					cout << "Masukkan Nama Lengkap: " << endl;
					cin >> nama;
					cout << "Masukkan Tempat Lahir: " << endl;
					cin >> tmp;
					cout << "Masukkan Tanggal Lahir: " << endl;
					cin >> dd;
					cout << "Masukkan Bulan Lahir: " << endl;
					cin >> mm;
					cout << "Masukkan Tahun lahir: " << endl;
					cin >> yy;
					cout << "Masukkan NPP: " << endl;
					cin >> npp;
					cout << "Masukkan Asal Unit: " << endl;
					cin >> unit;

					tendik tdk(id, nama, tmp, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;
			case 4:
				{
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "Nama: " << recMhs[i].getNama() << endl;
						cout << "Tempat Tanggal lahir: " << recMhs[i].getTmptLahir();
						cout << "," << recMhs[i].getTglLahir();
						cout << "-" << recMhs[i].getBulanLahir();
						cout << "-" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP: " << recMhs[i].getNRP() << endl;
						cout << "Asal Departemen: " << recMhs[i].getDepartemen() << endl << endl;
					}
				}
				break;
			case 5:
				{
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "Nama: " << recDosen[i].getNama() << endl;
						cout << "Tempat Tanggal lahir: " << recDosen[i].getTmptLahir();
						cout << "," << recDosen[i].getTglLahir();
						cout << "-" << recDosen[i].getBulanLahir();
						cout << "-" << recDosen[i].getTahunLahir() << endl;
						cout << "NPP: " << recDosen[i].getNPP() << endl;
						cout << "Jenjang Pendidikan: " << recDosen[i].getPendidikan() << endl;
						cout << "Asal Departemen: " << recDosen[i].getDepartemen() << endl << endl;
					}
				}
				break;
			case 6:
				{
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Nama: " << recTendik[i].getNama() << endl;
						cout << "Tempat Tanggal lahir: " << recTendik[i].getTmptLahir();
						cout << "," << recTendik[i].getTglLahir();
						cout << "-" << recTendik[i].getBulanLahir();
						cout << "-" << recTendik[i].getTahunLahir() << endl;
						cout << "NPP: " << recTendik[i].getNPP() << endl;
						cout << "Asal Unit: " << recTendik[i].getUnit() << endl;
					}
				}
				break;
		}
	}

	return 0;
}