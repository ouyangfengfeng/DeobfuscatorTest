//x86
#define MODE CS_MODE_32

//SmilingWolf new mega test #1 x32
#define CODE "\x60\x60\x8B\xF6\x8B\xD2\x61\x8B\xD2\x8B\xF6\x61\x50\x52\x60\x60\x61\x61\x60\x8B\xD2\x60\x61\x61\x5A\x58\x9C\x52\x3E\xC7\x04\x24\x3C\x67\x2F\x06\x3E\x89\x0C\x24\x3E\xC7\x04\x24\x35\x00\x00\x00\x50\x3E\xC7\x04\x24\x76\x9C\x77\x7E\x3E\x81\x24\x24\x5B\x1C\xFF\x7D\x3E\xC1\x24\x24\x02\x3E\x81\x04\x24\x00\x52\xCD\x6C\x3E\x81\x04\x24\x40\x62\xB5\x20\x3E\x81\x04\x24\x6D\x86\xB6\x80\x50\x52\x3E\xC7\x04\x24\xB9\xE1\xE9\x2E\x3E\x89\x1C\x24\x3E\x8B\x44\x24\x10\x3E\x8B\x5C\x24\x08\x3E\x89\x44\x24\x08\x3E\x89\x5C\x24\x10\x5B\x58\x52\x50\x52\x60\x61\x8B\xFF\x8B\xD2\x5A\x58\x50\x52\x60\x61\x5A\x58\x5A\x52\x3E\xC7\x04\x24\x35\xE8\xC3\x3B\x51\xB9\xFD\x3E\xCA\xF7\x3E\x29\x4C\x24\x04\x3E\xFF\x34\x24\x59\x83\xC4\x04\x50\xB8\x91\xB7\xFD\x7E\x3E\x21\x44\x24\x04\x58\x50\x3E\x89\x3C\x24\xBF\x2E\x3D\xF4\x57\x3E\x09\x7C\x24\x04\x5F\x55\xBD\x61\xCB\xFF\x7E\x3E\x21\x6C\x24\x04\x3E\x8B\x2C\x24\x83\xC4\x04\x3E\x81\x24\x24\xEA\x9B\xCB\x0A\x50\x3E\xFF\x74\x24\x04\x58\x3E\x8F\x04\x24\x95\x55\x51\x5D\x59\xF7\xD1\x55\x51\x5D\x59\x33\xC5\x33\xE8\x33\xC5\x3E\x31\x04\x24\x3E\x33\x04\x24\x3E\x31\x04\x24\x3E\x81\x04\x24\xD1\x56\x49\x6B\x3E\x89\x04\x24\x51\x3E\xC7\x04\x24\x1A\x63\xC9\x7B\x3E\x81\x2C\x24\xAD\x90\x4B\x00\x3E\x83\x04\x24\xFF\x3E\xFF\x0C\x24\x57\xBF\x96\x7B\xB2\x00\x3E\x31\x7C\x24\x04\x3E\xFF\x34\x24\x5F\x56\x8B\xF4\x83\xC6\x04\x83\xC6\x04\x3E\x87\x34\x24\x5C\x3E\x81\x24\x24\xC3\x64\x6F\x7E\x51\x3E\xC7\x04\x24\xE1\x26\x1C\x6E\x3E\x89\x0C\x24\x56\xBE\xB0\x05\x7E\x3B\x8B\xCE\x5E\x3E\x81\x6C\x24\x04\x38\x85\xFF\x6F\x3E\x81\x6C\x24\x04\xFE\xB8\xF1\x6F\x53\xBB\x78\x9F\xF5\x3F\x3E\x29\x5C\x24\x08\x3E\x8B\x1C\x24\x83\xC4\x04\x3E\x01\x4C\x24\x04\x3E\x81\x44\x24\x04\x78\x9F\xF5\x3F\x50\xB8\xFE\xB8\xF1\x6F\x3E\x01\x44\x24\x08\x58\x3E\x81\x44\x24\x04\x38\x85\xFF\x6F\x59\x3E\x81\x04\x24\x1C\xF3\xCC\x72\x3E\x89\x0C\x24\x68\xB2\x0E\xC7\x44\x3E\x89\x14\x24\x54\x3E\xFF\x34\x24\x5A\x53\x3E\x89\x0C\x24\x68\xC2\x55\x60\x63\x3E\x89\x24\x24\x3E\x83\x04\x24\x04\x3E\x8B\x0C\x24\x83\xC4\x04\x83\xC1\x04\x52\x50\x68\x35\xB6\x0F\x0B\x58\x55\x53\xBB\xE3\xFD\x3C\x30\x8B\xEB\x5B\x33\xC5\x5D\x56\x8B\xF0\x8B\xD6\x5E\x58\x81\xC2\x2E\xB4\xCC\xC4\x03\xCA\x3E\x8B\x14\x24\x83\xC4\x04\x3E\x87\x0C\x24\x5C\x83\xC2\x04\x83\xEA\x04\x3E\x87\x14\x24\x3E\x8B\x24\x24\x3E\x89\x3C\x24\x3E\x89\x14\x24\x51\x3E\x89\x3C\x24\x54\x3E\xFF\x34\x24\x5F\x83\xC4\x04\x56\xBE\x04\x00\x00\x00\x55\xBD\xBF\x2D\xEC\x3B\x45\x4D\x81\xC5\x16\xB0\x0B\xDE\x03\xFD\x5D\x03\xFE\x81\xEF\xD5\xDD\xF7\x19\x5E\x51\x53\x3E\xC7\x04\x24\x7B\xA1\x7A\x03\x3E\x89\x14\x24\x56\xBE\x16\xFE\xEF\x6D\x4E\x51\xB9\x69\x07\x53\x67\x81\xC9\xD8\xA0\x7F\x7F\x81\xF1\xB7\x59\xFF\x0F\xC1\xE9\x08\xC1\xE9\x02\x81\xF1\xC4\xEE\x01\x4D\x2B\xF1\x59\x81\xF6\x89\x81\x76\x37\xC1\xE6\x03\xC1\xE6\x03\x81\xF6\xC4\xA4\x2B\xE9\x8B\xD6\x5E\x52\x59\x5A\x2B\xF9\x3E\xFF\x34\x24\x59\x50\x8B\xC4\x83\xC0\x04\x83\xC0\x04\x3E\x33\x04\x24\x3E\x31\x04\x24\x3E\x33\x04\x24\x5C\x3E\x87\x3C\x24\x5C\x3E\x89\x1C\x24\x57\x3E\x89\x1C\x24\x52\x3E\x89\x04\x24\x3E\xC7\x04\x24\x06\xB2\x6C\x53\x3E\x89\x3C\x24\x68\xD3\xCF\xFF\x5F\x3E\x8B\x3C\x24\x83\xC4\x04\x3E\x89\x7C\x24\x04\x3E\x8B\x3C\x24\x53\x3E\x89\x0C\x24\x8B\xCC\x83\xC1\x04\x68\xB2\x6D\xD6\x17\x3E\x89\x2C\x24\x50\x68\x13\x06\xF7\x76\x58\x48\x35\x16\x06\xF7\x76\x8B\xE8\x58\x03\xCD\x3E\x8B\x2C\x24\x83\xC4\x04\x3E\x87\x0C\x24\x3E\x8B\x24\x24\x3E\x81\x04\x24\xD1\xFB\xBC\xE9\x3E\x89\x14\x24\x3E\x89\x2C\x24\x3E\x89\x1C\x24\x51\x3E\x89\x1C\x24\x3E\x89\x3C\x24\x3E\x89\x1C\x24\x3E\x89\x04\x24\x3E\xC7\x04\x24\xE4\x81\xFF\x73\x3E\xF7\x14\x24\x3E\xFF\x04\x24\x52\xBA\x3A\xDC\x7E\x5F\x3E\x31\x54\x24\x04\x3E\x8B\x14\x24\x83\xC4\x04\x3E\xC1\x24\x24\x03\x50\x3E\x89\x34\x24\x3E\x89\x2C\x24\x52\xBA\x9C\xB8\xFF\x0C\x51\xB9\xCF\x92\xFF\x30\x8B\xE9\x59\x81\xC5\x1F\x7D\xF1\x7A\x03\xEA\x81\xED\x1F\x7D\xF1\x7A\x3E\x8B\x14\x24\x83\xC4\x04\x3E\x21\x6C\x24\x04\x5D\x3E\xFF\x04\x24\x51\x3E\x89\x04\x24\x3E\x89\x0C\x24\xB9\x95\x0C\x42\xF3\x3E\x29\x4C\x24\x04\x59\x3E\x89\x2C\x24\x52\x52\x3E\x89\x24\x24\x3E\x83\x04\x24\x04\x3E\xFF\x34\x24\x5A\x83\xEC\x04\x3E\x89\x04\x24\x8B\xC4\x51\xB9\x04\x00\x00\x00\x03\xC1\x59\x83\xC0\x04\x3E\x33\x04\x24\x3E\x31\x04\x24\x3E\x33\x04\x24\x3E\x8B\x24\x24\x83\xC2\x04\x50\xB8\x04\x00\x00\x00\x2B\xD0\x58\x3E\x87\x14\x24\x3E\x8B\x24\x24\x3E\x89\x14\x24\x8B\xD4\x83\xC2\x04\x83\xEA\x04\x3E\x33\x14\x24\x3E\x31\x14\x24\x3E\x33\x14\x24\x3E\x8B\x24\x24\x3E\x89\x04\x24\x3E\x89\x2C\x24\x3E\x89\x34\x24\x83\xEC\x04\x3E\x89\x14\x24\x3E\xC7\x04\x24\xA2\x22\x76\x6D\x3E\xF7\x14\x24\x3E\xC1\x2C\x24\x05\x57\x3E\xFF\x74\x24\x04\x5F\x3E\x8F\x04\x24\x4F\x3E\x31\x3C\x24\x3E\x33\x3C\x24\x3E\x31\x3C\x24\x3E\xD1\x2C\x24\x57\x50\xB8\x95\x64\xFF\x3F\x8B\xF8\x58\x3E\x81\x6C\x24\x04\x00\x1B\x3F\x36\x3E\x01\x7C\x24\x04\x3E\x81\x44\x24\x04\x00\x1B\x3F\x36\x3E\x8B\x3C\x24\x83\xC4\x04\x51\x54\x59\x83\xC1\x04\x55\xBD\x04\x00\x00\x00\x81\xE9\x88\xA9\x44\x1B\x2B\xCD\x81\xC1\x88\xA9\x44\x1B\x5D\x3E\x87\x0C\x24\x3E\x8B\x24\x24\x3E\x89\x04\x24\xB8\xC6\x35\x03\xD3\x3E\x29\x44\x24\x04\x58\x3E\x89\x2C\x24\x3E\x89\x34\x24\x3E\x89\x3C\x24"
//#define CODE "\xFF\x34\x24\xFF\x34\x24\x8B\x0C\x24\x83\xC4\x04\x81\xC4\x04\x00\x00\x00\x51\x57\x54\x8F\x04\x24\x81\x04\x24\x04\x00\x00\x00\x59\x81\xC1\x04\x00\x00\x00\x81\xEC\x04\x00\x00\x00\x89\x04\x24\x52\x51\xB9\xF1\x0F\xF8\x49\x68\x3A\x16\x65\xCD\x5A\x01\xCA\x59\x81\xF2\x4D\x10\x79\x3F\xF7\xD2\x81\xEA\xFD\xEF\xDF\x77\x68\x33\xC5\xDA\x3F\x89\x0C\x24\xB9\xA6\xC8\xFF\x6E\x09\xCA\x8B\x0C\x24\x81\xC4\x04\x00\x00\x00\x57\xBF\x46\x26\x00\x80\x01\xFA\x5F\x89\xD0\x8B\x14\x24\x83\xC4\x04\x01\xC1\x8B\x04\x24\x83\xC4\x04\x87\x0C\x24\x5C\x68\xE3\x01\x67\x0A\x89\x2C\x24\x51\xB9\x3E\x04\x00\x00\x89\xCD\x59\x81\xC1\xC2\x6F\xD3\x7B\x56\xBE\x7D\x11\xFF\x3D\x81\xC6\x9D\xD4\xFD\xF8\x29\xF1\x5E\x81\xE9\x1C\x5B\x8C\x5F\x29\xE9\x52\xBA\x1C\x5B\x8C\x5F\x01\xD1\xFF\x34\x24\x5A\x83\xC4\x04\x81\xC1\x1A\xE6\xFC\x36\x81\xE9\xC2\x6F\xD3\x7B\xFF\x34\x24\x8B\x2C\x24\x83\xC4\x04\x57\x54\x5F\x81\xC7\x04\x00\x00\x00\x52\x57\xBF\x24\x2F\xF7\x5D\x89\xFA\x5F\x52\x89\x0C\x24\xB9\xB5\xB1\x7C\x55\xF7\xD9\xC1\xE1\x08\x81\xF1\x84\x5C\x7F\x65\x81\xF1\xE4\xFA\xFB\x3F\x81\xC1\xC0\x41\x2C\x84\x31\xCA\x59\x01\xD7\x8B\x14\x24\x81\xC4\x04\x00\x00\x00\x87\x3C\x24\x5C\x55\x53\xBB\x48\x50\xDF\x4F\x81\xEB\x25\xC8\x52\x7D\x81\xEB\x0A\x7D\x3E\x6F\xC1\xE3\x07\xF7\xDB\x43\x81\xEB\x65\x5C\x91\x09\x89\xDD\x5B\x83\xEC\x04\x89\x34\x24\x68\x28\x9D\xC9\x3F\x89\x0C\x24\xB9\xF6\x77\xF7\x7F\x89\xCE\x59\x55\x89\x0C\x24\xB9\x64\x2E\xBF\x7F\x81\xEE\xF9\x57\x8D\x1B\x81\xC6\xEB\xEC\x35\x7F\x01\xCE\x81\xEE\xEB\xEC\x35\x7F\x81\xC6\xF9\x57\x8D\x1B\x59\x51\xB9\x49\xE9\xD4\x79\x01\xCE\x59\xC1\xEE\x02\x81\xEE\xFF\xFF\xFF\xFF\xF7\xDE\x50\xB8\x99\x5C\xA2\x9F\x31\xC6\x58\x31\xF5\x8B\x34\x24\x83\xC4\x04\xF7\xDD\x4D\x57\x89\x34\x24\xBE\x81\xA7\xBF\x6D\x81\xEE\x01\x00\x00\x00\x81\xEE\xEA\xB3\xFD\x0D\x56\xFF\x04\x24\x5E\x81\xC6\x35\xFD\x97\xD1\x81\xED\xB5\x28\xBB\x1D\x01\xF5\x81\xC5\xB5\x28\xBB\x1D\x5E\x81\xE9\xCD\x8A\xBD\x5F\x29\xE9\x81\xC1\xCD\x8A\xBD\x5F\x5D\x52\x89\x04\x24\x68\x44\xC4\xE2\x79\x89\x3C\x24\xC7\x04\x24\x6F\x28\xFF\x5F\xFF\x04\x24\xFF\x0C\x24\x81\x2C\x24\xF3\xCD\xA7\xF8\x8B\x04\x24\x83\xC4\x04\xC1\xE0\x07\x57\xBF\xC4\xA0\x93\x7F\x81\xC7\x81\x65\x9A\x7F\xC1\xE7\x02\x56\xBE\x01\x00\x00\x00\x29\xF7\x5E\x81\xF7\x13\x3E\x14\x57\x31\xF8\x5F\x55\x89\x04\x24\x81\x04\x24\x55\x9B\x6E\x7F\x8B\x2C\x24\x83\xC4\x04\x53\x55\x56\xC7\x04\x24\x80\xA1\x7C\x5F\x5D\xC1\xE5\x05\x52\xBA\x96\x1E\xFF\x77\x81\xF2\xC3\xB5\x05\xE7\x31\xD5\x5A\x89\xEB\x8B\x2C\x24\x51\x89\xE1\x81\xC1\x04\x00\x00\x00\x83\xC1\x04\x87\x0C\x24\x5C\x29\xDD\x8B\x1C\x24\x83\xC4\x04\x8B\x04\x24\x81\xC4\x04\x00\x00\x00\x57\x68\xBA\x6F\xFF\x7D\x8B\x3C\x24\x81\xC4\x04\x00\x00\x00\xC1\xEF\x08\x81\xEC\x04\x00\x00\x00\x89\x34\x24\xBE\xE6\xBA\x81\x5D\x53\xBB\xCF\xD2\xBF\x6F\x01\xDF\x5B\x01\xF7\x50\xB8\xCF\xD2\xBF\x6F\x29\xC7\x58\x5E\x81\xC5\xF3\x84\x7F\x7E\x01\xFD\x81\xED\xF3\x84\x7F\x7E\x5F\x81\xED\x1D\xA8\xFE\x4C\x81\xC5\x50\xD1\xE1\x5F\x01\xCD\x56\xBE\x50\xD1\xE1\x5F\x81\xC5\x82\xA1\xFF\x7A\x29\xF5\x81\xED\x82\xA1\xFF\x7A\x5E\x81\xC5\x1D\xA8\xFE\x4C\x51\x57\xBF\xCA\x62\xDF\x7F\x81\xCF\x00\x1D\xF6\x7B\xC1\xE7\x08\xC1\xEF\x03\x81\xCF\x32\x5C\x3D\x6E\x81\xCF\x0D\x21\x7B\x4B\x81\xC7\xD6\xBC\xFF\xDD\x89\xF9\x5F\x81\xED\xB8\x03\xBF\x7E\x29\xCD\x81\xC5\xB8\x03\xBF\x7E\x8B\x0C\x24\x68\x01\x76\x12\x75\x89\x0C\x24\x89\xE1\x81\xC1\x04\x00\x00\x00\x83\xC1\x04\x87\x0C\x24\x5C\x83\xEC\x04\x89\x3C\x24\x89\xE7\x55\x89\xE5\x81\xC5\x04\x00\x00\x00\x83\xED\x04\x87\x2C\x24\x5C\x89\x34\x24\x89\x1C\x24\x55\xBD\x2F\x3A\x6F\x6A\x89\xEB\x5D\x56\xBE\x17\x30\x3F\x2E\x01\xF3\x8B\x34\x24\x83\xC4\x04\x83\xEB\xFF\x81\xC3\xBD\x95\x51\x67\x81\xEF\x67\xA2\x7E\x4D\x01\xDF\x53\xBB\xD4\x89\x3F\x7E\x83\xC3\xFF\x81\xCB\xE3\xC9\x7B\x4D\x4B\x4B\x81\xF3\x96\x6B\x01\x32\x01\xDF\x5B\x8B\x1C\x24\x81\xC4\x04\x00\x00\x00\x50\xB8\x04\x00\x00\x00\x29\xC7\x58\x51\x89\x3C\x24\xFF\x74\x24\x04\x8B\x3C\x24\x81\xC4\x04\x00\x00\x00\x8F\x04\x24\x8B\x24\x24\x89\x0C\x24\x55\xBD\xBF\x0D\x26\x37\x81\xCD\x9E\x5C\xDE\x17\x81\xF5\xCF\x5D\xED\x2C\x81\xED\xFF\xFF\xFF\xFF\x51\xB9\xCE\xBF\xFF\x7F\x01\xCD\x8B\x0C\x24\x53\x89\xE3\x81\xC3\x04\x00\x00\x00\x83\xC3\x04\x87\x1C\x24\x5C\x83\xEC\x04\x89\x14\x24\xBA\x3F\x80\xFD\x7B\x09\xD5\xFF\x34\x24\x8B\x14\x24\x81\xC4\x04\x00\x00\x00\x52\x89\x2C\x24\x54\x5D\x81\xC5\x04\x00\x00\x00\x81\xC5\x04\x00\x00\x00\x87\x2C\x24\x8B\x24\x24\x51\xB9\xC2\x3F\x00\x04\x81\xC5\xF4\x8F\xFF\x7D\x01\xCD\x81\xED\xF4\x8F\xFF\x7D\x8B\x0C\x24\x81\xC4\x04\x00\x00\x00\x56\x89\x2C\x24\x59\x8B\x2C\x24\x81\xC4\x04\x00\x00\x00\x68\xC6\x7E\x1D\x4A\x89\x1C\x24\x89\xE3\x81\xC3\x04\x00\x00\x00\x81\xEB\x04\x00\x00\x00\x87\x1C\x24\x8B\x24\x24\x89\x3C\x24\x56\x68\x57\x8F\x6C\x3D\x8B\x34\x24\x83\xC4\x04\xC1\xE6\x02\xF7\xD6\xC1\xE6\x03\x81\xC6\x3B\xEB\x91\xAD\x89\xF7\xFF\x34\x24\xFF\x34\x24\x5E\x53\x54\x5B\x51\xB9\x04\x00\x00\x00\x01\xCB\x59\x81\xC3\x04\x00\x00\x00\x87\x1C\x24\x5C\x68\x45\x73\x55\x7C\x89\x0C\x24\x89\xE1\x81\xC1\x04\x00\x00\x00\x83\xC1\x04\x33\x0C\x24\x31\x0C\x24\x33\x0C\x24\x8B\x24\x24\x55\x89\xFD\x89\xEB\x5D\x8B\x3C\x24\x81\xC4\x04\x00\x00\x00\x31\xC0"
//#define CODE "\xFF\x34\x24\x8B\x0C\x24\x81\xC4\x04\x00\x00\x00\x81\xEC\x04\x00\x00\x00\x89\x04\x24\x89\x34\x24\x89\xE6\x68\x55\xB9\xAC\x24\x89\x2C\x24\x52\xBA\xAE\x2D\x7D\x5F\x89\xD5\x5A\xF7\xD5\x50\xC7\x04\x24\x81\xD5\xA1\x48\x89\x3C\x24\x89\x34\x24\xBE\xF2\x3B\xFF\x6F\x09\xF5\x8B\x34\x24\x81\xC4\x04\x00\x00\x00\xF7\xD5\x81\xF5\xE2\xA5\xDF\x7D\x53\xBB\x4D\x68\xED\x4F\x81\xF3\xD4\x36\xF7\x71\x43\x43\xC1\xEB\x01\x81\xC3\xC9\x2E\x13\x73\x01\xDD\x5B\x81\xC6\x96\xE8\xF8\x03\x81\xC6\x15\x52\xBD\x75\x01\xEE\x81\xEE\x15\x52\xBD\x75\x51\xB9\x96\xE8\xF8\x03\x29\xCE\x59\x8B\x2C\x24\x81\xC4\x04\x00\x00\x00\x81\xC6\x04\x00\x00\x00\x56\xFF\x74\x24\x04\x5E\x8F\x04\x24\x5C\x51\x54\x59\x50\xB8\x04\x00\x00\x00\x01\xC1\x58\x55\xBD\x04\x00\x00\x00\x81\xE9\x5D\xB0\xF9\x29\x29\xE9\x50\xB8\x5D\xB0\xF9\x29\x01\xC1\x58\x5D\x87\x0C\x24\x8B\x24\x24\x89\x14\x24\x53\xBB\xD2\x64\x0D\x27\x53\x5A\x5B\x51\xB9\xF8\xF4\xCF\x7C\xF7\xD1\x87\xE9\x45\x87\xE9\x81\xE9\x48\x89\x3F\x7D\x81\xE9\xFC\xF4\xA3\x5B\x81\xEC\x04\x00\x00\x00\x89\x0C\x24\xF7\x1C\x24\x59\x81\xC1\x1D\x28\x3F\x83\x01\xCA\x59\x89\xD3\x8B\x14\x24\x56\x54\x8B\x34\x24\x83\xC4\x04\x81\xC6\x04\x00\x00\x00\x81\xC6\x04\x00\x00\x00\x33\x34\x24\x31\x34\x24\x33\x34\x24\x5C\x50\x83\xEC\x04\x89\x0C\x24\x55\x57\x68\x00\xB2\xBE\x6E\x5F\x81\xEF\xCD\x3B\x3F\x7F\x81\xF7\x1E\xA1\x8C\x98\x89\xFD\x5F\x50\xB8\xBA\x27\xFB\x74\x29\x44\x24\x08\x58\x01\x6C\x24\x04\x81\x44\x24\x04\xBA\x27\xFB\x74\xFF\x34\x24\xFF\x34\x24\x5D\x81\xC4\x04\x00\x00\x00\x81\xC4\x04\x00\x00\x00\x58\x56\x89\x3C\x24\x89\x14\x24\xBA\xA8\x83\xFD\x14\x81\xE2\x22\xD6\x1D\x7D\x81\xEA\xF3\xAA\x29\x9C\x29\xD0\x5A\x50\x81\x04\x24\xF4\x99\x73\x7E\x8F\x44\x1D\x00\x51\x55\xBD\x85\x1B\xDF\x41\x89\xE9\x5D\x81\xE9\x96\x3E\x8F\x7B\x57\xBF\xDB\xC3\x8D\x6B\xF7\xD7\x81\xF7\xA3\x94\x79\x77\xF7\xDF\x81\xF7\xAE\xD8\x28\x5B\x21\xF9\x5F\xC1\xE9\x02\x49\xF7\xD1\x81\xF1\x3B\x45\x1F\x90\x29\x4C\x1D\x00\x59\xFF\x34\x24\x58\x83\xC4\x04\x56\xBE\x61\x2E\xFE\x3D\x81\xEE\x9A\x13\xEB\x72\x50\xB8\xF5\x9E\x77\x6B\x25\x97\x34\xBC\x7F\x81\xEC\x04\x00\x00\x00\x89\x3C\x24\xBF\x02\xD2\xF5\x5F\xC1\xE7\x04\x81\xF7\xA6\xAA\x8F\x2F\x4F\x4F\xC1\xE7\x08\x50\xB8\xA8\xC1\x7A\x79\xC1\xE0\x08\x48\x05\x7B\xBA\xFD\x37\xF7\xD0\xC1\xE8\x02\x2D\x6F\xA2\x74\x6B\x01\xC7\x8B\x04\x24\x81\xC4\x04\x00\x00\x00\x31\xF8\x5F\x53\xBB\x5C\x6D\x4F\x5F\x81\xCB\x58\x4C\x67\x0F\xC1\xEB\x08\x52\xBA\x00\xC0\xFB\x79\x09\xD3\x8B\x14\x24\x83\xC4\x04\x81\xEB\xB0\x64\xDD\x57\x81\xF3\xE5\x81\xF1\x83\x05\x42\xF2\xFF\x6C\x29\xD8\x2D\x42\xF2\xFF\x6C\x5B\x31\xC6\x58\x4E\x50\x57\x56\x68\x32\x45\xEB\x39\x8B\x34\x24\x81\xC4\x04\x00\x00\x00\x81\xE6\x51\x9A\xFF\x6F\x46\x81\xC6\x45\x0B\x81\x7A\x89\xF7\x8B\x34\x24\x83\xC4\x04\x89\xF8\x5F\x31\xC6\x8B\x04\x24\x83\xC4\x04\x89\xF3\x5E\x53\xC7\x04\x24\xA0\x09\x4B\x06\x89\x0C\x24\x68\x00\x00\x40\x00\x8B\x0C\x24\x81\xC4\x04\x00\x00\x00\x51\x89\xE1\x50\xB8\x04\x00\x00\x00\x01\xC1\x8B\x04\x24\x81\xC4\x04\x00\x00\x00\x55\xBD\x04\x00\x00\x00\x81\xEC\x04\x00\x00\x00\x89\x14\x24\xBA\x46\x3F\xF9\x7F\x81\xCA\x32\xF6\xFF\x63\x50\xB8\x42\x74\x20\x62\x31\xC2\x58\x29\xD1\x5A\x29\xE9\x81\xC1\x34\x8B\xDF\x1D\x8B\x2C\x24\x83\xC4\x04\x51\xFF\x74\x24\x04\xFF\x34\x24\x59\x83\xC4\x04\x8F\x04\x24\x5C\x89\x0C\x24\x81\x04\x24\xFA\x14\x7F\x47\x8F\x44\x1D\x00\x81\x6C\x1D\x00\xFA\x14\x7F\x47\x8B\x0C\x24\x83\xC4\x04\x55\xC7\x04\x24\x72\xC1\x4F\x5F\x5B\xF7\xDB\x51\x89\xE1\x81\xC1\x04\x00\x00\x00\x81\xE9\x04\x00\x00\x00\x87\x0C\x24\x5C\x89\x04\x24\x55\xBD\xED\x58\xFF\x7F\x87\xD5\x57\xBF\xF1\xEB\xEF\x6F\x81\xC7\x22\x1A\xD7\x67\x81\xE7\x85\x0E\x3D\x5F\x81\xF7\x00\x10\xEF\x7E\xC1\xE7\x03\x81\xF7\xF7\x4F\xAF\xB0\x01\xFA\x5F\x87\xD5\x81\xCD\x07\x63\xFB\x7B\x50\xB8\x01\x2F\xC6\x37\x81\xC5\xBB\xEE\xFE\x6D\x81\xED\x94\x43\xFF\x77\x29\xC5\x81\xC5\x94\x43\xFF\x77\x81\xED\xBB\xEE\xFE\x6D\x58\xF7\xDD\x81\xE5\x90\xB8\xEF\x76\x81\xED\x50\x07\x10\xD9\x89\xE8\xFF\x34\x24\x5D\x51\x89\xE1\x81\xC1\x04\x00\x00\x00\x83\xC1\x04\x87\x0C\x24\x5C\x68\x00\x00\x00\x00\x29\x04\x24\x58\x52\xBA\x8E\xAB\xAD\x62\x29\xD0\x5A\x29\xC3\x58\x55\xBD\xBB\x92\x14\x61\x29\xEB\x8B\x2C\x24\x83\xC4\x04\xFF\x74\x24\x28\xFF\x34\x24\x58\x52\x68\xCB\x44\x08\x0D\x89\x34\x24\x89\x24\x24\x83\xEC\x04\x89\x14\x24\x89\x04\x24\xB8\x5B\x6F\x5F\x67\x51\xB9\x84\x4C\xAB\x5F\x31\xC8\x59\x52\xBA\xDA\x31\x3B\x7F\x29\xD0\x5A\x52\xBA\x39\xFC\xFF\x7F\x21\xD0\x5A\xC1\xE8\x03\x0D\x68\x96\x79\x1C\x53\xBB\x1E\x22\xBF\x53\x81\xE3\x2A\xED\x90\x62\x81\xF3\x75\xEB\x1F\x3F\x81\xEB\x96\x30\x75\x6A\x81\xF3\x75\xFB\x9A\xF3\x01\xD8\x5B\x01\x44\x24\x04\x8B\x04\x24\x83\xC4\x04\x5A\x81\xC2\x04\x00\x00\x00\x55\xBD\x04\x00\x00\x00\x81\xEA\x5A\xC1\xEB\x2F\x01\xEA\x81\xC2\x5A\xC1\xEB\x2F\x5D\x33\x14\x24\x31\x14\x24\x33\x14\x24\x8B\x24\x24\x2D\x56\x7E\x9F\x6F\x2D\xFA\xFE\xB7\x25\x01\xC8\x68\x9B\x7D\x2D\x4D\x89\x04\x24\x54\x58\x05\x04\x00\x00\x00\x2D\x04\x00\x00\x00\x87\x04\x24\x5C\x89\x3C\x24\x56\x89\x14\x24\xBA\x03\x33\x93\x1A\x52\x52\xBA\x38\x04\xFF\x7F\x31\x54\x24\x04\x5A\x5F\x81\xF7\x38\x04\xFF\x7F\x5A\xC1\xEF\x03\x81\xEF\x9A\xCC\xE3\x7D\x81\xC7\x34\x65\x49\xA0\x2D\xFF\x93\xFF\x7D\x01\xF8\x05\xFF\x93\xFF\x7D\x5F\x81\xEC\x04\x00\x00\x00\x89\x2C\x24\x53\xBB\xD2\x2E\xF7\x6B\x68\x84\x50\x68\x04\x5D\x31\xDD\x5B\x05\x8F\x60\xDF\x7F\x01\xE8\x56\xBE\x8F\x60\xDF\x7F\x29\xF0\x5E\x8B\x2C\x24\x56\x89\xE6\x81\xC6\x04\x00\x00\x00\x83\xC6\x04\x87\x34\x24\x5C\x68\x96\x53\x6B\x6E\x89\x14\x24\x89\xDA\x68\xE4\x02\xB7\x7D\x89\x2C\x24\x51\xB9\x26\xB1\xFB\x6F\x41\x49\x49\x81\xC9\x13\x0B\xED\x68\x81\xF1\xC4\xF1\x62\x17\x51\x81\x2C\x24\xD8\xBF\xEF\x3B\x5D\x57\xBF\xC1\xE6\x0B\x7F\xF7\xDF\xC1\xEF\x08\x81\xE7\x48\x45\x3C\x7B\x4F\xC1\xE7\x06\x81\xF7\x18\xBE\xFE\x3B\x01\xFD\x5F\x59\x81\xF5\xF3\x4A\x9D\x78\x01\xEA\x8B\x2C\x24\x83\xC4\x04\x53\x89\xE3\x81\xC3\x04\x00\x00\x00\x51\xB9\x5F\x2D\xEC\x37\x49\x53\xBB\xA6\xD2\x13\xC8\x01\xD9\x5B\x29\xCB\x59\x87\x1C\x24\x8B\x24\x24\x89\x2C\x24\xBD\x47\x0E\x4F\x7D\x81\xC5\x03\xA0\x3A\x69\x52\xBA\x50\x6F\x76\xF1\x31\xD5\x8B\x14\x24\x81\xC4\x04\x00\x00\x00\x81\xC2\x9E\xBC\xEB\x2F\x01\xEA\x81\xEA\x9E\xBC\xEB\x2F\x5D\x01\xEA\x81\xEA\x1A\xC1\xFF\x17\x53\x89\xC3\x89\x1A\x5B\x5A\x51\x56\xBE\x0D\x32\xDB\x3A\xC1\xE6\x03\x81\xF6\x2E\x6C\x66\xE9\x68\x00\x00\x00\x00\x81\x04\x24\xCC\x9A\xFF\x3F\x29\x34\x24\x81\x2C\x24\xCC\x9A\xFF\x3F\x5E\x31\xCE\x31\xF1\x31\xCE\x41\x87\xCE\xC1\xE6\x05\x83\xEC\x04\x89\x14\x24\x68\x2C\xA2\xFA\x64\x89\x1C\x24\x51\x89\x2C\x24\x68\x03\xB0\x79\x1F\x5D\xC1\xE5\x08\xF7\xD5\xF7\xDD\x56\xBE\x04\x70\xCF\xF2\x01\xF5\x5E\x89\xEB\x5D\x53\x5A\x5B\x81\xC6\x23\x49\xFA\x0F\x01\xD6\x81\xEE\x23\x49\xFA\x0F\x5A\x81\xEE\xEC\x52\x7C\x74\x89\xF1\x5E\x83\xEC\x04\x89\x0C\x24\x52\xBA\xD6\x3C\xFF\x07\x29\x54\x24\x04\x5A\x58\x56\xBE\xD6\x3C\xFF\x07\x01\xF0\x5E\x59\x83\xEC\x04\x89\x04\x24\x89\x34\x24\x54\x5E\x55\x52\xBA\x04\x00\x00\x00\x89\xD5\x5A\x01\xEE\x5D\x55\xBD\x04\x00\x00\x00\x29\xEE\x5D\x33\x34\x24\x31\x34\x24\x33\x34\x24\x8B\x24\x24\x89\x3C\x24\xBF\x00\x33\xEF\x77\x29\xF8\x5F\x05\xBB\x52\x4D\x76\x05\x00\x42\xFB\x7D\x01\xC8\x2D\x00\x42\xFB\x7D\x2D\xBB\x52\x4D\x76\x68\x95\xF9\xFC\x10\x89\x1C\x24\xBB\x75\xDD\xBF\x1E\x81\xC3\x04\x1A\xEA\x7A\x81\xE3\x60\xB4\x77\x7F\x53\x89\x34\x24\xBE\x14\xE0\xBD\x37\x68\xEE\x91\x2F\x73\x89\x3C\x24\xBF\x74\x67\x73\x59\x31\xFE\x5F\x31\xF3\x5E\x01\xD8\x5B\x56\xBE\x93\x8A\x77\x7D\x81\xF6\x7D\xE9\x7F\x7C\x81\xEE\xD8\xA2\x49\x91\x87\xEE\x55\xF7\x14\x24\x8B\x2C\x24\x81\xC4\x04\x00\x00\x00\x31\xEE\x31\xF5\x31\xEE\x53\x53\x89\x04\x24\xB8\xD6\x3E\x41\x90\x89\xC3\xFF\x34\x24\x58\x83\xC4\x04\x31\xDE\x5B\x51\xC7\x04\x24\x15\x29\x1C\x7E\x89\x2C\x24\x68\x13\x3C\xEE\x52\x89\x34\x24\x8B\x2C\x24\x50\x89\xE0\x05\x04\x00\x00\x00\x05\x04\x00\x00\x00\x87\x04\x24\x5C\x89\xEB\x5D\xFF\x34\x24\x5E\x81\xC4\x04\x00\x00\x00\xFF\x74\x1D\x00\xFF\x34\x24\xFF\x34\x24\xFF\x34\x24\x8B\x14\x24\x83\xC4\x04\x83\xC4\x04\x52\x89\xE2\x81\xC2\x04\x00\x00\x00\x81\xEA\x04\x00\x00\x00\x87\x14\x24\x5C\x89\x04\x24\x52\x89\xE2\x81\xC2\x04\x00\x00\x00\x81\xEA\x04\x00\x00\x00\x33\x14\x24\x31\x14\x24\x33\x14\x24\x5C\x89\x24\x24\x83\x04\x24\x04\x58\x51\xB9\x02\x06\xEC\x52\x52\xBA\xBA\x12\xC9\x2C\x81\xE2\x90\x62\x7E\x5A\x81\xEA\xEE\xF9\x88\xA8\x21\xD1\x5A\x81\xF1\x49\x59\xFA\x5F\xC1\xE9\x05\x81\xF1\xCE\xB2\x6A\x00\x01\xC8\x59\x52\xBA\x04\x00\x00\x00\x01\xD0\x5A\x33\x04\x24\x31\x04\x24\x33\x04\x24\x5C\x83\xC4\x04"

