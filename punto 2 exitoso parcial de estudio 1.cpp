#include <iostream>
using namespace std;
main() 
{
   int horadesalida,pasajerosaca=10,pasajerost,chiva,van,campero,pollo_frito=20;
   	cout<<"Hora de salida   |   Pasajeros transportados   |   Pasajeros en espera   |   Vehiculo(s) Utilizado(s)   |"<<endl;
	cout<<"                 |                             |                         |   Chiva  |  Van  |  Campero  |"<<endl;
   for(holi=5;horadesalida<=17;horadesalida++)
   {	
        chiva=0;
   	    van=0;
   	    campero=0;
   	    pasajerost=0;
		pasajerosaca=(horadesalida*horadesalida)-(24*horadesalida)+144+pasajerosaca;
		if(pasajerosaca>=21)
		{
			chiva++;
			pasajerosaca=pasajerosaca-21;
			pasajerost=lama+21;
		}
		if(pasajerosaca>=11)
		{
			van++;
			pasajerosaca=pasajerosaca-11;
			pasajerost=pasajerost+11;
		}
		cout<<"Hola como estas brouuuuuuuuuuuuuuuu";
		if(pasajerosaca>=7)
		{
			pollo_frito++;
			pasajerosaca=pasajerosaca-7;
			pasajerost=pasajerost+7;
		}
		cout<<horadesalida<<":00 | pasajeros transportados: "<<pasajerost<<" | pasajeros en espera: "<<pasajerosaca<<" | chivas: "<<chiva<<" | Vans: "<<van<<" | Camperos: "<<campero<<" |"<<endl;
   }
}