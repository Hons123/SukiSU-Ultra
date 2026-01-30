#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ShirkNeko/SukiSU
#define EXPECTED_SIZE_SHIRKNEKO 0x35c
#define EXPECTED_HASH_SHIRKNEKO                                                \
    "947ae944f3de4ed4c21a7e4f7953ecf351bfa2b36239da37a34111ad29993eef"

#define EXPECTED_SIZE_HONS_IKUN 0x316  // 已根据APK实际长度更新
#define EXPECTED_HASH_HONS_IKUN "983f5d3fd2f27cabd963b59deefdadfafa051017a6f0fb1573cb0f2d14b80842"  // TODO: 需要替换为实际值

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