//test1.txt x32
//#define CODE "\x66\x51\x68\xCB\x63\x00\x00\x3E\x89\x1C\x24\x66\xBB\xDB\x12\x66\xF7\xD3\x66\x81\xCB\x0C\x39\x66\x81\xF3\x2C\xFD\x55\x66\x89\xDD\x66\x89\xE9\x5D\x3E\x8B\x1C\x24\x56\x3E\x89\x14\x24\x89\xE2\x83\xC2\x04\x83\xEA\x04\x3E\x87\x14\x24\x3E\x8B\x24\x24\x3E\x89\x04\x24\x89\xE0\x83\xC0\x04\x83\xC0\x04\x3E\x87\x04\x24\x3E\x8B\x24\x24\x66\x81\xE9\x4D\x07\x66\x29\xC1\x66\x81\xC1\x4D\x07\x66\x31\xC8\x66\x31\xC1\x66\x31\xC8\x66\x3E\x8B\x0C\x24\x68\x1C\x30\x00\x00\x3E\x89\x2C\x24\x3E\x89\x34\x24\x89\xE6\x53\xBB\x03\x5D\x1F\x70\x50\xB8\x3B\x2C\x32\x60\xC1\xE0\x03\xF7\xD8\xF7\xD8\x05\x2F\xFB\x8D\x6E\x31\xC3\x58\x81\xEE\x40\x2E\x44\x49\x81\xC6\xB0\x58\xDA\x73\x01\xDE\x81\xEE\xB0\x58\xDA\x73\x81\xC6\x40\x2E\x44\x49\x3E\x8B\x1C\x24\x83\xC4\x04\x68\x50\x23\x00\x00\x3E\x89\x2C\x24\xBD\x02\x00\x00\x00\x81\xC6\xDC\x0D\x49\x5F\x01\xEE\x81\xEE\xDC\x0D\x49\x5F\x5D\x3E\x33\x34\x24\x3E\x31\x34\x24\x3E\x33\x34\x24\x3E\x8B\x24\x24"

