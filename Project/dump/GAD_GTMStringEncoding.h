/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSData;

@interface GAD_GTMStringEncoding : _ADBannerContentSizeIdentifierLandscape
{
    NSData *charMapData_;
    char *charMap_;
    int reverseCharMap_[128];
    int shift_;
    int mask_;
    BOOL doPad_;
    BOOL paddingChar_;
    int padLen_;
}

+ (id)stringEncodingWithString:(id)fp8;
+ (id)rfc4648Base64WebsafeStringEncoding;
+ (id)rfc4648Base64StringEncoding;
+ (id)crockfordBase32StringEncoding;
+ (id)rfc4648Base32HexStringEncoding;
+ (id)rfc4648Base32StringEncoding;
+ (id)hexStringEncoding;
+ (id)binaryStringEncoding;
- (id)stringByDecoding:(id)fp8;
- (id)decode:(id)fp8;
- (id)encodeString:(id)fp8;
- (id)encode:(id)fp8;
- (void)setPaddingChar:(BOOL)fp8;
- (void)setDoPad:(BOOL)fp8;
- (BOOL)doPad;
- (void)ignoreCharacters:(id)fp8;
- (void)addDecodeSynonyms:(id)fp8;
- (id)description;
- (void)dealloc;
- (id)initWithString:(id)fp8;

@end

