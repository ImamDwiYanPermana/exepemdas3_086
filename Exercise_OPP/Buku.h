#ifndef BUKU_H
#define BUKU_H

class buku {
public:
	string nama;
	buku(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\"ada\n";
	}
	~buku() {
		cout << "Anak \"" << nama << "\"tidak ada\n";
	}
};
#endif