//root new test #1 x32
//#define CODE "\x50\x89\xC8\x05\x00\x00\x00\x00\x01\xD8\x31\x30\x58\x33\x34\x0B\x52\x89\xCA\x81\xC2\x00\x00\x00\x00\x01\xDA\x31\x32\x5A\x56\xF7\x14\x24\x5E\x87\x34\x0B\x56\x68\xFF\x08\x00\x00\x89\x34\x24\x83\xEC\x04\x89\x24\x24\x81\x04\x24\x04\x00\x00\x00\x5E\x81\xC6\x04\x00\x00\x00\x81\xEE\x04\x00\x00\x00\x33\x34\x24\x31\x34\x24\x33\x34\x24\x5C\x89\x2C\x24\xBD\xF0\x04\x0D\x7F\x81\xED\xB4\x1F\x3A\x18\x81\xF5\xC3\x1A\x2D\x99\x53\x51\x89\xE9\x51\x5B\x59\x89\xDE\xFF\x34\x24\x5B\x81\xC4\x04\x00\x00\x00\x5D\x29\x34\x0B\x5E"

//root new test #2 x32 -> STACK PROBLEMS
//#define CODE "\x66\x68\x59\x22\x66\x89\x04\x24\x66\x51\x66\x8B\x04\x24\x81\xEC\x04\x00\x00\x00\x89\x04\x24\x54\x58\x83\xEC\x04\x89\x3C\x24\xBF\xD4\x7E\xFB\x17\x81\xF7\x57\x5C\x5B\x52\xF7\xD7\x47\x55\xBD\x79\xDD\x5F\xBA\x31\xEF\x5D\x01\xF8\x5F\x2D\x04\x00\x00\x00\x33\x04\x24\x31\x04\x24\x33\x04\x24\x8B\x24\x24\x89\x1C\x24\x54\x5B\x81\xC3\x04\x00\x00\x00\x57\xBF\x02\x00\x00\x00\x01\xFB\x8B\x3C\x24\x83\xC4\x04\x83\xEC\x04\x89\x1C\x24\xFF\x74\x24\x04\x5B\x8F\x04\x24\x8B\x24\x24\x66\x8B\x0C\x24\x83\xC4\x02"

