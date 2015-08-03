/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "IMNativeAdManagerDelegate-Protocol.h"
#import "IMWebViewControllerDelegate-Protocol.h"

@class IMNativeAdManager, IMWebViewController, NSDictionary, NSMutableArray, NSString;

@interface IMNative : _ADBannerContentSizeIdentifierLandscape <IMWebViewControllerDelegate, IMNativeAdManagerDelegate>
{
    BOOL _isAttached;
    BOOL _isWebViewLoaded;
    BOOL _shouldFireImpression;
    BOOL _isNativeLoaded;
    IMNativeAdManager *adManager;
    NSString *content;
    NSString *contextCode;
    NSString *namespace;
    IMWebViewController *hiddenWebViewController;
    NSMutableArray *eventList;
    NSString *appId;
    int currentState;
    NSDictionary *additionaParameters;
    NSString *refTagKey;
    NSString *refTagValue;
    NSString *keywords;
    id <IMNativeDelegate> _delegate;
    long long _slotId;
}

- (void)setIsNativeLoaded:(BOOL)fp8;
- (BOOL)isNativeLoaded;
- (void)setSlotId:(long long)fp8;
- (long long)slotId;
- (void)setShouldFireImpression:(BOOL)fp8;
- (BOOL)shouldFireImpression;
- (void)setIsWebViewLoaded:(BOOL)fp8;
- (BOOL)isWebViewLoaded;
- (void)setIsAttached:(BOOL)fp8;
- (BOOL)isAttached;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setKeywords:(id)fp8;
- (id)keywords;
- (void)setRefTagValue:(id)fp8;
- (id)refTagValue;
- (void)setRefTagKey:(id)fp8;
- (id)refTagKey;
- (void)setAdditionaParameters:(id)fp8;
- (id)additionaParameters;
- (void)setCurrentState:(int)fp8;
- (int)currentState;
- (void)setAppId:(id)fp8;
- (id)appId;
- (void)setEventList:(id)fp8;
- (id)eventList;
- (void)setHiddenWebViewController:(id)fp8;
- (id)hiddenWebViewController;
- (void)setNamespace:(id)fp8;
- (id)namespace;
- (void)setContextCode:(id)fp8;
- (id)contextCode;
- (void)setContent:(id)fp8;
- (id)content;
- (void)setAdManager:(id)fp8;
- (id)adManager;
- (void)dealloc;
- (void)nativeAdManager:(id)fp8 failedFetchingNativeAdWithError:(id)fp12;
- (void)nativeAdManager:(id)fp8 fetchedNativeAdWithContent:(id)fp12;
- (void)webViewController:(id)fp8 failedLoadingWebViewWithError:(id)fp12;
- (void)webViewControllerDidAppear:(id)fp8;
- (void)webViewControllerDidFinishLoadingWebView:(id)fp8;
- (void)recordEvent:(unsigned int)fp8 withParams:(id)fp12;
- (void)handleImpression:(id)fp8;
- (void)handleClick:(id)fp8;
- (void)detachFromView;
- (void)forceDetachNativeAdFromParentView;
- (void)attachToView:(id)fp8;
- (void)loadContextCodeInWVController;
- (void)loadAd;
- (void)sendSuccessCallbackInBackground;
- (void)sendErrorInBackground:(id)fp8;
- (id)initWithAppId:(id)fp8;
- (id)init;
- (void)tearDownNativeAd;
- (void)setupNativeAd;

@end
