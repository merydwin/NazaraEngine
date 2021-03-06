// Copyright (C) 2014 Jérôme Leclercq
// This file is part of the "Nazara Engine".
// For conditions of distribution and use, see copyright notice in Config.hpp

#ifndef NAZARA_HASH_WHIRLPOOL_HPP
#define NAZARA_HASH_WHIRLPOOL_HPP

#include <Nazara/Prerequesites.hpp>
#include <Nazara/Core/AbstractHash.hpp>
#include <Nazara/Core/HashDigest.hpp>

struct NzHashWhirlpool_state;

class NAZARA_API NzHashWhirlpool : public NzAbstractHash
{
	public:
		NzHashWhirlpool();
		virtual ~NzHashWhirlpool();

		void Append(const nzUInt8* data, unsigned int len);
		void Begin();
		NzHashDigest End();

		static unsigned int GetDigestLength();
		static NzString GetHashName();

	private:
		NzHashWhirlpool_state* m_state;
};

#endif // NAZARA_HASH_WHIRLPOOL_HPP