//root new test #3 x32
//#define CODE "\x52\x89\xE2\x81\xC2\x04\x00\x00\x00\x81\xEA\x04\x00\x00\x00\x87\x14\x24\x5C\x89\x34\x24\x89\x3C\x24\xBF\x32\x36\x51\x68\x4F\x81\xC7\x26\x58\xC3\x7D\x57\x89\x1C\x24\xBB\x00\x00\x00\x00\x52\x89\xE2\x81\xC2\x04\x00\x00\x00\x83\xEA\x04\x87\x14\x24\x5C\x89\x2C\x24\xBD\xC3\x68\x0A\x75\x45\x81\xCD\x07\x7B\x6B\x1D\xF7\xDD\x45\x81\xCD\xE3\x49\x3C\x0D\x81\xED\x3F\xAC\x9A\x89\x81\xEB\xDA\x5A\x89\x54\x01\xEB\x81\xC3\xDA\x5A\x89\x54\x5D\x29\xFB\x81\xEB\xBC\x21\x22\x06\x68\xF5\x62\x00\x00\x89\x1C\x24\x5F\x8B\x1C\x24\x83\xC4\x04\x68\xD2\x4E\x00\x00\x89\x2C\x24\xBD\xC1\x96\x8D\xFE\x31\xEF\x5D\x09\xBA\x8C\x06\x93\x8B\xFF\x34\x24\x5F\x53\x89\xE3\x81\xC3\x04\x00\x00\x00\x81\xC3\x04\x00\x00\x00\x87\x1C\x24\x5C"

