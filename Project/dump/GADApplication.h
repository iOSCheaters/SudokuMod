/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class GADSession;

@interface GADApplication : _ADBannerContentSizeIdentifierLandscape
{
    BOOL _appFinishedLaunching;
    GADSession *_currentSession;
}

+ (id)sharedApplication;
+ (void)load;
- (void)setAppFinishedLaunching:(BOOL)fp8;
- (BOOL)appFinishedLaunching;
- (void)setCurrentSession:(id)fp8;
- (id)currentSession;
- (id)iTunesMetadata;
- (id)iTunesMetadataPath;
- (BOOL)isAppActive;
- (void)runEarlyActivities;
- (void)dealloc;
- (id)init;

@end
