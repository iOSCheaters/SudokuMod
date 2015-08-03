/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface IMMActionsRuleResponse : _ADBannerContentSizeIdentifierLandscape <NSCoding>
{
    BOOL success;
    NSDictionary *expiry;
    NSDictionary *rules;
    NSString *ruleId;
    long long ts;
}

+ (id)ruleResponseFromJson:(id)fp8 error:(id *)fp12;
- (void)setTs:(long long)fp8;
- (long long)ts;
- (void)setSuccess:(BOOL)fp8;
- (BOOL)success;
- (void)setRuleId:(id)fp8;
- (id)ruleId;
- (void)setRules:(id)fp8;
- (id)rules;
- (void)setExpiry:(id)fp8;
- (id)expiry;
- (void)dealloc;
- (BOOL)isEqual:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end
