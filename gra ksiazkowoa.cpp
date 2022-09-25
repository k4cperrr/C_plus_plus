#include <iostream>
#include <time.h>

using namespace std;
int main()
{

	setlocale(LC_CTYPE, "Polish");
	int a, b;
	int i = 0;
	int j = 0;
	int l = 0;
	int k;
	int z;
	int losuj;
	int hp = 10;
	int la;
	/*schemat walki gra turowa*/
	int hp3 = 1050;
	int twojehp = 91;
	int atak = 100;
	int regneracja = 200;
	int hp4 = 2250;
	int hp5 = 2250;
	int mojehp = 101;
	int hpp3 = 1050;
	int hpp4 = 2250;
	int hpp5 = 2250;

	






	cout << "musimy sprawdziæ twoj¹ cierpliwoœæ graczu przed graniem" << endl << "komputer losuje liczby od 0 do 100 musisz j¹ zgadn¹æ dawaj graczu to twoja chwila" << endl;
	srand(time(0));
	losuj = (rand() % 100);
	int il = 0;
	do
	{
		cout << "podaj liczbe" << endl;
		cin >> z;
		if (z < losuj)
		{
			cout << "zama³a liczba"<<endl<<"spróbuj ponownie" << endl;
		
		}
		if (z > losuj)
		{
			cout << "zadu¿a liczba" << endl << "spróbuj ponownie" << endl;
		}
			il++;
	}while (z != losuj);
	cout << "zgad³eœ po " << il << "razach" << endl << "gratulacje" << endl;
	cout << "ostatnia mini gra przed toba jest do czêœci g³ównej ni¹" << endl << "labirynt" << endl;
	cout << "== " << endl;
	cout << "które drzwi s¹ otwarte" << endl << 1 << endl << 2 << endl<<3<<endl << "podaj liczbe"<<endl;
	cin >> la;
	cout << endl;
	while (3 !=la )
	{
		cout << "spróbuj ponownie" << endl << "podaj liczbe" << endl;
		cin >> la;
	}
	cout << " ==" << endl;
	cout << "które drzwi s¹ otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
	cin >> la;
	cout << endl;
	while (1 != la)
	{
		cout << "spróbuj ponownie" << endl << "podaj liczbe" << endl;
		cin >> la;
	}
	cout << "= =" << endl;
	cout << "które drzwi s¹ otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
	cin >> la;
	cout << endl;
	while (2 != la)
	{
		cout << "spróbuj ponownie" << endl << "podaj liczbe" << endl;
		cin >> la;
	}
	cout << endl<< "gratulacje przeszed³eœ mini gry teraz zabawa siê rozkrêca na dobre"<<endl;

	cout << "*********************************************" << endl;
	cout << "=============================================" << endl;
	cout << "Witam ciê w grze, aby rozpocz¹æ kliknij 1 " << endl;
	cout << "=============================================" << endl;
	cout << "*********************************************" << endl;
	cin >> a;
	while (a == 1)
	{
		cout << "====================================================================================================================" << endl;
		cout << "Urodzi³eœ siê w miescie jako biedny chlopak masz dwie obcie kariery 1.Gangster 2.Nauka 3.Mini GRY (u¿yte w fabule)" << endl;
		cout << "====================================================================================================================" << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "chcesz staæ siê gangsterem, musisz zadbaæ o honor na dzielni musisz pobic 1.przeciwny gang 2.bosa gangu ";
			cin >> a;
			if (a == 1)
			{
				cout << "gdzie ich atakujemy: 1.pod sklepem ";
				cin >> a;
				if ((a == 1) || (a == 2))
				{
					cout << "ju¿ Ciê z³apali chyba warto iœæ w naukê" << endl << "spróbuj ponownie" << endl;
					a = 1;
				}
			}
			else if (a == 2)
			{
				cout << "gdzie go atakujemy 1. pod domem 2. w aucie";
				cin >> a;
				if ((a == 1) || (a == 2))
				{
					cout << "ju¿ Ciê z³apali chyba warto iœæ w naukê" << endl << "spróbuj ponownie" << endl;
					a = 1;
				}
			}


		}

		else if (a == 2)
		{
			cout << "chcesz staæ siê naukowcem najpierw musisz naucyzæ siê dodawaæ ile to 10+2=" << endl;
			cin >> b;
			while (b != 12)
			{
				cout << "spróbuj jeszcze raz" << endl;
				cin >> b;
			}

			cout << "gratulacje umiesz dodawaæ teraz coœ turudniejszego musisz zapisac sie do szkoly ktor¹ wybierasz:" << endl
				<< "1.szkola fajni znajomi, ale slaby poziom" << endl
				<< "2.doœæ s³abi znajomi, ale poziom wysoki" << endl;
			cin >> b;

			if (b == 1)
			{
				cout << "Witamy na pok³adzie bedziesz mia³ wielu znajomych" << endl
					<< "Poznaj kolegow z klasy :" <<
					endl << "1.przywitaj siê"
					<< endl << "2.zrób impreze" << endl;
				cin >> b;

				if (b == 1)
				{
					cout << "koledzy œrednio Ciê polubili " << endl << "co robisz :" << endl << "1.popusujesz sie" << endl << "2.popadasz w depresje" << endl;
					cin >> b;
					if ((b == 2) || (b == 1))
					{
						cout << "nie ta szko³a wybierz drug¹ tam coœ siê nauczysz" << endl << "spróbuj ponownie" << endl;
						a = 1;
					}
				}
				if (b == 2)
				{
					cout << "koledzy jeszcze bardziej cie polubili" << endl << "co robisz: " << endl << "1.zabierasz ich na piwo" << endl << "2.zostawiasz ich" << endl;
					cin >> b;
					cout << endl;
					if ((b == 2) || (b == 1))
					{
						cout << "nie ta szko³a wybierz drug¹ tam coœ siê nauczysz" << endl << "spróbuj ponownie" << endl;
						a = 1;
					}
				}

			}


			else if (b == 2)
			{
				cout << "Witamy, u nas siê wiele nauczysz :)" << endl;
				cout << "Poznaj kolegów z klasy" << endl << "1.przywitaj siê" << endl << "2.olej ich" << endl;
				cin >> b;
				if (b == 1)
				{
					cout << "masz ma³e grono znajomych" << endl;
					cout << "gdzie idziesz z nimi " << endl << " 1.kino" << endl << "2.kawiarnia" << endl;
					cin >> b;
					if (b == 1)
					{
						cout << "wybierz film" << endl << "1.horror" << endl << "2.komedia" << endl;
						cin >> b;
						if (b == 1)
						{
							cout << "dziewczyna siê boi" << endl << "co robisz :" << endl << "1.przytulasz j¹" << endl << "2.olewasz to" << endl;
							cin >> b;
							if (b == 1)
							{
								cout << endl << "masz fajna dziewczyne, ale musisz sie skupic na nauce od czas do czasu mo¿esz wyjsæ na miasto lub zagraæ na kompie" << endl << "spróbuj ponownie" << endl;
								a = 1;
							}
							if (b == 2)
							{
								cout << "niestety sta³eœ siê samotny mo¿e lepiej ich olaæ i sobie pograæ na komputerze lub isc na miasto" << endl << "spróbuj ponownie" << endl;
								a = 1;
							}

						}
						if (b == 2)
						{
							cout << "dziewczyna siê smiejie" << endl << "co robisz :" << endl << "1.opowiadasz jej ¿art" << endl << "2.olewasz to" << endl;
							cin >> b;
							if (b == 1)
							{
								cout << endl << "masz fajna dziewczyne, ale musisz sie skupic na nauce od czas do czasu mo¿esz wyjsæ na miasto lub zagraæ na kompie" << endl << "spróbuj ponownie" << endl;
								a = 1;
							}
							if (b == 2)
							{
								cout << "niestesy sta³eœ siê samotny mo¿e lepiej ich olaæ i sobie pograæ na komputerze lub isc na miasto" << endl << "spróbuj ponownie" << endl;
								a = 1;
							}

						}
					}
					if (b == 2)
					{
						cout << "co robisz :" << endl << "1.kupujesz kawe tylko dla siebie" << endl << "2.kupujesz kawe dla wszystkich" << endl;
						cin >> b;
						if ((b == 1) || (b == 2))
						{
							cout << endl << "znajomi w tej szkole s¹ fa³szywi olej ich" << endl << "spróbuj ponownie" << endl;
							a = 1;
						}
					}
				}
				else if (b == 2)
				{
					cout << "jesteœ samotny";
					cout << "musisz sie lepiej poczuæ siê lepiej: " << endl << "1.idz na miasto" << endl << "2.zagraj w grê na komputerze" << endl;
					cin >> b;
					if (b == 1)
					{
						cout << "zobaczy³eœ fajn¹ dziewczynê co robisz: " << endl << "1.zagadujesz" << endl << "2.nic z tym nie robisz" << endl;
						cin >> b;
						if (b == 1)
						{

							cout << "dobrze wam sie rozmawia: " << endl << "1.zapraszasz na kawê" << endl << "2.dajesz zmyslony numer telefonu i odchodzisz" << endl;
							cin >> b;
							if (b == 1)
							{

								cout << "jednak okaza³a siê niedobra" << endl << "spróbuj ponownie";

							}
							else if (b == 2)
							{
								cout << "spotykasz j¹ na ulicy co robisz: " << endl << "1.udajesz ze jej nie znasz" << endl << "2.wdajesz siê z ni¹ w rozmowe" << endl;
								cin >> b;
								if (b == 1)
								{
									cout << "Uderza Ciê w twarz co robisz :" << endl << "1.odajesz jej" << endl << "2.uciekasz" << endl;
									cin >> b;
									if (b == 1)
									{


										cout << " bijesz sie z jej ch³opakiem  " << endl;
										cout << "bijesz szybko dostajesz kombo " << endl;

										for (int i = 0; hp >= 0; ++i)
										{
											cout << "kliknij: 1 aby bic" << endl;
											cin >> a;
											if (a == 1)
											{
												srand(time(0));
												k = (rand() % 1000);
												j += k;
												cout << k << endl;
												hp -= k;
												l++;
											}
										}
										cout << "zabiles go :" << endl << l << "hity" << endl;
										cout << "zabrales mu :" << endl << j << "hp" << endl;
										int hp1 = 500;
										cout << "kolejna walka";

										/*schemat walki clicker */
										for (int i = 0; hp1 >= 0; ++i)
										{
											cout << "kliknij: 1 aby bic" << endl;
											cin >> a;
											if (a == 1)
											{
												int i = 0;
												int j = 0;
												int l = 0;
												srand(time(0));
												k = (rand() % 1000);
												j += k;
												cout << k << endl;
												hp1 -= k;
												l++;
											}
										}
										cout << "zabiles go :" << endl << l << "hity" << endl;
										cout << "zabrales mu :" << endl << j << "hp" << endl;
										int hp2 = 1000;
										cout << "kolejna walka";


										for (int i = 0; hp2 >= 0; ++i)
										{
											cout << "kliknij: 1 aby bic" << endl;
											cin >> a;
											if (a == 1)
											{
												int i = 0;
												int j = 0;
												int l = 0;
												srand(time(0));
												k = (rand() % 1000) * 10;
												j += k;
												cout << k << endl;
												hp2 -= k;
												l++;
											}
										}
										cout << "zabiles go :" << endl << l << "hity" << endl;
										cout << "zabrales mu :" << endl << j << "hp" << endl;
										cout << "walczysz z johnem kenedym on jest niesmiertelny daje ci fory o jezeli trafisz to wygryweasz" << endl << " co wybierasz" << endl << "1.orzel" << endl << "2.reszka" << endl;
										int p = 0;
										int v;
										cin >> v;
										cout << endl;
										srand(time(0));
										k = rand() % 3 + 1;
										if (v == k)
										{
											cout << "wyga³es jestes modrzejszy niz on z kim chcesz pracowaæ: " << endl << "1.steve jobs" << endl << "2.bill gates";
											{
												cout << "stworzy³eœ najlpszego iphone" << endl << "gratulacje!" << endl;
												a = 0;
											}
											if (b == 2)
											{
												cout << "stworzy³eœ nowego windowsa" << endl << "gratulacje!" << endl;
												a = 0;
											}
										}
										else if (v != k)
										{
											cout << "przegrales by³eœ blisko wygrania gry" << endl << "spróbuj ponownie" << endl;
											a = 1;
										}



									}
									else if (b == 2)
									{
										cout << "popadasz w jeszczê wieksz¹ depresje pope³niasz samobójstwo" << endl << "spróbuj ponownie" << endl << "mo¿e spróbuj drug¹ opcie" << endl;
										a = 1;
									}


								}

								else if (b == 2)
								{
									cout << "olewasz szkole po trudnych prze¿yciach" << endl << "spróbuj ponownie" << endl;
									a = 1;
								}
							}
						}
						else if (b == 2)
						{ /*a to jest pierwsze zozga³ezienie duzego tekstu*/
							cout << "dziewczyna podesz³a aby z tob¹ pogadaæ, wysmiewa sie z ciebie" << endl << "spróbuj ponownie" << endl << "spróbuj drugi wybór" << endl;
							a = 1;


						}
					}
					else if (b == 2)
					{
						cout << "grasz w lola spotykasz tam fajn¹ dziewyczyne ,ale slabo gra" << endl << "co robisz :" << endl << "1.zapraszasz j¹ na serwer" << endl << "2.wyzywasz na pojedynek" << endl;
						cin >> b;
						if (b == 1)
						{
							cout << "zaprosi³eœ j¹ na serwer< fajnie siê wam rozmawia okaza³o siê ¿e mieszka blisko ciebie" << endl << "co robisz :" << endl << "1.zapraszasz j¹ na spotkanie" << endl << "2.olewasz to" << endl;
							cin >> b;
							if (b == 1)
							{
								cout << "Niechce siê dokoñca zgodziæ" << endl << "co robisz :" << endl << "1.namawiasz j¹" << endl << "2.mówisz ok" << endl;
								if (b == 1)
								{
									cout << "masz fajna dziewczyne, ale wyzwij j¹ na pojedynek" << endl << "spróbuj ponownie" << endl;
									a = 1;
								}
								else if (b == 2)
								{
									cout << "jest to s³aba droga nie zosta³eœ naukowcem, raczej kawalerem bez nikogo wyzwij j¹ na pojedynek" << endl << "spróbuj ponownie" << endl;
									a = 1;
								}
							}
							else if (b == 2)
							{
								cout << "zaprosi³eœ j¹ na serwer fajnie siê wam rozmawia okaza³o siê ¿e mieszka blisko ciebie" << endl << "co robisz :" << endl << "1.zapraszasz j¹ na spotkanie" << endl << "2.olewasz to" << endl;
								cin >> b;
								if (b == 1)
								{
									cout << "masz fajna dziewczyne, ale wyzwij j¹ na pojedynek" << endl << "spróbuj ponownie" << endl;
									a = 1;
								}
								else if (b == 2)
								{
									cout << "jest to s³aba droga nie zosta³eœ naukowcem, raczej kawalerem bez nikogo wyzwij j¹ na pojedynek" << endl << "spróbuj ponownie" << endl;
									a = 1;
								}
							}
						}

						else if (b == 2)
						{
							cout << "Ona chce pokazaæ ¿e nie¿le gra dlatego wyzywa Ciebie 1 na 1" << endl << "co robisz :" << endl << "1.zgadzasz siê" << endl << "2.nie chcesz graæ" << endl;
							cin >> b;
							if (b == 1)
							{

								cout << "Wybierasz postaæ " << endl << "co robisz :" << endl << "1.tank" << endl << "2.nie masz innych odblokowanych postaci wieæ musisz graæ tankiem" << endl;
								cin >> b;
								if (b == 1 || b == 2)
								{
									cout << "co jedn¹ kolejke przeciwnik zabiera ci 10 hp" << endl;
									do
									{

										/*schemat walki gra turowa*/
										cout << "masz" << twojehp << "hp" << " twój przeciwnik ma" << hp3 << "hp" << endl;
										twojehp -= 10;
										cout << "co robisz :" << endl << "1.atakujesz za " << atak << endl << "2.regenerujesz za " << regneracja << endl;
										cin >> b;
										if (b == 1)
										{
											hp3 -= atak;
										}
										if (b == 2)
										{
											twojehp += regneracja;
										}
									} while ((hp3 >= 0) && (twojehp >= 0));
									if (hp3 <= 0)
									{
										cout << "co jedn¹ kolejke przeciwnik zabiera ci 20 hp" << endl;
										cout << "gramy dalej kolejna walka" << endl;
										do
										{


											cout << "masz" << twojehp << "hp" << " twój przeciwnik ma" << hp4 << "hp" << endl;
											twojehp -= 20;
											cout << "co robisz :" << endl << "1.atakujesz za " << atak << endl << "2.regenerujesz za " << regneracja << endl;
											cin >> b;
											if (b == 1)
											{
												hp4 -= atak;
											}
											if (b == 2)
											{
												twojehp += regneracja;
											}
										} while ((hp4 >= 0) && (twojehp >= 0));
									}
									else if (twojehp <= 0)
									{
										cout << "sprobuj ponownie" << endl;
										a = 1;

									}

									if (hp4 <= 0)
									{
										cout << "co jedn¹ kolejke przeciwnik zabiera ci 30 hp" << endl;
										cout << "gramy dalej kolejna walka" << endl;
										do
										{

											cout << "masz" << twojehp << "hp" << " twój przeciwnik ma" << hp5 << "hp" << endl;
											twojehp -= 30;
											cout << "co robisz :" << endl << "1.atakujesz za " << atak << endl << "2.regenerujesz za " << regneracja << endl;
											cin >> b;
											if (b == 1)
											{
												hp5 -= atak;
											}
											if (b == 2)
											{
												twojehp += regneracja;
											}
										} while ((hp5 >= 0) && (twojehp >= 0));
									}
									
									
									
										if (hp5 <= 0)
										{
											cout << "gramy dalej kolejna walka" << endl;
											cout << "walczysz z johnem kenedym on jest niesmiertelny daje ci fory o jezeli trafisz to wygryweasz" << endl << " co wybierasz" << endl << "1.orzel" << endl << "2.reszka" << endl;
											int p = 0;
											int v;
											cin >> v;
											cout << endl;
											srand(time(0));
											k = rand() % 3 + 1;
											if (v == k)
											{
												cout << "wyga³es jestes modrzejszy niz on z kim chcesz pracowaæ: " << endl << "1.steve jobs" << endl << "2.bill gates";
												cin >> b;
												if (b == 1)
												{
													cout << "stworzy³eœ najlpszego iphone" << endl << "gratulacje!" << endl;
													a = 0;
												}
												if (b == 2)
												{
													cout << "stworzy³eœ nowego windowsa" << endl << "gratulacje!" << endl;
													a = 0;
												}

											}
											else if (v != k)
											{
												cout << "przegrales" << endl;
												cout << "spróbuj ponownie" << endl;
												a = 1;
											}
										}
										else if (twojehp <= 0)
										{
											cout << "sprobój ponowniemo¿e nastepnym razem sie uda" << endl;
											a = 1;
										}




									

								}
								else if (b == 2)
								{
									cout << "musisz z ni¹ zagraæ ¿êby jej zaimponowaæ" << endl << "spróbuj ponownie" << endl;
									a = 1;
								}
							}
						}
					}
				}
			}
		}
		else if (a == 3)
		{
			cout << "podaj w co chesz zagraæ" << endl << "1.zgadnij liczbê od 0 do 100" << endl << "2.orze³ reszka" << endl << "3.labirynt" << endl << "4.walka cliker" << endl << "5.walka turowa" << endl;
			cin >> b;
			if (b == 1)
			{
				srand(time(0));
				losuj = (rand() % 100);
				int il = 0;
				do
				{
					cout << "podaj liczbe" << endl;
					cin >> z;
					if (z < losuj)
					{
						cout << "zama³a liczba" << endl << "spróbuj ponownie" << endl;

					}
					if (z > losuj)
					{
						cout << "zadu¿a liczba" << endl << "spróbuj ponownie" << endl;
					}
					il++;
				} while (z != losuj);
				cout << "zgad³eœ po " << il << "razach" << endl << "gratulacje" << endl;
				a = 0;
			}
			else if (b == 2)
			{
				cout << "walczysz z johnem kenedym on jest niesmiertelny daje ci fory o jezeli trafisz to wygryweasz" << endl << " co wybierasz" << endl << "1.orzel" << endl << "2.reszka" << endl;
				int p = 0;
				int v;
				cin >> v;
				cout << endl;
				srand(time(0));
				k = rand() % 3 + 1;
				if (v == k)
				{
					cout << "gratulacje!" << endl;
					a = 0;
				}
				else if (v != k)
				{
					cout << "przegrales" << endl;
					cout << "spróbuj ponownie" << endl;
					a = 1;
				}
			}
			else if (b == 3)
			{
				cout << "== " << endl;
				cout << "które drzwi s¹ otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
				cin >> la;
				cout << endl;
				while (3 != la)
				{
					cout << "spróbuj ponownie" << endl << "podaj liczbe" << endl;
					cin >> la;
				}
				cout << " ==" << endl;
				cout << "które drzwi s¹ otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
				cin >> la;
				cout << endl;
				while (1 != la)
				{
					cout << "spróbuj ponownie" << endl << "podaj liczbe" << endl;
					cin >> la;
				}
				cout << "= =" << endl;
				cout << "które drzwi s¹ otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
				cin >> la;
				cout << endl;
				while (2 != la)
				{
					cout << "spróbuj ponownie" << endl << "podaj liczbe" << endl;
					cin >> la;
				}
				cout << "gratulacje" << endl;
				a = 0;
			}
			else if (b == 4)
			{




				cout << " walczysz " << endl;
				cout << "bijesz szybko dostajesz kombo " << endl;
				int hpp = 100;
				for (int i = 0; hpp >= 0; ++i)
				{
					cout << "kliknij: 1 aby bic" << endl;
					cin >> a;
					if (a == 1)
					{
						int i = 0;
						int j = 0;
						int l = 0;
						srand(time(0));
						k = (rand() % 1000);
						j += k;
						cout << k << endl;
						hpp -= k;
						l++;
					}
				}
				cout << "zabiles go :" << endl << l << "hity" << endl;
				cout << "zabrales mu :" << endl << j << "hp" << endl;
				int hpp1 = 500;
				cout << "kolejna walka";

				/*schemat walki clicker */
				for (int i = 0; hpp1 >= 0; ++i)
				{
					cout << "kliknij: 1 aby bic" << endl;
					cin >> a;
					if (a == 1)
					{
						int i = 0;
						int j = 0;
						int l = 0;
						srand(time(0));
						k = (rand() % 1000);
						j += k;
						cout << k << endl;
						hpp1 -= k;
						l++;
					}
				}
				cout << "zabiles go :" << endl << l << "hity" << endl;
				cout << "zabrales mu :" << endl << j << "hp" << endl;
				cout << "wygra³eœ" << endl;
				a = 1;
			}
			else if (b == 5)
			{
				cout << "co jedn¹ kolejke przeciwnik zabiera ci 10 hp" << endl;
				do
				{


					/*schemat walki gra turowa*/
					cout << "masz" << mojehp << "hp" << " twój przeciwnik ma" << hpp3 << "hp" << endl;
					mojehp -= 10;
					cout << "co robisz :" << endl << "1.atakujesz za " << atak << endl << "2.regenerujesz za " << regneracja << endl;
					cin >> b;
					if (b == 1)
					{
						hpp3 -= atak;
					}
					if (b == 2)
					{
						mojehp += regneracja;
					}
				} while ((hpp3 >= 0) && (mojehp >= 0));
				if (hpp3 <= 0)
				{
					cout << "co jedn¹ kolejke przeciwnik zabiera ci 20 hp" << endl;
					cout << "gramy dalej kolejna walka" << endl;
					do
					{


						cout << "masz" << mojehp << "hp" << " twój przeciwnik ma" << hpp4 << "hp" << endl;
						mojehp -= 20;
						cout << "co robisz :" << endl << "1.atakujesz za " << atak << endl << "2.regenerujesz za " << regneracja << endl;
						cin >> b;
						if (b == 1)
						{
							hpp4 -= atak;
						}
						if (b == 2)
						{
							mojehp += regneracja;
						}
					} while ((hpp4 >= 0) && (mojehp >= 0));
				}
				else if (mojehp <= 0)
				{
					cout << "sprobuj ponownie" << endl;
					a = 1;

				}

				if (hpp4 <= 0)
				{
					cout << "co jedn¹ kolejke przeciwnik zabiera ci 30 hp" << endl;
					cout << "gramy dalej kolejna walka" << endl;
					do
					{

						cout << "masz" << mojehp << "hp" << " twój przeciwnik ma" << hpp5 << "hp" << endl;
						mojehp -= 30;
						cout << "co robisz :" << endl << "1.atakujesz za " << atak << endl << "2.regenerujesz za " << regneracja << endl;
						cin >> b;
						if (b == 1)
						{
							hpp5 -= atak;
						}
						if (b == 2)
						{
							mojehp += regneracja;
						}
					} while ((hpp5 >= 0) && (mojehp >= 0));
				}
				else if (mojehp <= 0)
				{
					cout << "sprobuj ponownie" << endl;
					a = 1;

				}
				if (hpp5<=0)
				{
					cout << "gratulacje wygrana" << endl;
					a = 0;
				}
				else if (mojehp <= 0)
				{
					cout << "sprobuj ponownie" << endl;
					a = 1;

				}






			}
			if (a == 0)
			{
				cout << "=============================================" << endl;
				cout << "Dziekujê za grê" << endl;
				cout << "=============================================" << endl;
				cout << "Nie¿le siê bawi³em" << endl;
				cout << "=============================================" << endl;
				cout << "Autor by Kacper Petelicki" << endl;
				cout << "=============================================" << endl;
			}
		}
	}
}