/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPBannerAdManagerDelegate <NSObject>
- (void)userWillLeaveApplication;
- (void)userActionDidFinish;
- (void)userActionWillBegin;
- (void)managerDidFailToLoadAd;
- (void)managerDidLoadAd:(id)fp8;
- (void)invalidateContentView;
- (id)viewControllerForPresentingModalView;
- (BOOL)isTesting;
- (id)location;
- (id)keywords;
- (BOOL)ignoresAutorefresh;
- (struct CGSize)containerSize;
- (id)bannerDelegate;
- (id)banner;
- (int)allowedNativeAdsOrientation;
- (id)adUnitId;
@end

