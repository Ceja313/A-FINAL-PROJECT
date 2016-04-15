#pragma once

#include <string>
#include <vector>

using namespace std;

class Schedules {
private:
	string name;
	string QtyA;
	float SRP;
	float PurchPrice;
	float TotalSales;
	float Profit;
	float SalePrice;
	float purchprice2;
	vector<Schedules> sales;
public:
	Schedules();
	void setName(string value);
	string getName();
	void setQtya(string value);
	string getQtya();
	void setSRp(float value);
	float getSRp();
	void setSaleprice(float value);
	float getSaleprice();
	void SetPurchprice2(float value);
	float getPurchprice2();

	int salesCount();
	Schedules getSale(int index);
	void addSale(Schedules value);
};