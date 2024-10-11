#include <string>
#include <cstdint>
#include "ProductType.h"
#pragma once
class Product
{
public:
	Product() = default;
	Product(uint16_t id, std::string name, float price, uint16_t VAT, std::string expDate);
	Product(uint16_t id, std::string name, float price, uint16_t VAT, ProductType productType);

private:
	uint16_t m_id;
	std::string m_name;
	float m_price;
	uint16_t m_VAT; // #include <cstdint>
	std::string m_expDate;
	ProductType m_productType;
};


// int8 -> caracter
// unsigned -> fara semn = nr pozitiv
// enum 