#pragma once
#include <vector>
#include <Windows.h>
#include "offsets.h"
#include <TlHelp32.h>
#include <string>
using namespace std;
class MemMan
{
public:
	MemMan();
	~MemMan();
	DWORD gameModule = NULL;
	template <class val>
	val readMem(DWORD addr)
	{
		val x;
		ReadProcessMemory(handle, (LPBYTE*)addr, &x, sizeof(x), NULL);
		return x;
	}
	template <class val>
	void writeMem(DWORD addr, val x)
	{
		WriteProcessMemory(handle, (LPBYTE*)addr, &x, sizeof(x), NULL);
	}
	DWORD getProcess(const char*);
	uintptr_t getModule(DWORD, const char*);
	DWORD getAddress(DWORD, std::vector<DWORD>);
	HANDLE handle;
	
};