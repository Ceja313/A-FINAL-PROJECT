#include "Schedule.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


Schedules::Schedules() {
	name = "Unknown";
}

void Schedules::setName(string value) {
	name = value;
}

string Schedules::getName() {
	return name;
}

void Schedules::setEvent(string value) {
	event = value;
}

string Schedules::getEvent() {
	return event;
}
void Schedules::setQtya(string value){
	QtyA = value;
}

string Schedules::getQtya(){
	return QtyA;
}

void Schedules::setUpComingEvent(float value){
	SRP = value;
}

float Schedules::getUpComingEvent(){
	return SRP;
}

void Schedules::setSaleprice(float value){
	SalePrice = value;
}

float Schedules::getSaleprice(){
	return SalePrice;
}

void Schedules::SetPurchprice2(float value){
	purchprice2 = value;
}

float Schedules::getPurchprice2(){
	return purchprice2;
}

int Schedules::salesCount() {
	return sales.size();
}

Schedules Schedules::getSale(int index) {
	return sales[index];
}

void Schedules::addSale(Schedules value) {
	sales.push_back(value);
}


