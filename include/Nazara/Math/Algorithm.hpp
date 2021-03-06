// Copyright (C) 2014 Jérôme Leclercq
// This file is part of the "Nazara Engine - Mathematics module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#pragma once

#ifndef NAZARA_ALGORITHM_MATH_HPP
#define NAZARA_ALGORITHM_MATH_HPP

#include <Nazara/Prerequesites.hpp>
#include <Nazara/Core/String.hpp>
#include <cmath>
#include <limits>

#ifndef M_PI
#define M_PI 3.141592653589793238462643
#endif

#ifndef M_SQRT2
#define M_SQRT2 1.4142135623730950488016887
#endif

template<typename T> T NzApproach(T value, T objective, T increment);
template<typename T> constexpr T NzClamp(T value, T min, T max);
template<typename T> constexpr T NzDegrees(T degrees);
template<typename T> constexpr T NzDegreeToRadian(T degrees);
unsigned int NzGetNearestPowerOfTwo(unsigned int number);
unsigned int NzGetNumberLength(signed char number);
unsigned int NzGetNumberLength(unsigned char number);
unsigned int NzGetNumberLength(int number);
unsigned int NzGetNumberLength(unsigned int number);
unsigned int NzGetNumberLength(long long number);
unsigned int NzGetNumberLength(unsigned long long number);
unsigned int NzGetNumberLength(float number, nzUInt8 precision = NAZARA_CORE_DECIMAL_DIGITS);
unsigned int NzGetNumberLength(double number, nzUInt8 precision = NAZARA_CORE_DECIMAL_DIGITS);
unsigned int NzGetNumberLength(long double number, nzUInt8 precision = NAZARA_CORE_DECIMAL_DIGITS);
unsigned int NzIntegralPow(unsigned int base, unsigned int exponent);
template<typename T, typename T2> T NzLerp(T from, T to, T2 interpolation);
template<typename T> T NzMultiplyAdd(T x, T y, T z);
template<typename T> T NzNormalizeAngle(T angle);
template<typename T> inline bool NzNumberEquals(T a, T b, T maxDifference = 0xFFFFEFFF);
NzString NzNumberToString(long long number, nzUInt8 radix = 10);
template<typename T> T NzRadians(T radians);
template<typename T> T NzRadianToDegree(T radians);
long long NzStringToNumber(NzString str, nzUInt8 radix = 10, bool* ok = nullptr);

#include <Nazara/Math/Algorithm.inl>

#endif // NAZARA_ALGORITHM_MATH_HPP
