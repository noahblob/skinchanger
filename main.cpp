#include "memory.h"

#include <thread>

namespace offset {
	// client
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDEA98C;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DFFF7C;
	constexpr ::std::ptrdiff_t dwClientState = 0x59F19C;

	// player
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;

	// base attributable
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
}

// set skins to apply
constexpr const int GetWeaponPaint(const short& itemDefinition)
{
	switch (itemDefinition) 
	{
	case 1: return 711; // desert eagle
	case 4: return 38; // glock-18
	case 7: return 490; // ak-47
	case 9: return 756; // awp
	case 61: return 653; // usp
	case 507: return 419;
	default: return 0;
	}
}

int main()
{	
	const auto memory = Memory{ "csgo.exe" };

	// get module addresses
	const auto client = memory.GetModuleAddress("client.dll");
	const auto engine = memory.GetModuleAddress("engine.dll");


	// hack loop
	while (true) 
	{
		// sleep loop for 2 seconds so we are not executing 1 billion times/second
		std::this_thread::sleep_for(std::chrono::milliseconds(2))

	}

	return 0;
}
