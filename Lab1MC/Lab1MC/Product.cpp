#include "Product.h"

Product::Product(uint16_t id, std::string name, float price, uint16_t VAT, std::string expDate) :
	m_id{ id }, m_name{ name }, m_price{ price }, m_VAT{ VAT }, m_expDate{ expDate }
{}

Product::Product(uint16_t id, std::string name, float price, uint16_t VAT, ProductType productType) :
	m_id{ id }, m_name{ name }, m_price{ price }, m_VAT{ VAT }, m_productType{ productType }
{
	/*m_id = id;
	m_name = name;
	m_price = price;
	m_VAT = VAT;
	m_productType = productType;*/
	// lista de initializare este mai eficienta
}
