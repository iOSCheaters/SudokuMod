/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSURL, UIWebView;

@interface IMWebView : _ADBannerContentSizeIdentifierLandscape <UIWebViewDelegate>
{
    id <IMWebViewDelegate> delegate;
    id <IMWebViewProcessDelegate> processDelegate;
    UIWebView *webview;
    int webViewLoadCount;
    BOOL shouldReturnFrameLoad;
    BOOL shouldInjectJS;
    int webViewType;
    NSURL *requestURL;
    struct CGSize latestSize;
}

- (void)setLatestSize:(struct CGSize)fp8;
- (struct CGSize)latestSize;
- (void)setShouldInjectJS:(BOOL)fp8;
- (BOOL)shouldInjectJS;
- (void)setRequestURL:(id)fp8;
- (id)requestURL;
- (void)setWebview:(id)fp8;
- (id)webview;
- (void)setWebViewType:(int)fp8;
- (int)webViewType;
- (void)setProcessDelegate:(id)fp8;
- (id)processDelegate;
- (id)delegate;
- (void)firePingNativeCompleted:(id)fp8;
- (void)firePingWVCompleted:(id)fp8;
- (void)fireIMAIOpenItunesSuccessful:(id)fp8;
- (void)fireIMAIOpenExternalSuccessful:(id)fp8;
- (void)fireIMAIOpenEmbeddedSuccessful:(id)fp8;
- (void)fireIMAIErrorEvent:(id)fp8 atAction:(id)fp12;
- (void)fireIMAIEvent:(id)fp8 forParam:(id)fp12;
- (void)fireIMAINativeCallComplete:(id)fp8;
- (void)fireMRAIDNativeCallComplete:(id)fp8;
- (void)firePostToSocialStatus:(BOOL)fp8;
- (void)fireMicIntensityChange:(double)fp8;
- (void)fireCameraPictureCapturedFromImage:(id)fp8;
- (void)fireVibrateComplete;
- (void)fireMediaCloseEvent:(int)fp8 userClosed:(BOOL)fp12 mediaID:(id)fp16;
- (void)fireMediaTimeUpdateEvent:(int)fp8 duration:(int)fp12 mediaID:(id)fp16;
- (void)fireMediaTrackingEvent:(id)fp8 mediaID:(id)fp12;
- (void)fireVideoVolumeChangeEvent:(float)fp8 mediaID:(id)fp12;
- (void)fireAudioVolumeChangeEvent:(float)fp8 mediaID:(id)fp12;
- (void)fireResetAllMaps;
- (void)fireVideoRemoveID:(id)fp8;
- (void)fireAudioRemoveID:(id)fp8;
- (void)fireMediaErrorEventForID:(id)fp8 errcode:(int)fp12;
- (void)firePassbookChangeEventForID:(id)fp8 state:(id)fp12 errcode:(int)fp16;
- (void)fireOrientationChangeEvent:(int)fp8;
- (void)fireViewableChangeEvent:(BOOL)fp8;
- (void)fireStateChangeEvent:(int)fp8;
- (void)fireMaxSizeChangeEvent:(struct CGSize)fp8;
- (void)fireSizeChangeEvent;
- (void)fireReadyEvent;
- (void)fireScreenSizeChangeEvent;
- (void)fireCurrentPositionChangeEvent:(struct CGRect)fp8;
- (void)fireDefaultPositionChangeEvent:(struct CGRect)fp8;
- (void)fireMRAIDErrorEvent:(id)fp8 atAction:(id)fp12;
- (void)fireMRAIDInitWithState:(int)fp8 orientationAngle:(int)fp12 defaultAdPosition:(struct CGRect)fp16 currentAdPosition:(struct CGRect)fp32 maxSize:(struct CGSize)fp48 screenSize:(struct CGSize)fp56 viewable:(BOOL)fp64;
- (id)executeJavascript:(id)fp8;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webViewDidStartLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (BOOL)canProcessURL:(id)fp8;
- (void)setHidden:(BOOL)fp8;
- (void)stopLoading;
- (void)loadRequest:(id)fp8;
- (void)loadHtmlString:(id)fp8;
- (void)disableBouncesAndScrolling:(BOOL)fp8;
- (void)setWebViewUserInteraction:(BOOL)fp8;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (void)deinit;
- (id)initWithFrame:(struct CGRect)fp8 type:(int)fp24 delegate:(id)fp28;
- (void)injectJSIntoWebView;

@end
