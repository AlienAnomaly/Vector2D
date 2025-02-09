#include <vector2.h>

#include <math.h>


Vector2::Vector2()
  : X(0)
  , Y(0)
{

}

Vector2::Vector2(float p_X, float p_Y)
  : X(p_X)
  , Y(p_Y)
{

}

// ############################################
//             ARITHMETIC FUNCTIONS
// ############################################

Vector2& Vector2::AddVector(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::SubVector(const Vector2& v)
{
  this->X -= v.X;
  this->Y -= v.Y;
  return *this;
}

Vector2& Vector2::MulVector(const Vector2& v)
{
  this->X *= v.X;
  this->Y *= v.Y;
  return *this;
}

// ############################################
//                  OVERLOADS
// ############################################

Vector2& Vector2::operator+(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::operator-(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::operator*(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::operator+=(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::operator-=(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::operator*=(const Vector2& v)
{
  this->X += v.X;
  this->Y += v.Y;
  return *this;
}

Vector2& Vector2::operator+(float num)
{
  this->X += num;
  this->Y += num;
  return *this;
}

Vector2& Vector2::operator-(float num)
{
  this->X -= num;
  this->Y -= num;
  return *this;
}

Vector2& Vector2::operator*(float num)
{
  this->X *= num;
  this->Y *= num;
  return *this;
}

bliss::math::Vector2 NormalizeVector(const Vector2& v)
{
  float mag = GetLength(v);
  Vector2 ret(v.X / mag, v.Y / mag);
  return ret;
}

float GetLength(const Vector2& v)
{   
  return sqrtf((v.X * v.X) + (v.Y * v.Y));
}

