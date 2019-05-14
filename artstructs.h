#pragma once
#include <Windows.h>

struct Color {
	float r, g, b, a;
	Color(float r, float g, float b, float a)
		:r(r), g(g), b(b), a(a)
	{

	}

	Color() {

	}
};

struct glow_t
{
	glow_t() {

	}
	//DWORD EntBaseAddr;
	Color color;
	char junk1[16];
	bool m_bRenderWhenOccluded;
	bool m_bRenderWhenUnoccluded;
	bool m_bFullBloom;
	//char junk2[13]; //No need for that
};