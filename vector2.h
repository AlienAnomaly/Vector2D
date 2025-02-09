#pragma once


class Vector2
{
public:
  Vector2();
  Vector2(float p_X, float p_Y);
  ~Vector2() = default;
public:
  float X, Y;
public:
  Vector2& AddVector(const Vector2& v);
  Vector2& SubVector(const Vector2& v);
  Vector2& MulVector(const Vector2& v);
public:
  Vector2& operator+(const Vector2& v);
  Vector2& operator-(const Vector2& v);
  Vector2& operator*(const Vector2& v);
  
  Vector2& operator+=(const Vector2& v);
  Vector2& operator-=(const Vector2& v);
  Vector2& operator*=(const Vector2& v);

  Vector2& operator+(float num);
  Vector2& operator-(float num);
  Vector2& operator*(float num);
};

bliss::math::Vector2 NormalizeVector(const Vector2& v);
float GetLength(const Vector2& v);

