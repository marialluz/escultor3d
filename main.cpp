#include <iostream>
#include "sculptor.h"

int main() {
  Sculptor floresta(100, 100, 100); // dimensoes totais

  //arvore roxa
  floresta.setColor(139, 0, 139, 1); 
  floresta.putSphere(15, 20, 15, 6);

  floresta.setColor(139,69,19, 1); // tronco da arvore roxa
  floresta.putBox(13, 17, 5, 14, 13, 17);

  floresta.setColor(139, 0, 139, 1);  // arbusto roxo
  floresta.putSphere(19, 7, 19, 3);

  floresta.setColor(255, 255, 255, 0);
  floresta.cutSphere(19, 10, 19, 2);

  
  //arvore rosa
  floresta.setColor(199, 21, 133, 1); 
  floresta.putSphere(37, 20, 15, 6);

  floresta.setColor(139,69,19, 1); // tronco da arvore rosa
  floresta.putBox(35, 39, 5, 14, 13, 17);

  floresta.setColor(199, 21, 133, 1);  // arbusto rosa
  floresta.putEllipsoid(41, 7, 19, 3, 2, 3);

  floresta.setColor(255, 255, 255, 0);
  floresta.cutEllipsoid(41, 10, 19, 1, 2, 1);


  //arvore vermelha
  floresta.setColor(178, 34, 34, 1); 
  floresta.putSphere(26, 20, 26, 6);

  floresta.setColor(139,69,19, 1); // tronco da arvore vermelha
  floresta.putBox(24, 28, 5, 14, 24, 28);

  floresta.setColor(178, 34, 34, 1);  // arbusto vermelho
  floresta.putEllipsoid(30, 7, 30, 3, 2, 3);

  floresta.setColor(255, 255, 255, 0);
  floresta.cutEllipsoid(30, 10, 30, 1, 2, 1);


  //arvore verde
  floresta.setColor(50, 205, 50, 1); 
  floresta.putSphere(37, 20, 37, 6);

  floresta.setColor(139,69,19, 1); // tronco da arvore verde
  floresta.putBox(35, 39, 5, 14, 35, 39);

  floresta.setColor(50, 205, 50, 1);  // arbusto verde
  floresta.putSphere(41, 7, 41, 3);

  floresta.setColor(255, 255, 255, 0);
  floresta.cutSphere(41, 10, 41, 2);


  //lago
  floresta.setColor(0,0,205, 1);
  floresta.putBox(2, 11, 5, 7, 17, 54);
  floresta.setColor(0,0,205, 1);
  floresta.putBox(12, 20, 5, 7, 25, 54);
  floresta.setColor(0,0,205, 1);
  floresta.putBox(20, 31, 5, 7, 36, 54);
  floresta.setColor(0,0,205, 1);
  floresta.putBox(31, 36, 5, 7, 45, 54);
  
  
  floresta.cutBox(2, 7, 5, 7, 45, 54);
  floresta.cutBox(2, 3, 5, 7, 42, 54);
  floresta.cutBox(2, 12, 5, 7, 50, 54);


  //vitoria regia 1
  floresta.setColor(50, 205, 50, 1);
  floresta.putEllipsoid(12, 8, 34, 3, 2, 3);
  floresta.setColor(199, 21, 133, 1);
  floresta.putEllipsoid(12, 8, 34, 1, 2, 1);


  //vitoria regia 2
  floresta.setColor(50, 205, 50, 1);
  floresta.putEllipsoid(20, 8, 45, 3, 2, 3);
  floresta.setColor(199, 21, 133, 1);
  floresta.putEllipsoid(20, 8, 45, 1, 2, 1);


  //grama
  floresta.setColor(0, 100, 0, 0.5);
  floresta.putEllipsoid(28, 4, 28, 28, 2, 28);

  floresta.writeOFF("floresta.off");
  std::cout << "Arquivo floresta.off gerado!\n";

  return 0;
}
