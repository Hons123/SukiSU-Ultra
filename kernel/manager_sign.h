#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

#define EXPECTED_SIZE_SHIRKNEKO 0x316
#define EXPECTED_HASH_SHIRKNEKO                                                \
    "983f5d3fd2f27cabd963b59deefdadfafa051017a6f0fb1573cb0f2d14b80842"
typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
