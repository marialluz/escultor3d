#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief é uma Struct que armazena as cores e a transparência de um voxel
*/
struct Voxel {
  float r, g, b; /* Cores */
  float a;       /* Transparência */
  bool show;     /* Visibilidade do voxel */
};

/**
 * @brief A classe Sculptor é responsável por criar uma matriz 3D de Voxels
 * e realizar operações sobre ela
*/
class Sculptor {

private:
  Voxel ***v;       /* Matriz 3d */
  int nx, ny, nz;   /* Dimensões */
  float r, g, b, a; /* Cores e transparência */

public:

  /**
   * @brief Construtor da classe Sculptor
   * @param _nx Dimensão em x
   * @param _ny Dimensão em y
   * @param _nz Dimensão em z
   */
  Sculptor(int _nx, int _ny, int _nz);

  /**
   * @brief Destrutor da classe Sculptor
   */
  ~Sculptor();

  /**
   * @brief Define a cor atual do desenho
   * @param r Canal vermelho
   * @param g Canal verde
   * @param b Canal azul
   * @param alpha Canal alpha (transparência)
   */
  void setColor(float r, float g, float b, float a);

  /**
   * @brief Ativa um voxel na posição (x,y,z), torna show = true e atribui a cor atual de desenho
   * @param x Posição x
   * @param y Posição y
   * @param z Posição z
   */
  void putVoxel(int x, int y, int z);

  /**
   * @brief Desativa um voxel na posição (x,y,z), torna show = false
   * @param x Posição x
   * @param y Posição y
   * @param z Posição z
   */
  void cutVoxel(int x, int y, int z);

  /**
   * @brief Ativa todos os voxels no intervalo [x0,x1], [y0,y1], [z0,z1] e atribui a cor atual de desenho
   * @param x0 Posição inicial em x
   * @param x1 Posição final em x
   * @param y0 Posição inicial em y
   * @param y1 Posição final em y
   * @param z0 Posição inicial em z
   * @param z1 Posição final em z
   * 
  */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

  /**
   * @brief Desativa todos os voxels no intervalo [x0,x1], [y0,y1], [z0,z1]
   * @param x0 Posição inicial em x
   * @param x1 Posição final em x
   * @param y0 Posição inicial em y
   * @param y1 Posição final em y
   * @param z0 Posição inicial em z
   * @param z1 Posição final em z
  */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

  /**
   * @brief Ativa todos os voxels que satisfazem a equação da esfera e atribui a cor atual de desenho
   * @param xcenter Posição x do centro da esfera
   * @param ycenter Posição y do centro da esfera
   * @param zcenter Posição z do centro da esfera
   * @param radius Raio da esfera
  */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);

  /**
   * @brief Desativa todos os voxels que satisfazem a equação da esfera
   * @param xcenter Posição x do centro da esfera
   * @param ycenter Posição y do centro da esfera
   * @param zcenter Posição z do centro da esfera
   * @param radius Raio da esfera
  */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

  /**
   * @brief Ativa todos os voxels que satisfazem a equação do elipsóide e atribui a cor atual de desenho
   * @param xcenter Posição x do centro do elipsóide
   * @param ycenter Posição y do centro do elipsóide
   * @param zcenter Posição z do centro do elipsóide
   * @param rx Raio em x do elipsóide
   * @param ry Raio em y do elipsóide
   * @param rz Raio em z do elipsóide
  */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                    int rz);

  /**
   * @brief Desativa todos os voxels que satisfazem a equação do elipsóide
   * @param xcenter Posição x do centro do elipsóide
   * @param ycenter Posição y do centro do elipsóide
   * @param zcenter Posição z do centro do elipsóide
   * @param rx Raio em x do elipsóide
   * @param ry Raio em y do elipsóide
   * @param rz Raio em z do elipsóide
  */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                    int rz);

  /**
   * @brief Em um arquivo filename, salva a escultura no formato OFF
   * @param filename Nome do arquivo
  */
  void writeOFF(const char *filename);
};

#endif