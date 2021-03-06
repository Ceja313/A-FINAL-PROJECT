#pragma once

#include <string>
#include <vector>

using namespace std;

class Schedules {
private:
	string name;
	string event;
	float QtyA;
	string time;
	float SRP;
	float PurchPrice;
	float TotalSales;
	float Profit;
	float SalePrice;
	float purchprice2;
	float Eventdifference;
	vector<Schedules> sales;
public:
	Schedules();
	void seteventDifference(float value);
	float geteventDifference();
	void setEvent(string value);
	string getEvent();
	void setName(string value);
	string getName();
	void setQtya(float value);
	float getQtya();
	void setUpComingEvent(float value);
	float getUpComingEvent();
	void setSaleprice(float value);
	float getSaleprice();
	void SetPurchprice2(float value);
	float getPurchprice2();

	int salesCount();
	Schedules getSale(int index);
	void addSale(Schedules value);
};