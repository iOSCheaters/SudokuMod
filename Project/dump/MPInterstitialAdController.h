/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "MPInterstitialAdManagerDelegate-Protocol.h"

@class CLLocation, MPInterstitialAdManager, NSString;

@interface MPInterstitialAdController : _ADBannerContentSizeIdentifierLandscape <MPInterstitialAdManagerDelegate>
{
    BOOL _testing;
    MPInterstitialAdManager *_manager;
    id <MPInterstitialAdControllerDelegate> _delegate;
    NSString *_adUnitId;
    NSString *_keywords;
    CLLocation *_location;
}

+ (void)removeSharedInterstitialAdController:(id)fp8;
+ (id)sharedInterstitialAdControllers;
+ (id)sharedInterstitials;
+ (id)interstitialAdControllerForAdUnitId:(id)fp8;
- (void)setTesting:(BOOL)fp8;
- (BOOL)isTesting;
- (void)setLocation:(id)fp8;
- (id)location;
- (void)setKeywords:(id)fp8;
- (id)keywords;
- (void)setAdUnitId:(id)fp8;
- (id)adUnitId;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setManager:(id)fp8;
- (id)manager;
- (void)customEventActionWillBegin;
- (void)customEventDidFailToLoadAd;
- (void)customEventDidLoadAd;
- (void)managerDidExpireInterstitial:(id)fp8;
- (void)managerDidDismissInterstitial:(id)fp8;
- (void)managerWillDismissInterstitial:(id)fp8;
- (void)managerDidPresentInterstitial:(id)fp8;
- (void)managerWillPresentInterstitial:(id)fp8;
- (void)manager:(id)fp8 didFailToLoadInterstitialWithError:(id)fp12;
- (void)managerDidLoadInterstitial:(id)fp8;
- (id)interstitialDelegate;
- (id)interstitialAdController;
- (void)showFromViewController:(id)fp8;
- (void)loadAd;
- (BOOL)ready;
- (void)dealloc;
- (id)initWithAdUnitId:(id)fp8;

@end

