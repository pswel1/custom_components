// rosslare_decoder.h
inline uint8_t get_key_from_rosslare_bits(uint64_t bits) {
    if (bits == 0b110100) {
        return 0;
    } else if (bits == 0b110111) {
        return 11;
    } else if (bits == 0b011001) {
        return 22;
    } else {
        return (bits % 0x3C) / 2 & 0xF;
    }
}

