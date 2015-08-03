/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GADAdFetcherDelegate <NSObject>
- (void)didDisableScrollingAndActivationOverlay:(BOOL)fp8;
- (void)didFailToReceiveAdWithError:(id)fp8;
- (void)handleActivationOverlayResponse:(id)fp8 withBaseURL:(id)fp12;
- (void)handleAdResponse:(id)fp8 withBaseURL:(id)fp12;
- (void)setNewAdSize:(struct CGSize)fp8;
- (void)setAdDebugDialog:(id)fp8;
- (BOOL)isMediating;
- (void)setIsMediating:(BOOL)fp8;
- (void)setRefreshInterval:(double)fp8;
- (void)setRequestedOrientation:(int)fp8;
- (void)addManualTrackingURLs:(id)fp8;
- (void)addTrackingURLs:(id)fp8;
- (void)addClickTrackingURLs:(id)fp8;
@end
