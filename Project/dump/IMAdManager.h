/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "IMAdScreenDismissDelegate-Protocol.h"
#import "IMAsncyPingDelegate-Protocol.h"
#import "IMMediaManagerDelegate-Protocol.h"
#import "IMWebViewProcessDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AVAudioRecorder, IMAdCloseButton, IMAsyncPingRequest, IMEmbeddedWebViewController, IMExpandProperties, IMMediaManager, IMOrientationProperties, IMResizeProperties, NSTimer, UIImage, UIView;

@interface IMAdManager : _ADBannerContentSizeIdentifierLandscape <IMAdScreenDismissDelegate, IMWebViewProcessDelegate, IMMediaManagerDelegate, SKStoreProductViewControllerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, IMAsncyPingDelegate>
{
    id <IMAdManagerDelegate> adManagerDelegate;
    UIView *adView;
    IMAdCloseButton *graphicsAdCloseButton;
    IMAdCloseButton *customAdCloseButton;
    IMExpandProperties *expProperties;
    IMResizeProperties *resizeProps;
    IMOrientationProperties *orientationProps;
    int currentState;
    int previousState;
    float initialVolume;
    UIImage *tempImage;
    BOOL isExpandedWithURL;
    IMEmbeddedWebViewController *imEmbedWebViewController;
    int adOrientation;
    BOOL isInterstitial;
    IMMediaManager *mediaManager;
    int lastOrientationAngle;
    NSTimer *micTimer;
    AVAudioRecorder *recorder;
    IMAsyncPingRequest *storePictureRequest;
}

