#include <string>
#include <cmath>

class Vector3 {
    public:
    double x, y, z;
    Vector3(double x, double y, double z);
    double getX();
    double getY();
    double getZ();
    int getFloorX();
    int getFloorY();
    int getFloorZ();
    int getChunkX();
    int getChunSelectionY();
    int getChunkZ();
    Vector3 *add(double x, double y, double z);
    Vector3 *addVector(Vector3 *vector);
    Vector3 *subtract(double x, double y, double z);
    Vector3 *subtractVector(Vector3 *vector);
    Vector3 *multiply(double number);
    Vector3 *divide(double number);
    [[nodiscard]] Vector3 *_abs();
    [[nodiscard]] Vector3 *_ceil();
    [[nodiscard]] Vector3 *_floor();
    [[nodiscard]] Vector3 *_round();
    double distance(Vector3 *vector);
    double distanceSquared(Vector3 *vector);
    double length();
    double lengthSquared();
    Vector3 *normalize();
    double dot(Vector3 *vector);
    Vector3 *cross(Vector3 *vector);
    bool equals(Vector3 *vector);
    std::string toString();
    Vector3 *asVector3();
};