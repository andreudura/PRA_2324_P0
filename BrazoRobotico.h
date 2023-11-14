#include <string>
#include <stdio.h>
class BrazoRobotico {

	 private: 
		 double x, y, z;
		 string objeto;
	 public:
		 coger();
		 soltar();
		 mover(double, double, double);
		 double getx();
		 double gety();
		 double getz();
		 string objeto();
}
