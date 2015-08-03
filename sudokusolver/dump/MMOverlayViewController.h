/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class MMBannerAdView, MMCommand, MMVideo, MMWebView, MMWebViewDelegate, NSString, NSURLRequest, UIButton, UIView, UIViewController;

@interface MMOverlayViewController : _ADBannerContentSizeIdentifierLandscape <UIWebViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isShowing;
    BOOL _isExpanded;
    BOOL _useCustomClose;
    BOOL _makeOverlayTransparent;
    int _placementType;
    NSString *_apid;
    id _arcRetain;
    MMBannerAdView *_adView;
    MMVideo *_videoDelegate;
    MMCommand *_command;
    MMWebView *_webView;
    MMWebViewDelegate *_webViewDelegate;
    NSURLRequest *_originalAdRequest;
    UIButton *_nativeCloseButton;
    int _presentationOrientation;
    unsigned int _orientationMask;
    UIViewController *_viewControllerForPresentingModalView;
    UIView *_defaultSuperview;
    NSString *_transition;
    struct CGRect _defaultFrame;
    struct CGRect _expandedFrame;
}

- (void)setTransition:(id)fp8;
- (id)transition;
- (void)setMakeOverlayTransparent:(BOOL)fp8;
- (BOOL)makeOverlayTransparent;
- (void)setUseCustomClose:(BOOL)fp8;
- (BOOL)useCustomClose;
- (void)setExpandedFrame:(struct CGRect)fp8;
- (struct CGRect)expandedFrame;
- (void)setDefaultFrame:(struct CGRect)fp8;
- (struct CGRect)defaultFrame;
- (void)setDefaultSuperview:(id)fp8;
- (id)defaultSuperview;
- (void)setViewControllerForPresentingModalView:(id)fp8;
- (id)viewControllerForPresentingModalView;
- (void)setOrientationMask:(unsigned int)fp8;
- (unsigned int)orientationMask;
- (void)setPresentationOrientation:(int)fp8;
- (int)presentationOrientation;
- (void)setNativeCloseButton:(id)fp8;
- (id)nativeCloseButton;
- (void)setOriginalAdRequest:(id)fp8;
- (id)originalAdRequest;
- (void)setWebViewDelegate:(id)fp8;
- (id)webViewDelegate;
- (void)setWebView:(id)fp8;
- (id)webView;
- (void)setCommand:(id)fp8;
- (id)command;
- (void)setVideoDelegate:(id)fp8;
- (id)videoDelegate;
- (void)setAdView:(id)fp8;
- (id)adView;
- (void)setIsExpanded:(BOOL)fp8;
- (BOOL)isExpanded;
- (void)setIsShowing:(BOOL)fp8;
- (BOOL)isShowing;
- (void)setArcRetain:(id)fp8;
- (id)arcRetain;
- (id)apid;
- (void)setPlacementType:(int)fp8;
- (int)placementType;
- (void).cxx_destruct;
- (void)adModalDidDismiss;
- (void)adModalWillDismiss;
- (void)adModalDidAppear;
- (void)adModalWillAppear;
- (void)createCloseButton;
- (void)adWillTerminateApplication:(id)fp8;
- (void)toggleScrolling:(BOOL)fp8;
- (void)replaceWebviewWithImage;
- (void)closeFromExpandedState;
- (void)close;
- (void)closeOverlay;
- (void)presentOverlay;
- (void)expandWithWebview:(id)fp8;
- (void)showOverlay;
- (void)showWithHTML:(id)fp8;
- (void)showWithRequest:(id)fp8;
- (void)showWithLoadRequest:(id)fp8;
- (void)forceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)getUserInfo;
- (void)setApid:(id)fp8;
- (void)dealloc;
- (id)initWithPlacementType:(int)fp8;

@end
