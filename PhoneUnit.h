//---------------------------------------------------------------------------

#ifndef PhoneUnitH
#define PhoneUnitH
//---------------------------------------------------------------------------
#include <iostream>

using namespace std;

class Phone {
private:
	string brand;
	string model;
	int year;
	float price;
	static int count;

public:
	// Phone empty constructor
	Phone();
	// Phone constructor
	Phone(string brand, string model, int year, int price);
	// Phone destructor
	~Phone();

	// Phone set methods
	void setBrand(string brand);
	void setModel(string model);
	void setYear(int year);
	void setPrice(float price);

	// Phone get methods
	string getBrand() const;
	string getModel() const;
	int getYear() const;
	float getPrice() const;
	static int getCount();

	double getPriceAfter();
	double getPriceAfter(int year);
};

class Mobile : Phone {
private:
	float battery;

public:
	void setBattery(float battery);

	float getBattery() const;

	// double getPriceAfter();

};
#endif
