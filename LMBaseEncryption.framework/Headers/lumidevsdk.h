
//文档说明
//https://confluence.aqara.com/pages/viewpage.action?pageId=60373638

/// 加密错误时返回 Encryption error:
char *aesEncryptedContent(const char *app_key, const char *plain_text);

/// 解密错误时返回 Decryption error:
char *aesDecryptedContent(const char *app_key, const char *encrypted_text);

