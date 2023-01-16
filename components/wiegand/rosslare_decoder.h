// rosslare_decoder.h
uint_8t get_key_from_rosslare_bits(unsigned int bits) {
    if (bits == 0b110100) {
        return 0;
    } else if (bits == 0b101111) {
        return 11;
    } else if (bits == 0b011001) {
        return 22;
    } else {
        return (bits % 0x3C) / 2 & 0xF;
    }
}

