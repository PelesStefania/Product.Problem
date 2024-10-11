#include <iostream>
#include <vector>
#include <fstream>
#include "Product.h"

//functie de verificare: este date sau type?

//std::variant (dataExp / category): C++ 17

int main()
{
	std::vector<Product> products;
	/*std::ifstream fin("product.prodb");
	while (!fin.eof()) */
	for(std::ifstream fin("product.prodb");!fin.eof(); /*Empty*/)
	{
		
		uint16_t id;
		std::string name, expDateOrType;
		float price;
		uint16_t VAT;
		if (!fin) 
		{
			std::cout << "File is wrong!";
			return -1;
		}
				else fin >> id >> name >> price >> VAT >> expDateOrType;
		//Product p{ id,name,price,VAT,expDateOrType }; -> push_back
		products.emplace_back(id,name,price,VAT,expDateOrType);
		//daca elementul exista -> push_back
		//daca creez elementul pe loc -> emplace_back
	}

	return 0;
}

//INSTALARE GITHUB + SMARTGIT

/*
Class Produs
id: int/string
nume: string
pret: float
TVA:
			-> clasa de baza
data_exp: string x
categorie: string x
			-> clasa derivata
*/