//root new test #4 x32
//#define CODE "\x57\xBF\x1C\x11\xD9\x3F\x31\xDF\x31\xFB\x31\xDF\xF7\xD3\x87\xDF\xC1\xE7\x07\x56\x89\x0C\x24\x89\x2C\x24\x68\x69\x4E\x29\x63\x8B\x2C\x24\x81\xC4\x04\x00\x00\x00\x21\xEF\xFF\x34\x24\x5D\x53\x54\x5B\x81\xC3\x04\x00\x00\x00\x52\x50\xB8\x64\x07\xE5\x7B\xF7\xD8\xF7\xD8\x48\x2D\x14\x1B\x95\x28\x40\x57\x51\xB9\x4C\xEC\x4F\x53\x89\xCF\x59\x29\xF8\x5F\x89\xC2\x58\x01\xD3\x5A\x33\x1C\x24\x31\x1C\x24\x33\x1C\x24\x5C\xC1\xE7\x07\x47\x81\xEF\x35\x6D\x23\x0B\x2D\xD8\x6A\xBF\x1B\x01\xF8\x05\xD8\x6A\xBF\x1B\xFF\x34\x24\x5F\x83\xC4\x04"

//root new test #5 x32
//#define CODE "\x68\x82\x10\x64\x5A\x8B\x3C\x24\x57\x89\xE7\x52\x89\x1C\x24\x68\xF6\x19\x00\x00\x89\x34\x24\xBE\xBF\x5C\x33\x15\x50\xB8\x5A\x40\x67\x29\x01\xC6\x58\x56\xFF\x0C\x24\x5E\x83\xEE\xFF\x83\xEC\x04\x89\x14\x24\x51\xB9\x05\x35\x1E\x49\xBA\x1F\x35\x29\x0F\x31\xCA\x59\x50\x57\xBF\xB1\x0A\x09\x52\x89\xF8\x5F\xC1\xE0\x07\x83\xE8\xFF\x2D\x0F\xE3\xBD\xFA\x01\xC2\x8B\x04\x24\x83\xC4\x04\x81\xC2\xFF\xFF\xFF\xFF\x81\xC2\x54\x39\x1A\x31\x51\xB9\x22\x75\xE1\x6F\x09\xCA\x59\x81\xF2\x7D\xD9\x4C\xAB\x53\xBB\xED\x0D\x38\x67\x29\xDE\x5B\x29\xD6\x81\xC6\xED\x0D\x38\x67\x5A\x81\xF6\x93\x76\xE5\xF9\x89\xF3\x5E\x81\xC7\x12\x7A\x5E\x5B\x01\xDF\x55\xBD\x12\x7A\x5E\x5B\x81\xEF\xB0\x09\xCD\x35\x29\xEF\x81\xC7\xB0\x09\xCD\x35\x5D\x5B\x81\xC7\x04\x00\x00\x00\x87\x3C\x24\x8B\x24\x24"

