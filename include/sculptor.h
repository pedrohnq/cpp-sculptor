

/**
 * @struct Voxel
 * @brief Estrutura que representa um elemento volumétrico (voxel).
 *
 * Um voxel é um pequeno elemento tridimensional, usado para criar figuras em um espaço 3D.
 * Esta estrutura é usada para representar os atributos de um voxel, incluindo cor (r, g, b, a)
 * e se ele deve ser exibido (show).
 */
struct Voxel {
    float r; ///< Componente de cor vermelha (0.0 a 1.0).
    float g; ///< Componente de cor verde (0.0 a 1.0).
    float b; ///< Componente de cor azul (0.0 a 1.0).
    float a; ///< Componente alfa (transparência) (0.0 a 1.0).
    bool show; ///< Indica se o voxel deve ser exibido (true) ou não (false).
};


/**
 * @class Sculptor
 * @brief Classe que representa um escultor 3D para criação de figuras tridimensionais.
 *
 * Esta classe permite a manipulação de um espaço tridimensional para criar figuras usando voxels (elementos volumétricos).
 */
class Sculptor {
private:
    Voxel ***v; ///< Matriz tridimensional de voxels.
    int nx; ///< Número de elementos na dimensão X.
    int ny; ///< Número de elementos na dimensão Y.
    int nz; ///< Número de elementos na dimensão Z.
    float r; ///< Componente de cor vermelha para desenho.
    float g; ///< Componente de cor verde para desenho.
    float b; ///< Componente de cor azul para desenho.
    float a; ///< Componente alfa (transparência) para desenho.
public:
    /**
     * @brief Construtor da classe Sculptor.
     *
     * @param _nx Número de elementos na dimensão X.
     * @param _ny Número de elementos na dimensão Y.
     * @param _nz Número de elementos na dimensão Z.
     */
    Sculptor(int _nx, int _ny, int _nz);

    /**
     * @brief Destrutor da classe Sculptor.
     */
    ~Sculptor();

    /**
     * @brief Define a cor atual para desenho.
     *
     * @param r Componente de cor vermelha (0.0 a 1.0).
     * @param g Componente de cor verde (0.0 a 1.0).
     * @param b Componente de cor azul (0.0 a 1.0).
     * @param a Componente alfa (transparência) (0.0 a 1.0).
     */
    void setColor(float r, float g, float b, float a);

    /**
     * @brief Adiciona um voxel na posição especificada.
     *
     * @param x Coordenada X do voxel.
     * @param y Coordenada Y do voxel.
     * @param z Coordenada Z do voxel.
     */
    void putVoxel(int x, int y, int z);

    /**
     * @brief Remove um voxel na posição especificada.
     *
     * @param x Coordenada X do voxel.
     * @param y Coordenada Y do voxel.
     * @param z Coordenada Z do voxel.
     */
    void cutVoxel(int x, int y, int z);

    /**
     * @brief Adiciona uma caixa delimitada por coordenadas específicas.
     *
     * @param x0 Coordenada X inicial.
     * @param x1 Coordenada X final.
     * @param y0 Coordenada Y inicial.
     * @param y1 Coordenada Y final.
     * @param z0 Coordenada Z inicial.
     * @param z1 Coordenada Z final.
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief Remove uma caixa delimitada por coordenadas específicas.
     *
     * @param x0 Coordenada X inicial.
     * @param x1 Coordenada X final.
     * @param y0 Coordenada Y inicial.
     * @param y1 Coordenada Y final.
     * @param z0 Coordenada Z inicial.
     * @param z1 Coordenada Z final.
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief Adiciona uma esfera com centro e raio específicos.
     *
     * @param xcenter Coordenada X do centro da esfera.
     * @param ycenter Coordenada Y do centro da esfera.
     * @param zcenter Coordenada Z do centro da esfera.
     * @param radius Raio da esfera.
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief Remove uma esfera com centro e raio específicos.
     *
     * @param xcenter Coordenada X do centro da esfera.
     * @param ycenter Coordenada Y do centro da esfera.
     * @param zcenter Coordenada Z do centro da esfera.
     * @param radius Raio da esfera.
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief Adiciona uma elipsoide com centro e raios específicos.
     *
     * @param xcenter Coordenada X do centro da elipsoide.
     * @param ycenter Coordenada Y do centro da elipsoide.
     * @param zcenter Coordenada Z do centro da elipsoide.
     * @param rx Raio na dimensão X.
     * @param ry Raio na dimensão Y.
     * @param rz Raio na dimensão Z.
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief Remove uma elipsoide com centro e raios específicos.
     *
     * @param xcenter Coordenada X do centro da elipsoide.
     * @param ycenter Coordenada Y do centro da elipsoide.
     * @param zcenter Coordenada Z do centro da elipsoide.
     * @param rx Raio na dimensão X.
     * @param ry Raio na dimensão Y.
     * @param rz Raio na dimensão Z.
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief Exporta a escultura para um arquivo no formato OFF.
     *
     * O formato OFF (Object File Format) é um formato de arquivo usado para representar
     * modelos 3D em malhas triangulares.
     *
     * @param filename Nome do arquivo de saída.
     */
    void writeOFF(const char* filename);
};