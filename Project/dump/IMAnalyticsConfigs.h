/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "IMBaseConfigs.h"

@class IMNiceManager, NSString;

@interface IMAnalyticsConfigs : IMBaseConfigs
{
    BOOL _autoTrackSession;
    BOOL _autoTrackPayment;
    NSString *_eventServerURL;
    NSString *_ruleServerURL;
    NSString *_houseServerURL;
    int _maxDBLimit;
    int _maxEventsLimit;
    int _eventsPingInterval;
    int _eventsMaxRetry;
    int _maxKeyLength;
    int _maxValueLength;
    int _maxParamLimit;
    int _maxAppIdLength;
    int _minEventCapture;
    IMNiceManager *_niceManager;
}

+ (id)sharedConfigs;
- (void)setNiceManager:(id)fp8;
- (id)niceManager;
- (BOOL)autoTrackPayment;
- (void)setAutoTrackSession:(BOOL)fp8;
- (BOOL)autoTrackSession;
- (void)setMinEventCapture:(int)fp8;
- (int)minEventCapture;
- (void)setMaxAppIdLength:(int)fp8;
- (int)maxAppIdLength;
- (void)setMaxParamLimit:(int)fp8;
- (int)maxParamLimit;
- (void)setMaxValueLength:(int)fp8;
- (int)maxValueLength;
- (void)setMaxKeyLength:(int)fp8;
- (int)maxKeyLength;
- (void)setEventsMaxRetry:(int)fp8;
- (int)eventsMaxRetry;
- (void)setEventsPingInterval:(int)fp8;
- (int)eventsPingInterval;
- (void)setMaxEventsLimit:(int)fp8;
- (int)maxEventsLimit;
- (void)setMaxDBLimit:(int)fp8;
- (int)maxDBLimit;
- (void)setHouseServerURL:(id)fp8;
- (id)houseServerURL;
- (void)setRuleServerURL:(id)fp8;
- (id)ruleServerURL;
- (void)setEventServerURL:(id)fp8;
- (id)eventServerURL;
- (void).cxx_destruct;
- (void)setAutoTrackPayment:(BOOL)fp8;
- (BOOL)updateFromDictionary:(id)fp8 needValidation:(BOOL)fp12;
- (id)product;
- (id)init;

@end

