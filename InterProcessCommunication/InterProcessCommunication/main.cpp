// main.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include "pch.h"
#include <iostream>

#ifdef _DEBUG
#include <crtdbg.h>
#define new new(_CLIENT_BLOCK, __FILE__, __LINE__)
#endif // _DEBUG

#include "NamedPipeServer.h"
#include "NamedPipeClient.h"

void PrintMainInfomation()
{
	std::cout << "1: NamedPipe" << std::endl;
}

void PrintSubInformation()
{
	std::cout << "1: NamedPipeServer" << std::endl;
	std::cout << "2: NamedPipeClient" << std::endl;
}

std::string GetUserSelection()
{
	std::string temp;
	std::cin >> temp;
	return temp;
}

int SwitchMainSelection(std::string userSelect)
{
	if (userSelect == "1")
	{
		PrintSubInformation();

	}
	else
	{

	}

	return 0;
}

int SwitchSubSelection(std::string userSelect)
{
	if (userSelect == "1")
	{
		NamedPipeServer* namedPipeServer = CreateNamedPipeServer();
		namedPipeServer->SetPipeName("Server");
		std::cout << namedPipeServer->GetPipeName() << std::endl;
		std::cout << namedPipeServer->GetPipeNameRaw() << std::endl;
		DestroyNamedPipeServer(namedPipeServer);
	}
	else if (userSelect == "2")
	{
		NamedPipeClient* namedPipeClient = CreateNamedPipeClient();
		namedPipeClient->SetPipeName("\\\\.\\pipe\\Client");
		std::cout << namedPipeClient->GetPipeName() << std::endl;
		std::cout << namedPipeClient->GetPipeNameRaw() << std::endl;
		DestroyNamedPipeClient(namedPipeClient);
	}
	else
	{

	}

	return 0;
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	PrintMainInfomation();
	std::string userSelect = GetUserSelection();
	system("cls");
	SwitchMainSelection(userSelect);

	userSelect = GetUserSelection();
	system("cls");
	SwitchSubSelection(userSelect);
}
