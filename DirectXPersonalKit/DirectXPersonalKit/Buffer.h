#pragma once

class Buffer
{
public:
	const ID3D11Buffer* GetBuffer();

private:
	ID3D11Buffer* buffer;
};

