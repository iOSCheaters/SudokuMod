/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface MRVideoPlayerManager : _ADBannerContentSizeIdentifierLandscape
{
    id <MRVideoPlayerManagerDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)moviePlayerPlaybackDidFinish:(id)fp8;
- (void)playVideo:(id)fp8;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end
