#ifndef _s3tc_H_
#define _s3tc_H_

#include <cstdint>

void BlockDecompressImageDXT1(unsigned long width, unsigned long height, const unsigned char *blockStorage, uint32_t *image);
void BlockDecompressImageDXT5(unsigned long width, unsigned long height, const unsigned char *blockStorage, uint32_t *image);

#endif // _s3tc_H_
