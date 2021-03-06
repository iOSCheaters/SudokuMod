/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPInterstitialAdManagerDelegate <NSObject>
- (void)managerDidExpireInterstitial:(id)fp8;
- (void)managerDidDismissInterstitial:(id)fp8;
- (void)managerWillDismissInterstitial:(id)fp8;
- (void)managerDidPresentInterstitial:(id)fp8;
- (void)managerWillPresentInterstitial:(id)fp8;
- (void)manager:(id)fp8 didFailToLoadInterstitialWithError:(id)fp12;
- (void)managerDidLoadInterstitial:(id)fp8;
- (id)interstitialDelegate;
- (id)location;
- (id)interstitialAdController;
@end

