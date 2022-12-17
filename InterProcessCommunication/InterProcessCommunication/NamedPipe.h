#pragma once

#include <string>

class NamedPipe
{
public:
	NamedPipe();
	virtual ~NamedPipe();

	int SetPipeName(std::string pipename);
	const std::string GetPipeName();
	const std::string GetPipeNameRaw();

protected:
	std::string pipeNameRaw;
	std::string pipeName;
};
