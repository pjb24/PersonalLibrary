#include "pch.h"
#include "NamedPipe.h"

NamedPipe::NamedPipe()
{
	pipeNameRaw = "";
	pipeName = "";
}

NamedPipe::~NamedPipe()
{
}

int NamedPipe::SetPipeName(std::string pipename)
{
	if (pipename.empty())
	{
		return -1;
	}

	if (pipename.find("\\\\.\\pipe\\") != std::string::npos)
	{
		size_t pipeNamePosition = 0;
		size_t pipeNameSize = 0;

		pipeNameSize = pipename.size();
		pipeNamePosition = pipename.rfind("\\") + 1;

		pipeNameRaw = pipename;
		pipeName = pipename.substr(pipeNamePosition, pipeNameSize - pipeNamePosition);
	}
	else
	{
		pipeNameRaw = std::string("\\\\.\\pipe\\") + pipename;
		pipeName = pipename;
	}

	return 0;
}

const std::string NamedPipe::GetPipeName()
{
	return pipeName;
}

const std::string NamedPipe::GetPipeNameRaw()
{
	return pipeNameRaw;
}
