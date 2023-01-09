#pragma once

class Texture
{
public:
	const ID3D11Texture2D* GetTexture();
	const ID3D11ShaderResourceView* GetSRV();

private:
	ID3D11Texture2D* texture;
	ID3D11ShaderResourceView* SRV;
};

