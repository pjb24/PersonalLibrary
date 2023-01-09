#pragma once

class Adapter
{
public:
	const IDXGIAdapter1* GetAdapter();

private:
	IDXGIAdapter1* adapter;
};

