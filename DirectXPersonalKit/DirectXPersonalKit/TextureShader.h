#pragma once

class TextureShader
{
public:
	const ID3D11VertexShader* GetVertexShader();
	const ID3D11PixelShader* GetPixelShader();

private:
	ID3D11VertexShader* vertexShader;
	ID3D11PixelShader* pixelShader;
};

