#pragma once

#ifdef DLLEXPORT
#define DllExport __declspec(dllexport)
#else
#define DllExport __declspec(dllimport)
#endif // DLLEXPORT

#include "NamedPipe.h"
#include <string>

class NamedPipeClient : public NamedPipe
{
public:
	NamedPipeClient();
	virtual ~NamedPipeClient();

private:
	DWORD openMode;
	DWORD pipeMode;
	DWORD maxInstance;
	DWORD outBufferSize;
	DWORD inBufferSize;
	DWORD defaultTimeOut;
};

DllExport NamedPipeClient* CreateNamedPipeClient();
DllExport int DestroyNamedPipeClient(NamedPipeClient* namedPipeClient);