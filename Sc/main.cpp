#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDsn;
	vector<tendik> recTdk;

	int menu_terpilih;

	while(1) {
		cout << "-----------------------------------------" << endl;
		cout << "Selamat datang di Neraka" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDsn.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTdk.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
                        {
                                string id, nama, nrp, departemen;
                                int tgl, bln, thn, tahunmasuk;
                            cout << "Masukan Nomer ID" << endl;
                            cin >> id;
                            cout << "Masukkan Nama Lengkap" << endl;
                            cin >> nama;
                            cout << "Masukkan Tanggal Lahir" << endl;
                            cin >> tgl;
                            cout << "Masukkan Bulan Lahir" << endl;
                            cin >> bln;
							cout << "Masukkan Tahun Lahir" << endl;
							cin >> thn;
                            cout << "Masukkan Nomor Registrasi Pokok" << endl;
                            cin >> nrp;
                            cout << "Masukkan Asal Departemen" << endl;
							cin >> departemen;
							cout << "Masukkan Tahun Masuk" << endl;
							cin >> tahunmasuk;

							mahasiswa mhs(id, nama, tgl, bln, thn, nrp, departemen, tahunmasuk);
							recMhs.push_back(mhs);
                        }
				break;
			case 2:
						{ 
								string id, nama, npp, departemen;
                                int tgl, bln, thn, pendidikan;
                            cout << "Masukan Nomer ID" << endl;
                            cin >> id;
                            cout << "Masukkan Nama Lengkap" << endl;
                            cin >> nama;
                            cout << "Masukkan Tanggal Lahir" << endl;
                            cin >> tgl;
                            cout << "Masukkan Bulan Lahir" << endl;
                            cin >> bln;
							cout << "Masukkan Tahun Lahir" << endl;
							cin >> thn;
                            cout << "Masukkan Nomor Pokok" << endl;
                            cin >> npp;
                            cout << "Masukkan Asal Departemen" << endl;
							cin >> departemen;
							cout << "Masukkan Jenjang Pendidikan" << endl;
							cin >> pendidikan;

							dosen dsn(id, nama, tgl, bln, thn, npp, departemen, pendidikan);
							recDosen.push_back(dsn);
						}
				break;
			case 3:
						{
								string id, nama, npp, unit;
                                int tgl, bln, thn;
                            cout << "Masukan Nomer ID" << endl;
                            cin >> id;
                            cout << "Masukkan Nama Lengkap" << endl;
                            cin >> nama;
                            cout << "Masukkan Tanggal Lahir" << endl;
                            cin >> tgl;
                            cout << "Masukkan Bulan Lahir" << endl;
                            cin >> bln;
							cout << "Masukkan Tahun Lahir" << endl;
							cin >> thn;
                            cout << "Masukkan Nomor Pokok" << endl;
                            cin >> npp;
                            cout << "Masukkan Asal Unit" << endl;
							cin >> unit;
							
							tendik tdk(id, nama, tgl, bln, thn, npp, unit);
							recTendik.push_back(tdk);
						}
				break;
			case 4:
						{
							for (int i=0; i < recMhs.size(); i++)

								{
									cout << " NAMA : " << recMhs[i].getNama() << endl;
									cout << " TANGGAL LAHIR : " << recMhs[i].getTglLahir();
									cout << "-" << recMhs[i].getBulanLahir();
									cout << "-" << rechMhs[i].getTahunLahir() << endl;
									cout << " NRP : " << recMhs[i].getNRP() << endl;
									cout << " DEPARTEMEN: " << rechMhs[i].getDepartemen() << endl;
								}
						}
				break;
			case 5:
						{
							for (int i=0; i < recDsn.size(); i++)
							{
								cout << " NAMA : " << recDsn[i].getNama() << endl;
								cout << " TANGGAL LAHIR : " << recDsn[i].getTglLahir();
								cout << "-" << recDsn[i].getBulanLahir();
								cout << "-" << recDsn[i].getTahunLahir() << endl;
								cout << " NPP : " << recDsn[i].getNPP() << endl;
								cout << " DEPARTEMEN : " << recDsn[i].getDepartemen()  << endl;
								cout << " PENDIDIKAN : " << rechMhs[i].getPendidikan() << endl;
							}
						}
				break;
			case 6:
						{
							for (int i=0; i < recTdk.size(); i++)
							{
								cout << " NAMA : " << recTdk[i].getNama() << endl;
								cout << " TANGGAL LAHIR : " << recTdk[i].getTglLahir();
								cout << "-" << recTdk[i].getBulanLahir();
								cout << "-" << recTdk[i].getTahunLahir() << endl;
								cout << " NPP : " << recTdk[i].getNPP() << endl;
								cout << " ASAL UNIT : " << recTdk[i].getDepartemen()  << endl;
							}
						}
				break;
		}
	}

	return 0;
}