//root new test #6 x32
//#define CODE "\x8B\x04\x24\x51\x89\xE1\x55\xBD\xFF\x0E\xB7\x6C\xF7\xD5\x87\xF5\x87\xDE\xF7\xD3\x87\xDE\x87\xF5\x87\xDD\x83\xC3\xFF\x87\xDD\xF7\xD5\x81\xED\xFD\xF0\x48\x93\x01\xE9\x5D\x56\x89\xE6\x68\xEA\x54\x00\x00\x89\x3C\x24\xBF\xC1\x26\xD5\x0B\x81\xF7\xC5\x26\xD5\x0B\x01\xFE\xFF\x34\x24\x8B\x3C\x24\x83\xC4\x04\x81\xC4\x04\x00\x00\x00\x83\xEE\x04\x87\x34\x24\x5C\x89\x2C\x24\xBD\x77\x2F\xDF\x2E\x81\xCD\x7E\x1A\x72\x1D\x87\xCD\xF7\xD1\x87\xCD\x81\xF5\x48\x0F\xEC\x2E\x68\x7A\x49\x00\x00\x89\x1C\x24\xBB\x3C\x30\x13\x11\x01\xDD\x5B\x01\xE9\x5D\x87\x0C\x24\x8B\x24\x24"

//root new test #7 x32
//#define CODE "\x68\x6F\x05\x00\x00\x89\x3C\x24\x89\x0C\x24"

