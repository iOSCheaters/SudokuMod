/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSCoding-Protocol.h"

@class NSData, NSDate, NSString;

@interface FlurryError : _ADBannerContentSizeIdentifierLandscape <NSCoding>
{
    int errorID;
    NSDate *date;
    NSString *errorString;
    NSString *errorMessage;
    NSString *exceptionString;
    int errorType;
    NSData *reportData;
}

+ (id)errorWithString:(id)fp8 message:(id)fp12 exceptionString:(id)fp16 errorType:(int)fp20 reportData:(id)fp24;
- (void)setReportData:(id)fp8;
- (id)reportData;
- (void)setErrorType:(int)fp8;
- (int)errorType;
- (void)setExceptionString:(id)fp8;
- (id)exceptionString;
- (void)setErrorMessage:(id)fp8;
- (id)errorMessage;
- (void)setErrorString:(id)fp8;
- (id)errorString;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setErrorID:(int)fp8;
- (int)errorID;
- (void)dealloc;
- (id)description;
- (void)appendToData:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)init;

@end
