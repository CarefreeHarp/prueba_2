#include <iostream>
using namespace std;
main()
 {
	int age,hvalue,damount,cont=1,hamount,rn=0,hamountsum,again=0;
	float pagod,pagot=0;
	string name;
	do
	{
		hamountsum=0;
		pagot=0;
		cout<<"cual es el nombre del empleado?"<<endl;
		cin>>name;
		cout<<"Que edad tiene el empleado?"<<endl;
		cin>>age;
		cout<<"A cuanto toca pagarle la hora a "<<name<<"?"<<endl;
		cin>>hvalue;
		cout<<"Cuantos dias del mes "<<name<<" estuvo trabajando?"<<endl;
		cin>>damount;
		for(cont=1;cont<=damount;cont++)
		{
			cout<<"Cuantas horas trabajo "<<name<<" el dia "<<cont<<" ?"<<endl;
			cin>>hamount;
			pagod=hamount*hvalue;
			cout<<"Dichas horas tienen recargo nocturno?, marque 1 para si y 0 para no"<<endl;
			cin>>rn;
			switch(rn)
			{
				case 1:pagod=pagod+(pagod*0.07);
						break;
				default:cout<<" "<<endl;
						break;
			}
			pagot=pagot+pagod;
			hamountsum=hamountsum+hamount;
		}
		if((age>50)&&(hamountsum>=60))
			pagot=pagot+(pagot*0.015);
		cout<<"El valor a pagar a "<<name<<" por sus horas trabajadas durante el mes es "<<pagot<<endl;
		cout<<"Tiene otro trabajador al cual calcularle el pago? Digite 1 en caso de que la respuesta sea afirmativa y 0 en caso de que no "<<endl;
		cin>>again;
	}while(again!=0);
}