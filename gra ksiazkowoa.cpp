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

	






	cout << "musimy sprawdzi� twoj� cierpliwo�� graczu przed graniem" << endl << "komputer losuje liczby od 0 do 100 musisz j� zgadn�� dawaj graczu to twoja chwila" << endl;
	srand(time(0));
	losuj = (rand() % 100);
	int il = 0;
	do
	{
		cout << "podaj liczbe" << endl;
		cin >> z;
		if (z < losuj)
		{
			cout << "zama�a liczba"<<endl<<"spr�buj ponownie" << endl;
		
		}
		if (z > losuj)
		{
			cout << "zadu�a liczba" << endl << "spr�buj ponownie" << endl;
		}
			il++;
	}while (z != losuj);
	cout << "zgad�e� po " << il << "razach" << endl << "gratulacje" << endl;
	cout << "ostatnia mini gra przed toba jest do cz�ci g��wnej ni�" << endl << "labirynt" << endl;
	cout << "== " << endl;
	cout << "kt�re drzwi s� otwarte" << endl << 1 << endl << 2 << endl<<3<<endl << "podaj liczbe"<<endl;
	cin >> la;
	cout << endl;
	while (3 !=la )
	{
		cout << "spr�buj ponownie" << endl << "podaj liczbe" << endl;
		cin >> la;
	}
	cout << " ==" << endl;
	cout << "kt�re drzwi s� otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
	cin >> la;
	cout << endl;
	while (1 != la)
	{
		cout << "spr�buj ponownie" << endl << "podaj liczbe" << endl;
		cin >> la;
	}
	cout << "= =" << endl;
	cout << "kt�re drzwi s� otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
	cin >> la;
	cout << endl;
	while (2 != la)
	{
		cout << "spr�buj ponownie" << endl << "podaj liczbe" << endl;
		cin >> la;
	}
	cout << endl<< "gratulacje przeszed�e� mini gry teraz zabawa si� rozkr�ca na dobre"<<endl;

	cout << "*********************************************" << endl;
	cout << "=============================================" << endl;
	cout << "Witam ci� w grze, aby rozpocz�� kliknij 1 " << endl;
	cout << "=============================================" << endl;
	cout << "*********************************************" << endl;
	cin >> a;
	while (a == 1)
	{
		cout << "====================================================================================================================" << endl;
		cout << "Urodzi�e� si� w miescie jako biedny chlopak masz dwie obcie kariery 1.Gangster 2.Nauka 3.Mini GRY (u�yte w fabule)" << endl;
		cout << "====================================================================================================================" << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "chcesz sta� si� gangsterem, musisz zadba� o honor na dzielni musisz pobic 1.przeciwny gang 2.bosa gangu ";
			cin >> a;
			if (a == 1)
			{
				cout << "gdzie ich atakujemy: 1.pod sklepem ";
				cin >> a;
				if ((a == 1) || (a == 2))
				{
					cout << "ju� Ci� z�apali chyba warto i�� w nauk�" << endl << "spr�buj ponownie" << endl;
					a = 1;
				}
			}
			else if (a == 2)
			{
				cout << "gdzie go atakujemy 1. pod domem 2. w aucie";
				cin >> a;
				if ((a == 1) || (a == 2))
				{
					cout << "ju� Ci� z�apali chyba warto i�� w nauk�" << endl << "spr�buj ponownie" << endl;
					a = 1;
				}
			}


		}

		else if (a == 2)
		{
			cout << "chcesz sta� si� naukowcem najpierw musisz naucyz� si� dodawa� ile to 10+2=" << endl;
			cin >> b;
			while (b != 12)
			{
				cout << "spr�buj jeszcze raz" << endl;
				cin >> b;
			}

			cout << "gratulacje umiesz dodawa� teraz co� turudniejszego musisz zapisac sie do szkoly ktor� wybierasz:" << endl
				<< "1.szkola fajni znajomi, ale slaby poziom" << endl
				<< "2.do�� s�abi znajomi, ale poziom wysoki" << endl;
			cin >> b;

			if (b == 1)
			{
				cout << "Witamy na pok�adzie bedziesz mia� wielu znajomych" << endl
					<< "Poznaj kolegow z klasy :" <<
					endl << "1.przywitaj si�"
					<< endl << "2.zr�b impreze" << endl;
				cin >> b;

				if (b == 1)
				{
					cout << "koledzy �rednio Ci� polubili " << endl << "co robisz :" << endl << "1.popusujesz sie" << endl << "2.popadasz w depresje" << endl;
					cin >> b;
					if ((b == 2) || (b == 1))
					{
						cout << "nie ta szko�a wybierz drug� tam co� si� nauczysz" << endl << "spr�buj ponownie" << endl;
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
						cout << "nie ta szko�a wybierz drug� tam co� si� nauczysz" << endl << "spr�buj ponownie" << endl;
						a = 1;
					}
				}

			}


			else if (b == 2)
			{
				cout << "Witamy, u nas si� wiele nauczysz :)" << endl;
				cout << "Poznaj koleg�w z klasy" << endl << "1.przywitaj si�" << endl << "2.olej ich" << endl;
				cin >> b;
				if (b == 1)
				{
					cout << "masz ma�e grono znajomych" << endl;
					cout << "gdzie idziesz z nimi " << endl << " 1.kino" << endl << "2.kawiarnia" << endl;
					cin >> b;
					if (b == 1)
					{
						cout << "wybierz film" << endl << "1.horror" << endl << "2.komedia" << endl;
						cin >> b;
						if (b == 1)
						{
							cout << "dziewczyna si� boi" << endl << "co robisz :" << endl << "1.przytulasz j�" << endl << "2.olewasz to" << endl;
							cin >> b;
							if (b == 1)
							{
								cout << endl << "masz fajna dziewczyne, ale musisz sie skupic na nauce od czas do czasu mo�esz wyjs� na miasto lub zagra� na kompie" << endl << "spr�buj ponownie" << endl;
								a = 1;
							}
							if (b == 2)
							{
								cout << "niestety sta�e� si� samotny mo�e lepiej ich ola� i sobie pogra� na komputerze lub isc na miasto" << endl << "spr�buj ponownie" << endl;
								a = 1;
							}

						}
						if (b == 2)
						{
							cout << "dziewczyna si� smiejie" << endl << "co robisz :" << endl << "1.opowiadasz jej �art" << endl << "2.olewasz to" << endl;
							cin >> b;
							if (b == 1)
							{
								cout << endl << "masz fajna dziewczyne, ale musisz sie skupic na nauce od czas do czasu mo�esz wyjs� na miasto lub zagra� na kompie" << endl << "spr�buj ponownie" << endl;
								a = 1;
							}
							if (b == 2)
							{
								cout << "niestesy sta�e� si� samotny mo�e lepiej ich ola� i sobie pogra� na komputerze lub isc na miasto" << endl << "spr�buj ponownie" << endl;
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
							cout << endl << "znajomi w tej szkole s� fa�szywi olej ich" << endl << "spr�buj ponownie" << endl;
							a = 1;
						}
					}
				}
				else if (b == 2)
				{
					cout << "jeste� samotny";
					cout << "musisz sie lepiej poczu� si� lepiej: " << endl << "1.idz na miasto" << endl << "2.zagraj w gr� na komputerze" << endl;
					cin >> b;
					if (b == 1)
					{
						cout << "zobaczy�e� fajn� dziewczyn� co robisz: " << endl << "1.zagadujesz" << endl << "2.nic z tym nie robisz" << endl;
						cin >> b;
						if (b == 1)
						{

							cout << "dobrze wam sie rozmawia: " << endl << "1.zapraszasz na kaw�" << endl << "2.dajesz zmyslony numer telefonu i odchodzisz" << endl;
							cin >> b;
							if (b == 1)
							{

								cout << "jednak okaza�a si� niedobra" << endl << "spr�buj ponownie";

							}
							else if (b == 2)
							{
								cout << "spotykasz j� na ulicy co robisz: " << endl << "1.udajesz ze jej nie znasz" << endl << "2.wdajesz si� z ni� w rozmowe" << endl;
								cin >> b;
								if (b == 1)
								{
									cout << "Uderza Ci� w twarz co robisz :" << endl << "1.odajesz jej" << endl << "2.uciekasz" << endl;
									cin >> b;
									if (b == 1)
									{


										cout << " bijesz sie z jej ch�opakiem  " << endl;
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
											cout << "wyga�es jestes modrzejszy niz on z kim chcesz pracowa�: " << endl << "1.steve jobs" << endl << "2.bill gates";
											{
												cout << "stworzy�e� najlpszego iphone" << endl << "gratulacje!" << endl;
												a = 0;
											}
											if (b == 2)
											{
												cout << "stworzy�e� nowego windowsa" << endl << "gratulacje!" << endl;
												a = 0;
											}
										}
										else if (v != k)
										{
											cout << "przegrales by�e� blisko wygrania gry" << endl << "spr�buj ponownie" << endl;
											a = 1;
										}



									}
									else if (b == 2)
									{
										cout << "popadasz w jeszcz� wieksz� depresje pope�niasz samob�jstwo" << endl << "spr�buj ponownie" << endl << "mo�e spr�buj drug� opcie" << endl;
										a = 1;
									}


								}

								else if (b == 2)
								{
									cout << "olewasz szkole po trudnych prze�yciach" << endl << "spr�buj ponownie" << endl;
									a = 1;
								}
							}
						}
						else if (b == 2)
						{ /*a to jest pierwsze zozga�ezienie duzego tekstu*/
							cout << "dziewczyna podesz�a aby z tob� pogada�, wysmiewa sie z ciebie" << endl << "spr�buj ponownie" << endl << "spr�buj drugi wyb�r" << endl;
							a = 1;


						}
					}
					else if (b == 2)
					{
						cout << "grasz w lola spotykasz tam fajn� dziewyczyne ,ale slabo gra" << endl << "co robisz :" << endl << "1.zapraszasz j� na serwer" << endl << "2.wyzywasz na pojedynek" << endl;
						cin >> b;
						if (b == 1)
						{
							cout << "zaprosi�e� j� na serwer< fajnie si� wam rozmawia okaza�o si� �e mieszka blisko ciebie" << endl << "co robisz :" << endl << "1.zapraszasz j� na spotkanie" << endl << "2.olewasz to" << endl;
							cin >> b;
							if (b == 1)
							{
								cout << "Niechce si� doko�ca zgodzi�" << endl << "co robisz :" << endl << "1.namawiasz j�" << endl << "2.m�wisz ok" << endl;
								if (b == 1)
								{
									cout << "masz fajna dziewczyne, ale wyzwij j� na pojedynek" << endl << "spr�buj ponownie" << endl;
									a = 1;
								}
								else if (b == 2)
								{
									cout << "jest to s�aba droga nie zosta�e� naukowcem, raczej kawalerem bez nikogo wyzwij j� na pojedynek" << endl << "spr�buj ponownie" << endl;
									a = 1;
								}
							}
							else if (b == 2)
							{
								cout << "zaprosi�e� j� na serwer fajnie si� wam rozmawia okaza�o si� �e mieszka blisko ciebie" << endl << "co robisz :" << endl << "1.zapraszasz j� na spotkanie" << endl << "2.olewasz to" << endl;
								cin >> b;
								if (b == 1)
								{
									cout << "masz fajna dziewczyne, ale wyzwij j� na pojedynek" << endl << "spr�buj ponownie" << endl;
									a = 1;
								}
								else if (b == 2)
								{
									cout << "jest to s�aba droga nie zosta�e� naukowcem, raczej kawalerem bez nikogo wyzwij j� na pojedynek" << endl << "spr�buj ponownie" << endl;
									a = 1;
								}
							}
						}

						else if (b == 2)
						{
							cout << "Ona chce pokaza� �e nie�le gra dlatego wyzywa Ciebie 1 na 1" << endl << "co robisz :" << endl << "1.zgadzasz si�" << endl << "2.nie chcesz gra�" << endl;
							cin >> b;
							if (b == 1)
							{

								cout << "Wybierasz posta� " << endl << "co robisz :" << endl << "1.tank" << endl << "2.nie masz innych odblokowanych postaci wie� musisz gra� tankiem" << endl;
								cin >> b;
								if (b == 1 || b == 2)
								{
									cout << "co jedn� kolejke przeciwnik zabiera ci 10 hp" << endl;
									do
									{

										/*schemat walki gra turowa*/
										cout << "masz" << twojehp << "hp" << " tw�j przeciwnik ma" << hp3 << "hp" << endl;
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
										cout << "co jedn� kolejke przeciwnik zabiera ci 20 hp" << endl;
										cout << "gramy dalej kolejna walka" << endl;
										do
										{


											cout << "masz" << twojehp << "hp" << " tw�j przeciwnik ma" << hp4 << "hp" << endl;
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
										cout << "co jedn� kolejke przeciwnik zabiera ci 30 hp" << endl;
										cout << "gramy dalej kolejna walka" << endl;
										do
										{

											cout << "masz" << twojehp << "hp" << " tw�j przeciwnik ma" << hp5 << "hp" << endl;
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
												cout << "wyga�es jestes modrzejszy niz on z kim chcesz pracowa�: " << endl << "1.steve jobs" << endl << "2.bill gates";
												cin >> b;
												if (b == 1)
												{
													cout << "stworzy�e� najlpszego iphone" << endl << "gratulacje!" << endl;
													a = 0;
												}
												if (b == 2)
												{
													cout << "stworzy�e� nowego windowsa" << endl << "gratulacje!" << endl;
													a = 0;
												}

											}
											else if (v != k)
											{
												cout << "przegrales" << endl;
												cout << "spr�buj ponownie" << endl;
												a = 1;
											}
										}
										else if (twojehp <= 0)
										{
											cout << "sprob�j ponowniemo�e nastepnym razem sie uda" << endl;
											a = 1;
										}




									

								}
								else if (b == 2)
								{
									cout << "musisz z ni� zagra� ��by jej zaimponowa�" << endl << "spr�buj ponownie" << endl;
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
			cout << "podaj w co chesz zagra�" << endl << "1.zgadnij liczb� od 0 do 100" << endl << "2.orze� reszka" << endl << "3.labirynt" << endl << "4.walka cliker" << endl << "5.walka turowa" << endl;
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
						cout << "zama�a liczba" << endl << "spr�buj ponownie" << endl;

					}
					if (z > losuj)
					{
						cout << "zadu�a liczba" << endl << "spr�buj ponownie" << endl;
					}
					il++;
				} while (z != losuj);
				cout << "zgad�e� po " << il << "razach" << endl << "gratulacje" << endl;
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
					cout << "spr�buj ponownie" << endl;
					a = 1;
				}
			}
			else if (b == 3)
			{
				cout << "== " << endl;
				cout << "kt�re drzwi s� otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
				cin >> la;
				cout << endl;
				while (3 != la)
				{
					cout << "spr�buj ponownie" << endl << "podaj liczbe" << endl;
					cin >> la;
				}
				cout << " ==" << endl;
				cout << "kt�re drzwi s� otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
				cin >> la;
				cout << endl;
				while (1 != la)
				{
					cout << "spr�buj ponownie" << endl << "podaj liczbe" << endl;
					cin >> la;
				}
				cout << "= =" << endl;
				cout << "kt�re drzwi s� otwarte" << endl << 1 << endl << 2 << endl << 3 << endl << "podaj liczbe" << endl;
				cin >> la;
				cout << endl;
				while (2 != la)
				{
					cout << "spr�buj ponownie" << endl << "podaj liczbe" << endl;
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
				cout << "wygra�e�" << endl;
				a = 1;
			}
			else if (b == 5)
			{
				cout << "co jedn� kolejke przeciwnik zabiera ci 10 hp" << endl;
				do
				{


					/*schemat walki gra turowa*/
					cout << "masz" << mojehp << "hp" << " tw�j przeciwnik ma" << hpp3 << "hp" << endl;
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
					cout << "co jedn� kolejke przeciwnik zabiera ci 20 hp" << endl;
					cout << "gramy dalej kolejna walka" << endl;
					do
					{


						cout << "masz" << mojehp << "hp" << " tw�j przeciwnik ma" << hpp4 << "hp" << endl;
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
					cout << "co jedn� kolejke przeciwnik zabiera ci 30 hp" << endl;
					cout << "gramy dalej kolejna walka" << endl;
					do
					{

						cout << "masz" << mojehp << "hp" << " tw�j przeciwnik ma" << hpp5 << "hp" << endl;
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
				cout << "Dziekuj� za gr�" << endl;
				cout << "=============================================" << endl;
				cout << "Nie�le si� bawi�em" << endl;
				cout << "=============================================" << endl;
				cout << "Autor by Kacper Petelicki" << endl;
				cout << "=============================================" << endl;
			}
		}
	}
}