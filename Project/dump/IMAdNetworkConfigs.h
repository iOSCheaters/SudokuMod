/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "IMBaseConfigs.h"

@class IMHTTPRequestParams, NSNumber, NSString;

@interface IMAdNetworkConfigs : IMBaseConfigs
{
    BOOL _adIsModal;
    BOOL _adHasCustomClose;
    BOOL _adIsPortrait;
    BOOL _adOrientationLocked;
    BOOL _adOrientationChangeAllowed;
    BOOL _adAutoplayEnabled;
    BOOL _adPlayInLoop;
    BOOL _adIsMuted;
    BOOL _adShowControls;
    NSString *_adServerURL;
    IMHTTPRequestParams *_adServerRequestParams;
    NSString *_appGalleryURL;
    int _sampleFactor;
    int _hrefTagLength;
    int _hrefKeyLength;
    int _maxSupportedMediaCount;
    int _niceRequestMinInterval;
    int _pingMaxRetryCount;
    float _micIntensityInterval;
    unsigned int _maxCacheLimit;
    unsigned int _fetchLimitPerId;
    unsigned int _minThresholdPerId;
    unsigned int _requestCount;
    NSNumber *_requestCountSync;
    double _minRefreshInterval;
    double _defaultRefreshInterval;
    double _adFetchTimeout;
    double _adRenderTimeout;
    struct CGSize _adDefaultSize;
    double _pingRetryInterval;
    double _pingTimeout;
}

+ (id)sharedConfigs;
- (void)setRequestCountSync:(id)fp8;
- (id)requestCountSync;
- (void)setRequestCount:(unsigned int)fp8;
- (unsigned int)requestCount;
- (void)setMinThresholdPerId:(unsigned int)fp8;
- (unsigned int)minThresholdPerId;
- (void)setFetchLimitPerId:(unsigned int)fp8;
- (unsigned int)fetchLimitPerId;
- (void)setMaxCacheLimit:(unsigned int)fp8;
- (unsigned int)maxCacheLimit;
- (void)setMicIntensityInterval:(float)fp8;
- (float)micIntensityInterval;
- (void)setPingTimeout:(double)fp8;
- (double)pingTimeout;
- (void)setPingRetryInterval:(double)fp8;
- (double)pingRetryInterval;
- (void)setPingMaxRetryCount:(int)fp8;
- (int)pingMaxRetryCount;
- (void)setAdShowControls:(BOOL)fp8;
- (BOOL)adShowControls;
- (void)setAdIsMuted:(BOOL)fp8;
- (BOOL)adIsMuted;
- (void)setAdPlayInLoop:(BOOL)fp8;
- (BOOL)adPlayInLoop;
- (void)setAdAutoplayEnabled:(BOOL)fp8;
- (BOOL)adAutoplayEnabled;
- (void)setAdOrientationChangeAllowed:(BOOL)fp8;
- (BOOL)adOrientationChangeAllowed;
- (void)setAdOrientationLocked:(BOOL)fp8;
- (BOOL)adOrientationLocked;
- (void)setAdIsPortrait:(BOOL)fp8;
- (BOOL)adIsPortrait;
- (void)setAdHasCustomClose:(BOOL)fp8;
- (BOOL)adHasCustomClose;
- (void)setAdIsModal:(BOOL)fp8;
- (BOOL)adIsModal;
- (void)setAdDefaultSize:(struct CGSize)fp8;
- (struct CGSize)adDefaultSize;
- (void)setNiceRequestMinInterval:(int)fp8;
- (int)niceRequestMinInterval;
- (void)setMaxSupportedMediaCount:(int)fp8;
- (int)maxSupportedMediaCount;
- (void)setAdRenderTimeout:(double)fp8;
- (double)adRenderTimeout;
- (void)setAdFetchTimeout:(double)fp8;
- (double)adFetchTimeout;
- (void)setDefaultRefreshInterval:(double)fp8;
- (double)defaultRefreshInterval;
- (void)setMinRefreshInterval:(double)fp8;
- (double)minRefreshInterval;
- (void)setHrefKeyLength:(int)fp8;
- (int)hrefKeyLength;
- (void)setHrefTagLength:(int)fp8;
- (int)hrefTagLength;
- (void)setSampleFactor:(int)fp8;
- (int)sampleFactor;
- (void)setAppGalleryURL:(id)fp8;
- (id)appGalleryURL;
- (void)setAdServerRequestParams:(id)fp8;
- (id)adServerRequestParams;
- (void)setAdServerURL:(id)fp8;
- (id)adServerURL;
- (void).cxx_destruct;
- (BOOL)updateFromDictionary:(id)fp8 needValidation:(BOOL)fp12;
- (id)product;
- (BOOL)needMetricCollection;
- (id)init;

@end

