struct Voxel {
  float r,g,b; // Cores
  float a; // Trasnparencia
  bool show; // Incluido ou nao
};


class Sculptor {
private:
    Voxel ***v; // 3D matrix
    int nx,ny,nz; // Dimensions
    float r,g,b,a; // Current drawing color
public:
    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float a); // Done
    void putVoxel(int x, int y, int z); // Done
    void cutVoxel(int x, int y, int z); // Done
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1); // Done
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); // Done
    void putSphere(int xcenter, int ycenter, int zcenter, int radius); // Done
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius); // Donne
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void writeOFF(const char* filename); // Done
};