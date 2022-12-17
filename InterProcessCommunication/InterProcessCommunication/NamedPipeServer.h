#pragma once

#ifdef DLLEXPORT
#define DllExport __declspec(dllexport)
#else
#define DllExport __declspec(dllimport)
#endif // DLLEXPORT

#include "NamedPipe.h"
#include <string>

class NamedPipeServer : public NamedPipe
{
public:
	NamedPipeServer();
	virtual ~NamedPipeServer();

private:

};

DllExport NamedPipeServer* CreateNamedPipeServer();
DllExport int DestroyNamedPipeServer(NamedPipeServer* namedPipeServer);