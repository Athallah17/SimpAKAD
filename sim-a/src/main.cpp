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
		cout << "-------------------------------" << endl;
		cout << "Selamat datang di Sistem Akademik Test B" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  |1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa " << endl;
		cout << "  |2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa " << endl;
		cout << "  |3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa " << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  |1. Tambah Mahasiswa" << endl;
		cout << "  |2. Tambah Dosen" << endl;
		cout << "  |3. Tambah Tenaga Kependidikan" << endl;
		cout << "  |4. Tampilkan semua Mahasiswa" << endl;
		cout << "  |5. Tampilkan semua Dosen" << endl;
		cout << "  |6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << " ---------------------------------------------------" << endl << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					string id, nama, jk, tmp, departemen;
					int dd, mm, yy, nrp, tahunmasuk, semesterke;
					cout << "Masukkan Id: ";
					cin >> id;
					cout << "Masukkan Nama Lengkap: ";
					cin.ignore();
					getline(cin, nama);
					cout << "Masukkan Jenis Kelamin: ";
					cin >> jk;
					cout << "Masukkan Tempat Lahir: ";
					cin >> tmp;
					cout << "Masukkan Tanggal Lahir: ";
					cin >> dd;
					cout << "Masukkan Bulan Lahir: ";
					cin >> mm;
					cout << "Masukkan Tahun Lahir: ";
					cin >> yy;
					cout << "Masukkan NRP: ";
					cin >> nrp;
					cout << "Masukkan Asal Departemen: ";
					cin.ignore();
					getline(cin, departemen);
					cout << "Masukkan Tahun Masuk: ";
					cin >> tahunmasuk;
					cout << "Masukkan Semester: ";
					cin >> semesterke;

					mahasiswa mhs(id, nama, jk, tmp, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					string id, nama, jk , tmp , npp, departemen;
					int dd, mm, yy, pendidikan;
					cout << "Masukkan Id: " ;
					cin >> id;
					cout << "Masukkan Nama Lengkap: " ;
					cin.ignore();
					getline(cin, nama);
					cout << "Masukkan Jenis Kelamin: ";
					cin >> jk;
					cout << "Masukkan Tempat Lahir: " ;
					cin >> tmp;
					cout << "Masukkan Tanggal Lahir: " ;
					cin >> dd;
					cout << "Masukkan Bulan Lahir: " ;
					cin >> mm;
					cout << "Masukkan Tahun Lahir: ";
					cin >> yy;
					cout << "Masukkan NPP: ";
					cin >> npp;
					cout << "Masukkan Asal Departemen: " ;
					cin.ignore();
					getline(cin, departemen);
					cout << "Masukkan Jenjang Pendidikan: ";
					cin >> pendidikan;

					dosen dsn(id, nama, jk, tmp, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					string id, nama, jk, tmp,  npp, unit;
					int dd, mm, yy;
					cout << "Masukkan Id: ";
					cin >> id;
					cout << "Masukkan Nama Lengkap: ";
					cin.ignore();
					getline(cin, nama);
					cout << "Masukkan Jenis Kelamin: ";
					cin >> jk;
					cout << "Masukkan Tempat Lahir: ";
					cin >> tmp;
					cout << "Masukkan Tanggal Lahir: " ;
					cin >> dd;
					cout << "Masukkan Bulan Lahir: ";
					cin >> mm;
					cout << "Masukkan Tahun lahir: ";
					cin >> yy;
					cout << "Masukkan NPP: ";
					cin >> npp;
					cout << "Masukkan Asal Unit: ";
					cin.ignore();
					getline(cin, unit);

					tendik tdk(id, nama, jk, tmp, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;
			case 4:
				{
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "Nama: " << recMhs[i].getNama() << endl;
						cout << "Jenis Kelamin: " << recMhs[i].getJeniskelamin() << endl;
						cout << "Tempat Tanggal lahir: " << recMhs[i].getTmptLahir();
						cout << "," << recMhs[i].getTglLahir();
						cout << "-" << recMhs[i].getBulanLahir();
						cout << "-" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP: " << recMhs[i].getNRP() << endl;
						cout << "Asal Departemen: " << recMhs[i].getDepartemen() << endl << endl;
						cout << "Semester Ke-" << recMhs[i].getSemester() << endl;
					}
				}
				break;
			case 5:
				{
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "Nama: " << recDosen[i].getNama() << endl;
						cout << "Jenis Kelamin: " << recDosen[i].getJeniskelamin() << endl;
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
						cout << "Jenis Kelamin: " << recTendik[i].getJeniskelamin() << endl;
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