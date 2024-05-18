#include "math/Vector3.h"

Vector3::Vector3(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

double Vector3::getX() {
    return static_cast<double> this->x;
}

double Vector3::getY() {
    return static_cast<double> this->y;
}

double Vector3::getZ() {
    return static_cast<double> this->z;
}

int Vector3::getFloorX() {
    return static_cast<int> floor(this->x);
}

int Vector3::getFloorY() {
    return static_cast<int> floor(this->y);
}

int Vector3::getFloorZ() {
    return static_cast<int> floor(this->z);
}

int Vector3::getChunkX() {
    return static_cast<int> this->getFloorX() >> 4;
}

int Vector3::getChunkSelectionY() {
    return static_cast<int> this->getFloorY() >> 4;
}

int Vector3::getChunkZ() {
    return static_cast<int> this->getFloorZ() >> 4;
}

Vector3 *Vector3::add(double x, double y, double z) {
    return new Vector3(this->x + x, this->y + y, this->z + z);
}

Vector3 *Vector3::addVector(Vector3 *vector) {
    return this->add(vector->getX(), vector->getY(), vector->getZ());
}

Vector3 *Vector3::subtract(double x, double y, double z) {
    return new Vector3(this->x - x, this->y - y, this->z - z);
}

Vector3 *Vector3::subtractVector(Vector3 *vector) {
    return this->subtract(vector->getX(), vector->getY(), vector->getZ());
}

Vector3 *Vector3::multiply(double number) {
    return new Vector3(this->x * number, this->y * number, this->z * number);
}

Vector3 *Vector3::divide(double number) {
    return new Vector3(this->x / number, this->y / number, this->z / number);
}

Vector3 *Vector3::_abs() {
    return new Vector3(std::abs(this->x), std::abs(this->y), std::abs(this->z));
}

Vector3 *Vector3::_ceil() {
    return new Vector3(std::ceil(this->x), std::ceil(this->y), std::ceil(this->z));
}

Vector3 *Vector3::_floor() {
    return new Vector3(std::floor(this->x), std::floor(this->y), std::floor(this->z));
}

Vector3 *Vector3::_round() {
    return new Vector3(std::round(this->x), std::round(this->y), std::round(this->z));
}

double Vector3::distance(Vector3 *vector) {
    return std::sqrt(this->distanceSquared(vector));
}

double Vector3::distanceSquared(Vector3 *vector) {
    return std::pow(this->x - vector->x, 2) + pow(this->y - vector->y, 2) + pow(this->z - vector->z, 2);
}

double Vector3::length() {
    return std::sqrt(this->lengthSquared());
}

double Vector3::lengthSquared() {
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

Vector3 *Vector3::normalize() {
    double length = this->lengthSquared();
    if(length > 0) {
        return this->divide(std::sqrt(length));
    }
    return new Vector3(0, 0, 0);
}

double Vector3::dot(Vector3 *vector) {
    return this->x * vector->x + this->y * vector->y + this->z * vector->z;
}

Vector3 *Vector3::cross(Vector3 *vector) {
    return new Vector3(this->y * vector->z - this->z * vector->y, this->z * vector->x - this->x * vector->z, this->x * vector->y - this->y * vector->x);
}

bool Vector3::equals(Vector3 *vector) {
    return this->x == vector->x && this->y == vector->y && this->z == vector->z;
}

std::string Vector3::toString() {
    return "Vector3(x=" + std::to_string(this->x) + ",y=" + std::to_string(this->y) + ",z=" + std::to_string(this->z) + ")";
}

Vector3 *Vector3::asVector3() {
    return new Vector3(this->x, this->y, this->z);
}