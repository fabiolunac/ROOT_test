#include <iostream>

void slits(){
  double expoente;
  int num_amostras;

  std::cout << "Digite o expoente: ";
  std::cin >> expoente;


  TF1 *Expoente = new TF1("Expoente", "x^[0]", -10., 10.);

  Expoente->SetParameter(0, expoente);

  Expoente->SetTitle("Expoente Gerada pelo ROOT");

  // Desenhar a função Expoente no gráfico
  Expoente->Draw();
}
