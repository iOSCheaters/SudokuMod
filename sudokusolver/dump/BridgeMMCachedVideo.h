/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MMJSObject.h"

@class MMVideo;

@interface BridgeMMCachedVideo : MMJSObject
{
    MMVideo *_video;
}

- (void)setVideo:(id)fp8;
- (id)video;
- (void).cxx_destruct;
- (void)endVideo:(id)fp8;
- (void)playVideo:(id)fp8;
- (void)pauseVideo:(id)fp8;
- (void)restartVideo:(id)fp8;
- (void)cacheVideo:(id)fp8;
- (void)playCachedVideo:(id)fp8;
- (void)availableCachedVideos:(id)fp8;
- (void)videoIdExists:(id)fp8;

@end
