/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MPMoviePlayerController, NSString, NSTimer;

@interface MMWebView : _ADBannerContentSizeIdentifierLandscape <UIGestureRecognizerDelegate>
{
    BOOL _videoOffscreen;
    BOOL _mraidViewable;
    NSString *_apid;
    NSString *_acid;
    MPMoviePlayerController *_moviePlayer;
    NSTimer *_playbackObserverTimer;
    NSString *_touchCallback;
    unsigned int _mraidState;
    unsigned int _mraidPlacementType;
}

- (BOOL)mraidViewable;
- (unsigned int)mraidPlacementType;
- (unsigned int)mraidState;
- (void)setVideoOffscreen:(BOOL)fp8;
- (BOOL)videoOffscreen;
- (void)setTouchCallback:(id)fp8;
- (id)touchCallback;
- (void)setPlaybackObserverTimer:(id)fp8;
- (id)playbackObserverTimer;
- (void)setMoviePlayer:(id)fp8;
- (id)moviePlayer;
- (void)setAcid:(id)fp8;
- (id)acid;
- (void)setApid:(id)fp8;
- (id)apid;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (void)handleTap:(id)fp8;
- (void)adSizeChanged;
- (void)setMraidViewable:(BOOL)fp8;
- (void)setMraidPlacementType:(unsigned int)fp8;
- (void)setMraidState:(unsigned int)fp8;
- (void)mraidFireReadyEvent;
- (id)executeMRAID:(id)fp8;
- (id)executeJavascript:(id)fp8;
- (void)movieDidExitFullscreen:(id)fp8;
- (void)moviePlayBackStateDidChange:(id)fp8;
- (void)moviePlayBackDidFinish:(id)fp8;
- (void)updateCreativeTiming;
- (void)stopPlaybackTimer;
- (void)startPlaybackTimer;
- (void)adjustVideo:(struct CGRect)fp8;
- (void)setVideoSource:(id)fp8;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)stopVideo;
- (void)playVideo;
- (void)removeVideo;
- (void)playInlineVideo;
- (void)insertVideo:(id)fp8 withStreamVideoURI:(id)fp12 withCachedVideoURI:(id)fp16 andAutoPlay:(BOOL)fp20 andShowControls:(BOOL)fp24 videoFrame:(struct CGRect)fp28;
- (id)stringByInjectingMraidIntoString:(id)fp8;
- (void)loadBrowserRequest:(id)fp8;
- (void)loadRequest:(id)fp8;
- (void)loadHTMLString:(id)fp8 baseURL:(id)fp12;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end
