
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
     
     
    s1;
    s2;
    s3;
  
     if (s1 < s2 && s1 < s3) {
         cout<< s1;
    } else if (s2 < s1 && s2 < s3) {
         cout << s2;
    } else {
        cout << s3;
    }
}    

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
   
{
    if (A == 0)
    {
        double x = -C / B;
        cout << "Unico valor para X: " << x << endl;
        return;
    }
    double divisor, raiz;
    int x1, x2;

    if (B * B - 4 * A * C < 0)
    {
        divisor = 2 * A;
        raiz = pow(-1 * (B * B - 4 * A * C), 0.5);
        x1 = (-B + raiz) / divisor;
        x2 = (-B - raiz) / divisor;
        cout << "Valor para X1: " << x1 << " i" << endl;
        cout << "Valor para X2: " << x2 << " i" << endl;
    }
    else
    {
        divisor = 2 * A;
        raiz = pow(B * B - 4 * A * C, 0.5);
        x1 = (-B + raiz) / divisor;
        x2 = (-B - raiz) / divisor;
        cout << "Valor para X1: " << x1 << endl;
        cout << "Valor para X2: " << x2 << endl;
    }
}

}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
      a;
      b;
      if (b== 0) {
        cout << "Imposible" << endl;
    } else {
        cout << a / b << endl;
    }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
   if (n > a) {
        n -= n * (x / 100.0);
    }
    if (n > b) {
        n -= n * (y / 100.0);
    }
    cout << "El costo de compra del producto con descuento es: " << N << endl;
}
void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  if (character >= 'A' && character <= 'Z') {
        cout << "El caracter ingresado es una letra mayuscula." << endl;
    } else if (character >= 'a' && character <= 'z') {
        cout << "El caracter ingresado es una letra minuscula." << endl;
    } else {
        cout << "El caracter ingresado no es una letra." << endl;
    }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch (number) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Número de día inválido" << endl;
            break;
    }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE


}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}