#ifndef IBU_H
#define IBU_H

class pengarang {
public:
	string nama;
	vector<buku*> daftar_anak;

	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << "\"tidak ada\n";
	}
	~pengarang() {
		cout << "pengarang \"" << nama << "\" tidak ada\n";
	}
	void tambahAnak(buku*);
	void cetakAnak();
};

void pengarang::tambahAnak(buku* pAnak) {
	daftar_anak.push_back(pAnak);
}

void pengarang::cetakAnak() {
	cout << "daftar buku dari pengarang \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif 