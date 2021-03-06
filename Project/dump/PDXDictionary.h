/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface PDXDictionary : _ADBannerContentSizeIdentifierLandscape
{
    struct nmsp_core_Dictionary_ *dict;
    BOOL own;
}

+ (id)createFromNativeObject:(id)fp8;
- (void)fillWithKeys:(id)fp8 andValues:(id)fp12;
- (void)dealloc;
- (struct nmsp_core_Dictionary_ *)peek;
- (struct nmsp_core_Dictionary_ *)detach;
- (void)addNullAtKey:(id)fp8;
- (void)addBytes:(const char *)fp8 length:(long)fp12 atKey:(id)fp16;
- (void)addDictionary:(id)fp8 atKey:(id)fp12;
- (void)addSequence:(id)fp8 atKey:(id)fp12;
- (void)addAsciiString:(const char *)fp8 atKey:(id)fp12;
- (void)addUtf8String:(const char *)fp8 atKey:(id)fp12;
- (void)addInteger:(int)fp8 atKey:(id)fp12;
- (id)getDictionary:(id)fp8;
- (id)getSequence:(id)fp8;
- (id)getBytes:(id)fp8;
- (id)getString:(id)fp8;
- (id)getData:(id)fp8;
- (id)getNative:(id)fp8;
- (int)getInteger:(id)fp8;
- (BOOL)keyExists:(id)fp8;
- (id)initWithNmspNmasDictionary:(struct nmsp_core_Dictionary_ *)fp8;
- (id)init;

@end

