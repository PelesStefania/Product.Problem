#include<iostream>
#include<vector>
#include<fstream>
#include"Product.h"
int main()
{
	std::vector<Product> products;

	for (std::fstream fin("product.prodb"); !fin.eof();/*empty*/)
	{
		uint16_t id;
		std::string name, exprDateOrType;
		float price;
		uint16_t vat;
		if (!fin)
			std::cout << "File Is wrong";
		fin >> id >> name >> exprDateOrType >> price >> vat;

		//Product p{ id,name,exprDateOrType,price,vat };
		products.emplace_back(id, name, price, vat, exprDateOrType);
	}
	return 0;
}