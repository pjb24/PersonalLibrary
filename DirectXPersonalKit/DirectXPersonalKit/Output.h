#pragma once

class Output
{
public:
	const IDXGIOutput1* GetOutput();

private:
	IDXGIOutput1* output;
};

