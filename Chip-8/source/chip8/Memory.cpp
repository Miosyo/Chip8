#include <chip8/Memory.h>

Memory::Memory()
{
	for (int i = 0; i < MEM_SIZE; i++)
	{
		data[i] = 0x0000;
	}
}

Memory::~Memory()
{
}

void Memory::SetByte(bit16 addr, bit8 data)
{
	Memory::data[addr] = data;
}

bit8 Memory::GetByte(bit16 addr)
{
	return data[addr];
}
