/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "MPAdDestinationDisplayAgentDelegate-Protocol.h"
#import "MRCalendarManagerDelegate-Protocol.h"
#import "MRCommandDelegate-Protocol.h"
#import "MRPictureManagerDelegate-Protocol.h"
#import "MRVideoPlayerManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class MPAdDestinationDisplayAgent, MRAdViewDisplayController, MRCalendarManager, MRJavaScriptEventEmitter, MRPictureManager, MRVideoPlayerManager, NSMutableData, UIButton, UITapGestureRecognizer, UIWebView;

@interface MRAdView : _ADBannerContentSizeIdentifierLandscape <UIGestureRecognizerDelegate, MRCommandDelegate, UIWebViewDelegate, MPAdDestinationDisplayAgentDelegate, MRCalendarManagerDelegate, MRPictureManagerDelegate, MRVideoPlayerManagerDelegate>
{
    id <MRAdViewDelegate> _delegate;
    UIWebView *_webView;
    UIButton *_closeButton;
    NSMutableData *_data;
    MRAdViewDisplayController *_displayController;
    BOOL _isLoading;
    int _modalViewCount;
    BOOL _usesCustomCloseButton;
    unsigned int _closeButtonStyle;
    BOOL _allowsExpansion;
    BOOL _expanded;
    unsigned int _placementType;
    unsigned int _adType;
    BOOL _userTappedWebView;
    MPAdDestinationDisplayAgent *_destinationDisplayAgent;
    MRCalendarManager *_calendarManager;
    MRPictureManager *_pictureManager;
    MRVideoPlayerManager *_videoPlayerManager;
    MRJavaScriptEventEmitter *_jsEventEmitter;
    id <MPAdAlertManagerProtocol> _adAlertManager;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void)setTapRecognizer:(id)fp8;
- (id)tapRecognizer;
- (void)setUserTappedWebView:(BOOL)fp8;
- (BOOL)userTappedWebView;
- (void)setAdType:(unsigned int)fp8;
- (unsigned int)adType;
- (void)setAdAlertManager:(id)fp8;
- (id)adAlertManager;
- (void)setJsEventEmitter:(id)fp8;
- (id)jsEventEmitter;
- (void)setVideoPlayerManager:(id)fp8;
- (id)videoPlayerManager;
- (void)setPictureManager:(id)fp8;
- (id)pictureManager;
- (void)setCalendarManager:(id)fp8;
- (id)calendarManager;
- (void)setDestinationDisplayAgent:(id)fp8;
- (id)destinationDisplayAgent;
- (void)setDisplayController:(id)fp8;
- (id)displayController;
- (void)setData:(id)fp8;
- (id)data;
- (BOOL)expanded;
- (BOOL)usesCustomCloseButton;
- (id)delegate;
- (void)adViewableDidChange:(BOOL)fp8;
- (void)appShouldResume;
- (void)appShouldSuspend;
- (void)adDidDismissModalView;
- (void)adWillPresentModalView;
- (void)adDidRequestCustomCloseEnabled:(BOOL)fp8;
- (void)adDidExpandToFrame:(struct CGRect)fp8;
- (void)adWillExpandToFrame:(struct CGRect)fp8;
- (void)adDidClose;
- (void)adWillClose;
- (void)adDidFailToLoad;
- (void)adDidLoad;
- (id)viewControllerForPresentingVideoPlayer;
- (void)videoPlayerManagerDidDismissVideo:(id)fp8;
- (void)videoPlayerManagerWillPresentVideo:(id)fp8;
- (void)videoPlayerManager:(id)fp8 didFailToPlayVideoWithErrorMessage:(id)fp12;
- (void)pictureManager:(id)fp8 didFailToStorePictureWithErrorMessage:(id)fp12;
- (id)viewControllerForPresentingCalendarEditor;
- (void)calendarManagerDidDismissCalendarEditor:(id)fp8;
- (void)calendarManagerWillPresentCalendarEditor:(id)fp8;
- (void)calendarManager:(id)fp8 didFailToCreateCalendarEventWithErrorMessage:(id)fp12;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentDidDismissModal;
- (void)displayAgentWillPresentModal;
- (id)viewControllerForPresentingModalView;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webViewDidStartLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)mrCommandClose:(id)fp8;
- (void)mrCommand:(id)fp8 expandWithParams:(id)fp12;
- (void)mrCommand:(id)fp8 openURL:(id)fp12;
- (void)mrCommand:(id)fp8 shouldUseCustomClose:(BOOL)fp12;
- (void)mrCommand:(id)fp8 storePictureWithURL:(id)fp12;
- (void)mrCommand:(id)fp8 playVideoWithURL:(id)fp12;
- (void)mrCommand:(id)fp8 createCalendarEventWithParams:(id)fp12;
- (void)performActionForMoPubSpecificURL:(id)fp8;
- (BOOL)shouldExecuteMRCommand:(id)fp8;
- (void)handleCommandWithURL:(id)fp8;
- (void)initializeJavascriptState;
- (void)layoutCloseButton;
- (id)MRAIDScriptPath;
- (id)fullHTMLFromMRAIDFragment:(id)fp8;
- (BOOL)HTMLStringIsMRAIDFragment:(id)fp8;
- (id)HTMLWithJavaScriptBridge:(id)fp8;
- (void)loadHTMLString:(id)fp8 baseURL:(id)fp12;
- (void)loadRequest:(id)fp8;
- (void)initAdAlertManager;
- (void)handleMRAIDOpenCallForURL:(id)fp8;
- (BOOL)safeHandleDisplayDestinationForURL:(id)fp8;
- (id)placementType;
- (void)rotateToOrientation:(int)fp8;
- (void)loadCreativeWithHTMLString:(id)fp8 baseURL:(id)fp12;
- (void)loadCreativeFromURL:(id)fp8;
- (BOOL)isViewable;
- (void)setUsesCustomCloseButton:(BOOL)fp8;
- (void)setExpanded:(BOOL)fp8;
- (void)setDelegate:(id)fp8;
- (void)adAlertManagerDidTriggerAlert:(id)fp8;
- (id)viewControllerForPresentingMailVC;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)handleTap:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 allowsExpansion:(BOOL)fp24 closeButtonStyle:(unsigned int)fp28 placementType:(unsigned int)fp32;

@end

