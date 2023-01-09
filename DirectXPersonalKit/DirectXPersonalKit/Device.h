#pragma once

class Device
{
public:
	const ID3D11Device1* GetDevice();
	const ID3D11DeviceContext1* GetDeviceContext();

private:
	ID3D11Device1* device;
	ID3D11DeviceContext1* deviceContext;
};

