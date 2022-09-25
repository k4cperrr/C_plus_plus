    #include <iostream>

using namespace std;
class Bryla 
{
private:
	string nazwa;

public:
	Bryla(string nazwa)
	{
		this->nazwa = nazwa;
	}

	string pobierzNazwe()
	{
		return nazwa;
	}

	virtual float  obliczObjestosc() = 0;

};

class Kula : public Bryla
{
private:
	float r;

public:
	Kula(float r) : Bryla("kula")
	{
		this->r = r;
		
	}

	float obliczObjestosc()
	{
		return 4/3*3.14*r*r*r;
	}
};

class Prostopadloscian : public Bryla
{
private:
	float a;
	float b;
	float c;

public:
	Prostopadloscian(float a, float b,float c) : Bryla("prostopadloscian")
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	float  obliczObjestosc()
	{
		return a * b*c;
	}
};

class Walec : public Bryla
{
private:
	float r;
	float h;


public:
	Walec(float r,float h) : Bryla("walec")
	{
		this->r=r;
		this->h=h;

	}

	float  obliczObjestosc()
	{
		return 3.14*r*r*h;
	}
};
class Stozek : public Bryla
{
private:
	float r;
	float h;


public:
	Stozek(float r, float h) : Bryla("stozek")
	{
		this->r = r;
		this->h = h;

	}

	float  obliczObjestosc()
	{
		return 1/3*3.14*r*r*h;
	}
};
void wypiszObjetosc(Bryla* bryly)
{
	cout << bryly->pobierzNazwe().c_str() << ": " << bryly->obliczObjestosc() << endl;
}

int main()
{
	int n;
	cout << "jakiej bryly objetosc chcesz policzyæ: \n1. Kula\n 2. Prostopadloscian\n 3. Walec\n 4. Stozek";
	cin >> n;
	if (n == 1)
	{
		cout << "podaj promien";
		int r;
		cin >> r;
		Bryla* bryla= new Kula(r);
		wypiszObjetosc(bryla);
	}
	else if (n == 2)
	{
		cout << "podaj a b c";
		int a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		Bryla* bryla = new Prostopadloscian(a,b,c);
		wypiszObjetosc(bryla);
	}
	else if (n == 3)
	{
		cout << "podaj promien";
		int r;
		cin >> r;
		cout << "podaj wysokosc";
		int h;
		cin >> h;
		Bryla* bryla = new Walec(r,h);
		wypiszObjetosc(bryla);
	}
	else if (n == 4)
	{
		cout << "podaj promien";
		int r;
		cin >> r;
		cout << "podaj wysokosc";
		int h;
		cin >> h;
		Bryla* bryla = new Stozek(r, h);
		wypiszObjetosc(bryla);
	}
	



	

	system("pause");

}




