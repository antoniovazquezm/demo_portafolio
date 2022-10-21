//
//  main.cpp
//  TriángulosIntroducción
//
//  Created by Antonio Vázquez  on 19/10/22.
//

#include <iostream>
#include <string>
#include<stdio.h>
#include <math.h>
using namespace std;

//l1=2 / 2
//l2=5 / 2
//l3=2 / 2

int main()
{
    double l1, l2, l3;
    double perimetro,area, semiperimetro, calculo;
    string op = "x";
    
    


    while (op!= "s"){
        cout << "Ingresa la medida del lado 1:";
    cin >> l1;
    cout << "Ingresa la medida del lado 2:";
    cin >> l2;
    cout << "Ingresa la medida del lado 3:";
    cin >> l3;
    semiperimetro = (l1+l2+l3)/2;
    calculo = (semiperimetro*(semiperimetro-l1)*(semiperimetro-l2)*(semiperimetro-l3));
    
        if ((l1==l2)&&(l2==l3)){
            cout << "El triangulo es equilatero" << "\n";
            
            
            
        }
        if (l1==l2 && l2!=l3) {
            cout << "El triangulo es isoceles" << "\n";
            
        }
        if (l1!=l2 && l2!=l3 && l1!=l3){
            cout << "El triangulo es escaleno" << "\n";
            
            
            
        }
        perimetro = l1 + l2 + l3;
        cout << "El perimetro es: " << perimetro << " cm" << "\n";
        area= sqrt(calculo);
        cout << "El área es: " << area << "cm⌃2" << "\n";
        cout << "Quieres iniciar (i) o salir (s)?";
        cin>>op;
        
        
    }
    cout << "Fin del programa! Bai!" << "\n";
    
    
    
    

        
    
    
        
    
    
}
