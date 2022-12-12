#pragma once

#ifdef DLLEXPORT
#define DllExport __declspec(dllexport)
#else
#define DllExport __declspec(dllimport)
#endif // DLLEXPORT

class DllExport MessageQueue
{
};

