//
//  LMAES.h
//  AES_128_GCM
//
//  Created by 禹祥瑞 on 2021/11/8.
//

#import <Foundation/Foundation.h>

/// 加密错误码
#define kLM_ENCRYPTION_ERROR_CODE   12345678

/// 解密错误码
#define kLM_DECRYPTION_ERROR_CODE   87654321

/// 错误域
#define kLM_ENCRYPTION_ERROR_DOMAIN @"LM_ENCRYPTION_ERROR_DOMAIN"

NS_ASSUME_NONNULL_BEGIN

@interface LMAES : NSObject

/**
 * 使用 AES 算法加密指定的字符串，并返回加密后的字符串。
 *
 * @param key 加密所用的密钥。
 * @param content 要加密的原始字符串。
 * @param error 如果发生错误，此指针会被设置为包含详细错误信息的 NSError 对象。
 * @return 返回加密后的字符串（Base64 编码），如果出错则返回 nil。
 */
+ (NSString *)AESEncryptedWithKey:(NSString *)key
                          content:(NSString *)content
                            error:(NSError **)error;

/**
 * 使用 AES 算法解密指定的加密字符串，并返回解密后的字符串。
 *
 * @param key 解密所用的密钥。
 * @param encryptedContent 要解密的加密字符串。
 * @param error 如果发生错误，此指针会被设置为包含详细错误信息的 NSError 对象。
 * @return 返回解密后的字符串，如果出错则返回 nil。
 */
+ (NSString *)AESDecryptedWithKey:(NSString *)key
                 encryptedContent:(NSString *)encryptedContent
                            error:(NSError **)error;

/**
 * 使用 AES 算法加密指定的 NSData 数据，并返回加密后的 NSData 数据（Base64 编码）。
 *
 * @param key 加密所用的密钥。
 * @param data 要加密的原始数据。
 * @param error 如果发生错误，此指针会被设置为包含详细错误信息的 NSError 对象。
 * @return 返回加密后的 NSData 数据（Base64 编码），如果出错则返回 nil。
 */
+ (NSData *)AESEncryptedWithKey:(NSString *)key
                           data:(NSData *)data
                          error:(NSError **)error;

/**
 * 使用 AES 算法解密指定的加密数据，并返回解密后的 NSData 数据（Base64 编码）。
 *
 * @param key 解密所用的密钥。
 * @param encryptedData 要解密的加密数据。
 * @param error 如果发生错误，此指针会被设置为包含详细错误信息的 NSError 对象。
 * @return 返回解密后的 NSData 数据，如果出错则返回 nil。
 */
+ (NSData *)AESDecryptedWithKey:(NSString *)key
                  encryptedData:(NSData *)encryptedData
                          error:(NSError **)error;

/**
 * 使用 AES 算法加密指定的 NSData 数据，并返回加密后的 NSData 数据（不进行 Base64 编码）。
 *
 * @param key 加密所用的密钥。
 * @param data 要加密的原始数据。
 * @param error 如果发生错误，此指针会被设置为包含详细错误信息的 NSError 对象。
 * @return 返回加密后的 NSData 数据（不进行 Base64 编码），如果出错则返回 nil。
 */
+ (NSData *)AESEncryptedNoBase64WithKey:(NSString *)key
                                   data:(NSData *)data
                                  error:(NSError **)error;

/**
 * 使用 AES 算法解密指定的加密数据，并返回解密后的 NSData 数据（不进行 Base64 编码）。
 *
 * @param key 解密所用的密钥。
 * @param data 要解密的加密数据。
 * @param error 如果发生错误，此指针会被设置为包含详细错误信息的 NSError 对象。
 * @return 返回解密后的 NSData 数据（不进行 Base64 编码），如果出错则返回 nil。
 */
+ (NSData *)AESDecryptedNoBase64WithKey:(NSString *)key
                                   data:(NSData *)data
                                  error:(NSError **)error;

@end
NS_ASSUME_NONNULL_END
