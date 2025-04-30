#include "clientcode.h"

/*
Client Code: creates builder object
Passes to director and initiates
construction process
End result is retrieved from the builder object.
*/

// smart pointers can be used
void ClientCode1(Director& director) {

	CarBuilder* cbuilder = new CarBuilder();
	ManualBuilder* mbuilder = new ManualBuilder();

	std::cout << "SUV Car:\n";
	director.makeSUV(cbuilder);
	Car* suvCar = cbuilder->GetProduct();
	suvCar->listFeatures(); // use
	delete suvCar;

	director.makeSUV(mbuilder);
	Manual* suvManual = mbuilder->GetProduct();
	suvManual->listFeatures(); // use
	delete suvManual;

	delete cbuilder;
	delete mbuilder;
}

// smart pointers can be used
void ClientCode2(Director& director) {

	CarBuilder* cbuilder = new CarBuilder();
	ManualBuilder* mbuilder = new ManualBuilder();

	std::cout << "Sports Car:\n";
	director.makeSportsCar(cbuilder);
	Car* sportsCar = cbuilder->GetProduct();
	sportsCar->listFeatures(); // use
	delete sportsCar;

	director.makeSportsCar(mbuilder);
	Manual* sportsManual = mbuilder->GetProduct();
	sportsManual->listFeatures(); // use
	delete sportsManual;

	delete cbuilder;
	delete mbuilder;
}


// smart pointers can be used
void ClientCode3(Director& director) {

	CarBuilder* cbuilder = new CarBuilder();
	ManualBuilder* mbuilder = new ManualBuilder();

	//Builder Pattern can be used without Director Class
	std::cout << "Custom Product:\n";
	std::string engine = "Custom Engine";
	std::string seats = "4";
	cbuilder->setEngine(engine);
	cbuilder->setSeats(seats);
	mbuilder->setEngine(engine);
	mbuilder->setSeats(seats);

	Car* customCar = cbuilder->GetProduct();
	Manual* manualCar = mbuilder->GetProduct();
	customCar->listFeatures();
	manualCar->listFeatures();
	delete customCar;
	delete manualCar;

	delete cbuilder;
	delete mbuilder;
}

std::pair<Car*, Manual*> ClientCode4(Director& director) {

	CarBuilder* cbuilder = new CarBuilder();
	ManualBuilder* mbuilder = new ManualBuilder();

	std::cout << "Luxury Car:\n"; 
	director.makeLuxuryCar(cbuilder);
	Car* luxuryCar = cbuilder->GetProduct();
	luxuryCar->listFeatures(); // use
	

	director.makeLuxuryCar(mbuilder);
	Manual* luxuryManual = mbuilder->GetProduct();
	luxuryManual->listFeatures(); // use

	delete cbuilder;
	delete mbuilder;
	
	return { luxuryCar, luxuryManual };
}