- (void)setStorePictureRequest:(id)fp8;
- (id)storePictureRequest;
- (void)setRecorder:(id)fp8;
- (id)recorder;
- (void)setMicTimer:(id)fp8;
- (id)micTimer;
- (void)setTempImage:(id)fp8;
- (id)tempImage;
- (void)setImEmbedWebViewController:(id)fp8;
- (id)imEmbedWebViewController;
- (void)setLastOrientationAngle:(int)fp8;
- (int)lastOrientationAngle;
- (void)setInitialVolume:(float)fp8;
- (float)initialVolume;
- (void)setCurrentState:(int)fp8;
- (int)currentState;
- (void)setPreviousState:(int)fp8;
- (int)previousState;
- (void)setOrientationProps:(id)fp8;
- (id)orientationProps;
- (void)setResizeProps:(id)fp8;
- (id)resizeProps;
- (void)setExpProperties:(id)fp8;
- (id)expProperties;
- (void)setGraphicsAdCloseButton:(id)fp8;
- (id)graphicsAdCloseButton;
- (void)setCustomAdCloseButton:(id)fp8;
- (id)customAdCloseButton;
- (void)setMediaManager:(id)fp8;
- (id)mediaManager;
- (void)setIsInterstitial:(BOOL)fp8;
- (BOOL)isInterstitial;
- (void)setAdManagerDelegate:(id)fp8;
- (id)adManagerDelegate;
- (void)setAdView:(id)fp8;
- (id)adView;
- (struct CGRect)webFrame;
- (void)dismissViewController:(id)fp8 animated:(BOOL)fp12;
- (void)presentViewController:(id)fp8 from:(id)fp12 animated:(BOOL)fp16;
- (void)pauseAllMedia;
- (void)resetAllMedia;
- (void)reset;
- (void)adScreenDidDismiss:(id)fp8;
- (void)adScreenWillDismiss:(id)fp8;
- (void)adWillLeaveApplication:(id)fp8;
- (void)controller:(id)fp8 didInteractWithParams:(id)fp12;
- (void)adWillLeaveApplication;
- (int)statusBarSize:(struct CGSize)fp8 accordingToOrientation:(int)fp16;
- (void)sendBeaconPingToUrl:(id)fp8;
- (void)openMap:(id)fp8 withUrlString:(id)fp12 andFullScreen:(BOOL)fp16;
- (void)messageComposeViewController:(id)fp8 didFinishWithResult:(int)fp12;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (void)productViewControllerDidFinish:(id)fp8;
- (void)addToSKStore:(id)fp8;
- (void)updateToPassbook:(id)fp8;
- (void)sendPassErrorMsg;
- (void)checkMessageURLAndProcessExternal:(id)fp8;
- (BOOL)openExternal:(id)fp8;
- (void)openBrowser:(id)fp8 withUrlString:(id)fp12;
- (void)addCloseButtonToWebView;
- (void)setUseCustomClose:(BOOL)fp8;
- (void)placeCallTo:(id)fp8;
- (BOOL)sendSMSTo:(id)fp8 withBody:(id)fp12;
- (BOOL)sendEMailTo:(id)fp8 withSubject:(id)fp12 withBody:(id)fp16 isHTML:(BOOL)fp20;
- (int)interfaceOrientationForAdProperties;
- (void)adjustCustomCloseForExpandedAdInOrientation:(int)fp8 superview:(id)fp12;
- (void)addEventToCalenderForDate:(id)fp8 withTitle:(id)fp12 withBody:(id)fp16;
- (void)rotateWebView:(id)fp8 toOrientation:(int)fp12;
- (BOOL)shouldRotateToInterfaceOrientation:(int)fp8;
- (void)rotateExpandedWindowsToCurrentOrientation;
- (struct CGPoint)adjustFrame:(struct CGRect)fp8 toFitInto:(struct CGRect)fp24;
- (void)resizeWebView:(id)fp8 forParent:(id)fp12;
- (void)resizeInWebView:(id)fp8;
- (void)expandWithURL:(id)fp8 inWebView:(id)fp12;
- (void)closeAd;
- (void)closeAd:(id)fp8;
- (void)openEmbeddedBrowser:(id)fp8;
- (void)showAlertWithMsg:(id)fp8;
- (void)postToSocialType:(int)fp8 text:(id)fp12 url:(id)fp16 imageURL:(id)fp20 inWebView:(id)fp24;
- (void)imagePickerControllerDidCancel:(id)fp8;
- (void)imagePickerController:(id)fp8 didFinishPickingMediaWithInfo:(id)fp12;
- (id)writeData:(id)fp8 toCacheByFileName:(id)fp12;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)image:(id)fp8 didFinishSavingWithError:(id)fp12 contextInfo:(void *)fp16;
- (void)listenToMicIntensity:(BOOL)fp8 inWebView:(id)fp12;
- (void)micIntensityChange;
- (void)asyncPingRequest:(id)fp8 didFailWithError:(id)fp12;
- (void)asyncPingRequestDidFinish:(id)fp8;
- (BOOL)canProcessIMAICommand:(id)fp8 params:(id)fp12 forWebView:(id)fp16;
- (void)sendSMSWithParams:(id)fp8;
- (void)sendEMailWithParams:(id)fp8;
- (BOOL)canProcessIMMraidCommand:(id)fp8 params:(id)fp12 forWebView:(id)fp16;
- (id)checkForTelAndReturnTelprompt:(id)fp8;
- (void)reportCommand:(int)fp8;
- (void)fireMraidLoad:(id)fp8 andShow:(BOOL)fp12;
- (void)fireMraidLoad:(id)fp8 forState:(int)fp12 andShow:(BOOL)fp16;
- (void)fireMraidShow:(id)fp8;
- (void)fireMraidHide:(id)fp8;
- (void)fireCurrentPositionChangeEvent:(id)fp8;
- (void)fireDefaultPositionChangeEvent:(id)fp8;
- (struct CGRect)getCurrentPositionOfUIView:(id)fp8;
- (void)deviceOrientationChanged:(id)fp8;
- (void)interfaceOrientationChanged:(id)fp8;
- (struct CGRect)getMaxAdFrameInCurrentStatusBarOrientation;
- (struct CGRect)getAvailableWindowFrame;
- (struct CGRect)getAvailableWindowFrame:(int)fp8;
- (void)removeFrameObserverForWebView:(id)fp8;
- (void)addFrameObserverForWebView:(id)fp8;
- (id)mediaViewController;
- (id)mediaWebView;
- (id)topmostView;
- (id)imRootViewController;
- (id)imWebView;
- (void)appActiveNotificationReceived:(id)fp8;
- (void)appInActiveNotificationReceived:(id)fp8;
- (void)dealloc;
- (id)init;

@end
