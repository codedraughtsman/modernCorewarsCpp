#ifndef __PROCESS_H__
#define __PROCESS_H__

#include <cstdint>

class Process {
	uint32_t m_index;
public:
	Process(uint32_t index);
	uint32_t &index();
};

#endif // __PROCESS_H__