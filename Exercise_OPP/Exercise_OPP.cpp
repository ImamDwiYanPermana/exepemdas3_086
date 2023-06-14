#include<vector>
#include <iostream>
using namespace std;
/*#include "Buku.h"
#include "Pengarang.h"*/


class pengarang;
class penerbit {
public:
    string nama;
    vector<pengarang*> daftar_pengarang;
    penerbit(string pNama) : nama(pNama) {
        cout << "penerbit \"" << nama << "\"ada\n";
    }
    ~penerbit() {
        cout << "penerbit \"" << nama << "\"tidak akan \n";
    }
    void tambahPengarang(pengarang*);
    void cetakPengarang();
};

class pengarang {
public:
    string nama;
    vector<penerbit*> daftar_penerbit;

    pengarang(string pNama) : nama(pNama) {
        cout << "pengarang\"" << nama << "\"ada\n";
    }
    ~pengarang() {
        cout << "pengarang\n" << nama << "\"tidak ada\n";
    }
    void tambahPenerbit(penerbit*);
    void cetakPenerbit();
};

void penerbit::tambahPengarang(pengarang* pDokter) {
    daftar_pengarang.push_back(pDokter);
}

void penerbit::cetakPengarang() {
    cout << "Daftar Penerbit yang di ikuti \n" << this->nama << "\:\n";
    for (auto& a : daftar_pengarang) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
void pengarang::tambahPenerbit(penerbit* pPenerbit) {
    cout << " Daftar pengaarang pada penerbit\n";
    pPenerbit->tambahPengarang(this);
}
void pengarang::cetakPenerbit() {
    cout << "Daftar penerbit dari pengarang \"" << this->nama << "\":\n";
    for (auto& a : daftar_penerbit) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
int main()
{
    pengarang* varPengarang1 = new pengarang("Joko");
    pengarang* varPengarang2 = new pengarang("Intan Pariwara");
    penerbit* varPenerbit1 = new penerbit("Giga");
    penerbit* varPenerbit2 = new penerbit("Gama press");

    varPengarang1->tambahPenerbit(varPenerbit1);
    varPengarang1->tambahPenerbit(varPenerbit2);
    varPengarang2->tambahPenerbit(varPenerbit1);

    varPengarang1->cetakPenerbit();
    varPengarang2->cetakPenerbit();
    varPenerbit1->cetakPengarang();
    varPenerbit2->cetakPengarang();

    delete varPenerbit1;
    delete varPenerbit2;
    delete varPengarang1;
    delete varPengarang2;
    return 0;

}

   /* ibu* varIbu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak1);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varibu2->cetakAnak();

    delete varIbu;
    delete varibu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    return 0;*/