//root new test #8 x32
//#define CODE "\x50\x56\x53\xBB\x8E\x29\x1C\x66\x89\xDE\x5B\x81\xF6\x57\x29\x1C\x66\x68\x2B\x10\x00\x00\x89\x2C\x24\x51\x89\x1C\x24\x52\x50\x89\xF0\x89\xC2\x58\x89\xD3\x5A\x57\x89\xDF\x89\xFD\x5F\x5B\x57\x89\xEF\x89\xF8\x5F\x8B\x2C\x24\x81\xC4\x04\x00\x00\x00\x5E\x68\xB7\x4A\x00\x00\x89\x14\x24\x53\xBB\xB0\x2D\xF9\x31\xBA\x90\xD4\x06\xCE\x81\xC2\xC7\x32\xEA\x1D\x01\xDA\x81\xEA\xC7\x32\xEA\x1D\x5B\x81\xEA\xFF\x34\x2B\x75\x01\xF2\x81\xC2\xFF\x34\x2B\x75\x31\x02\x5A\x8B\x04\x24\x57\x89\xE7\x81\xC7\x04\x00\x00\x00\x81\xC7\x04\x00\x00\x00\x87\x3C\x24\x8B\x24\x24"

//new random test #1 x32
//#define CODE "\x81\x04\x18\x77\x07\x00\x00\x81\x2C\x18\x77\x07\x00\x00\x81\x04\x19\x66\x06\x00\x00\x81\x04\x19\x11\x01\x00\x00"

//new random test #2 x32
#define CODE "\xBB\x66\x00\x00\x00\x83\xEB\x77\x74\x13"