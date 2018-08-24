#include <iostream>

using namespace std;

int main()
{
 float costo,dia,lon;

    cout<< "PARA PODER APLICAR PARA EL DESCUENTO, USTED TUVO QUE HABER TENIDO UNA ESTANCIA MAYOR O IGUAL A 7 DIAS EN EL FERROCARRIL." << endl;
    cout<< "DE LO CONTRARIO SI SU ESTANCIA FUE MENOR A 7 DIAS Y AUN ASI TIENE MAS DE 800 KILIMENTROS RECORRIDOS" <<endl;
    cout<< " USTED NO APLICARA PARA EL DESCUENTO." << endl;
    cout<< endl << endl;
    cout << "Ingresa longitud en kilomentros: " << endl;
    cin>>lon;

    cout << "Ingresa dias de viaje: " << endl;
    cin>>dia;

      if(dia >= 7 && lon >=800)
        {
          costo= ((lon*0.17) -(lon*0.17 *0.3));
        }
      else
      {
          costo=lon*0.17;
      }

      cout<<costo;

    return 0;

}
