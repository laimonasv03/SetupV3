#include "my_lib.h"

//hisd

int main() {
	int vesti_nuskaityti;
	cout << "1)Testas rule3 2)Overrides  3) Test strategy 4)Sukurk zmogu)" << endl;
	patikrink(vesti_nuskaityti);
	if(vesti_nuskaityti == 1) {
		vector<int> ndCtestas = { 10, 10, 10, 10, 10 };
		Studentas st("Vardenis", "Pavardenis", 10, 9.5, ndCtestas);
		Studentas st2("Vilmantas", "Sraigius", 10, 9.5, ndCtestas);
		Studentas ugn("Ugne", "Ugnaite", 10, 9.5, ndCtestas);
		Studentas s1;
		Studentas skopija;
		Studentas as_kopija;
		as_kopija = st2;
		cout << "(default)Sveikas, as " << s1.getVardas() << " " << s1.getPavarde() << endl;
		cout << "(ivestas)Sveikas, as " << st.getVardas() << " " << st.getPavarde() << endl;
		cout << "(kopija)Sveikas, as " << skopija.getVardas() << " " << skopija.getPavarde() << endl;
		cout << "(copy assignment)Sveikas, as " << as_kopija.getVardas() << " " << as_kopija.getPavarde() << endl;
		ugn.PrintStudent();
	}
	else if (vesti_nuskaityti == 2) {
		Studentas over;
		cout << "Irasyk studento {varda} {pavarde}" << endl;
		cin >> over;
		cout << over;
		over.writeToFile("klaseIrasoFaila.txt");
	}
	else if (vesti_nuskaityti == 3) {
		testFileSizes_vec3_C();
	}
	else if (vesti_nuskaityti == 4) {
		//Zmogus zmogus1;
		Zmogus::CannotCreateObject();
	}
}
	//int lygina;
	//int vesti_nuskaityti;
	//Studentas Laikinas;
	//list<Studentas> grupe;
	//int n;
	//cout << "Ar nori vesti duomenis, ar generuoti, generuoti txt faila (ivesk tinkama skaiciu)" << endl;
	//cout << "1 Vesti\n2 Nuskaityti\n3 generuoti txt faila\n4 testavimas\n5 testavimas v.1" << endl;
	//patikrink(vesti_nuskaityti);
	//if (vesti_nuskaityti == 1) {
		//cout << "kiek moksleiviu ivesi: ";
		//patikrink_daug(n);
		//for (int j = 0; j < n; j++) {
		//	Laikinas = input_data();
		//	Laikinas.galutinis_mediana = galutinisM(Laikinas);
		//	grupe.push_back(Laikinas);
		//	Laikinas.nd_pazymiai.clear();
		//}
		//cout << "Pagal ka rusiuoti 1)varda 2)pavarde 3)rezultata"<<endl;
		//patikrink(lygina);
		//if (lygina == 1) {
		//	grupe.sort(palygintiVarda);
		//}
		//else if (lygina == 2) {
		//	grupe.sort(palygintiPavarde);
		//}
		//else if (lygina == 3) {
		//	grupe.sort(palygintiRez);
		//}
		//int pasirinkimas_balo;
		//cout << "Pasirink su kuo skaiciuoti galutini bala\n(ivesk viena is skaiciu)" << endl;
		//cout << "1. vidurkiu\n2. mediana\n";
		//patikrink(pasirinkimas_balo);
		//if (pasirinkimas_balo == 1) {
		//	cout << left << setw(20) << "Pavarde" << setw(20) << "Vardas" << setw(20) << "Galutinis(vid.)" << setw(20) << "AtmintiesAdresas\n";
		//	for (auto& student : grupe) {
		//		cout << left << setw(20) << student.pavarde << setw(20) << student.vardas << setw(20) << student.galutinis_vidurkis << &student << "\n";
		//	}
		//}
		//else if (pasirinkimas_balo == 2) {
		//	cout << left << setw(20) << "Pavarde" << setw(20) << "Vardas" << setw(20) << "Galutinis(med.)" << setw(20) << "AtmintiesAdresas\n";
		//	// studentai 
		//	for (auto& student : grupe) {
		//		cout << left << setw(20) << student.pavarde << setw(20) << student.vardas << setw(20) << student.galutinis_mediana << &student << "\n";
		//	}
		//}
	//	cout << "relizacijos dar nera vesk 3 arba 4";
	//}
	//else if (vesti_nuskaityti == 2) {
		//std::string filename = "emokymai_studentai10000.txt.txt";
		//read_from_file(filename, grupe);
		//for (studentas& Laikinas : grupe) {
		//	Laikinas.galutinis_vidurkis = galutinisV(Laikinas);
		//	Laikinas.galutinis_mediana = galutinisM(Laikinas);
		//	Laikinas.nd_pazymiai.clear();
		//}

		//int pasirinkimas_balo_2;
		//cout << "Pasirink su kuo skaiciuoti galutini bala\n(ivesk viena is skaiciu)" << endl;
		//cout << "1. vidurkiu\n2. mediana\n";
		//patikrink(pasirinkimas_balo_2);

		//if (pasirinkimas_balo_2 == 1) {
		//	cout << "Pagal ka rusiuoti 1)varda 2)pavarde 3)rezultata" << endl;
		//	patikrink(lygina);
		//	if (lygina == 1) {
		//		grupe.sort(palygintiVarda);
		//	}
		//	else if (lygina == 2) {
		//		grupe.sort(palygintiPavarde);
		//	}
		//	else if (lygina == 3) {
		//		grupe.sort(palygintiVidurki);
		//	}
		//	printTableVid(grupe);
		//}
		//else if (pasirinkimas_balo_2 == 2) {
		//	cout << "Pagal ka rusiuoti 1)varda 2)pavarde 3)rezultata" << endl;
		//	patikrink(lygina);
		//	if (lygina == 1) {
		//		grupe.sort(palygintiVarda);
		//	}
		//	else if (lygina == 2) {
		//		grupe.sort(palygintiPavarde);
		//	}
		//	else if (lygina == 3) {
		//		grupe.sort(palygintiMediana);
		//	}
		//	printTableMed(grupe);
		//}
	//	cout << "relizacijos dar nera vesk 3 arba 4";
	//}
	//else if (vesti_nuskaityti == 3) {
		//int moksleiviu_skaicius;
		//cout << "kiek moksleiviu generuoti: ";
		//patikrink_daug(moksleiviu_skaicius);
		//auto start_time = std::chrono::high_resolution_clock::now();
		//generuoja_sarasa(moksleiviu_skaicius, "generuoti_studentai.txt");
		//read_from_file("generuoti_studentai.txt", grupe);
		//for (studentas& Laikinas : grupe) {
		//	Laikinas.galutinis_vidurkis = galutinisV(Laikinas);
		//	Laikinas.nd_pazymiai.clear();
		//}
		//pair<list<studentas>, list<studentas>> dvi_grupes = gudruciai_vargsiukai(grupe);
		//list<studentas> gudrociai = dvi_grupes.first;
		//list<studentas> vargsiukai = dvi_grupes.second;
		//gudrociai.sort(palygintiVidurki);
		//vargsiukai.sort(palygintiVidurki);
		//cout << "Gudrociai:" << endl;
		//printTableVid(gudrociai);
		//cout << "Vargsiukai:" << endl;
		//printTableVid(vargsiukai);
		//iraso_faila(gudrociai,"gudrociai_bim.txt");
		//iraso_faila(vargsiukai, "vargsiukai_bam.txt");
		//auto end_time = std::chrono::high_resolution_clock::now();
		//auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
		//cout << duration.count() << " milliseconds (" << duration.count() / 1000.0 << " seconds)" << endl;
//		cout << "relizacijos dar nera vesk 3 arba 4";
//	}
//	else if (vesti_nuskaityti == 4) {
//		
//		//testFileSizesC();
//	}
//	else if (vesti_nuskaityti == 5){
//		//testFileSizes_list1();
//		//testFileSizes_vec1();
//		//testFileSizes_list2();
//		//testFileSizes_vec2();
//		//testFileSizes_list3();
//		testFileSizes_vec3_C();
//	}
//	else {
//		cout << "ivedei netinkama skaiciu";
//	}
//}
