#pragma once
#include <cmath>

namespace inGame 
{
	template<class T>
	class Vector2d	
	{
	public:
		T x;
		T y;
	
		Vector2d(): x(0), y(0) {};
		Vector2d(T _x, T _y) : x(_x), y(_y) {};

		Vector2d<T> operator+(const Vector2d<T> given) 
		{
			return Vector2d<T>(x + given.x, y + given.y);
		};

		Vector2d<T> operator-(const Vector2d<T> given)
		{
			return Vector2d<T>(x - given.x, y - given.y);
		};

		Vector2d<T> operator*(T given)
		{
			return Vector2d<T>(x * given, y * given);
		};

		Vector2d<T> operator/(T given)
		{
			return Vector2d<T>(x / given, y / given);
		};

		///MB FIX IN FUTURE
		//Vector2d<T>& operator=(const Vector2d<T> &given)
		//{
		//	this.x = given.x;
		//	this.y = given.y;
		//	return *this;
		//};

		T magnitude(const Vector2d &vec2d)
		{
			return sqrt(pow(x, 2) + pow(y, 2));
		};
		T distance(const Vector2d &vec2d)
		{
			return sqrt(pow(vec2d.x - x, 2) + pow(vec2d.y - y, 2));
		};
		Vector2d<T>	normalizedVec()
		{
			return *this / magnitude();
		};
	};	
}

