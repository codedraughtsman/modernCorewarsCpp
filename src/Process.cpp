#include "Process.h"

Process::Process(uint32_t index) : m_index(index) {}

uint32_t &Process::index() {
	return m_index;
}