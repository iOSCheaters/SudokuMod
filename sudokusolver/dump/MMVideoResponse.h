/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MMResponse.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface MMVideoResponse : MMResponse
{
    BOOL _reloadOverlayOnRestart;
    BOOL _showCloseButton;
    BOOL _showControls;
    BOOL _showCountdownHUD;
    BOOL _buttonsHaveBeenDownloaded;
    NSString *_videoId;
    NSString *_videoFileId;
    NSString *_localPath;
    NSURL *_originalContentURL;
    NSURL *_videoContentURL;
    NSURL *_cacheMissURL;
    NSURL *_overlayURL;
    NSURL *_endURL;
    NSString *_acid;
    NSDate *_videoExpirationDate;
    NSArray *_videoButtons;
    float _videoDuration;
    int _numberOfPlays;
    float _videoWidth;
    float _videoHeight;
    float _xVideoOffset;
    float _yVideoOffset;
    NSArray *_startActivity;
    NSArray *_endActivity;
    NSArray *_cacheComplete;
    NSArray *_cacheFailed;
    NSArray *_videoError;
    NSDictionary *_onCompletion;
    float _closeAfterDelay;
    NSArray *_logs;
    NSDictionary *_logMetaData;
}

- (void)setLogMetaData:(id)fp8;
- (id)logMetaData;
- (void)setLogs:(id)fp8;
- (id)logs;
- (void)setCloseAfterDelay:(float)fp8;
- (float)closeAfterDelay;
- (void)setOnCompletion:(id)fp8;
- (id)onCompletion;
- (void)setVideoError:(id)fp8;
- (id)videoError;
- (void)setCacheFailed:(id)fp8;
- (id)cacheFailed;
- (void)setCacheComplete:(id)fp8;
- (id)cacheComplete;
- (void)setEndActivity:(id)fp8;
- (id)endActivity;
- (void)setStartActivity:(id)fp8;
- (id)startActivity;
- (void)setButtonsHaveBeenDownloaded:(BOOL)fp8;
- (BOOL)buttonsHaveBeenDownloaded;
- (void)setShowCountdownHUD:(BOOL)fp8;
- (BOOL)showCountdownHUD;
- (void)setShowControls:(BOOL)fp8;
- (BOOL)showControls;
- (void)setYVideoOffset:(float)fp8;
- (float)yVideoOffset;
- (void)setXVideoOffset:(float)fp8;
- (float)xVideoOffset;
- (void)setVideoHeight:(float)fp8;
- (float)videoHeight;
- (void)setVideoWidth:(float)fp8;
- (float)videoWidth;
- (void)setShowCloseButton:(BOOL)fp8;
- (BOOL)showCloseButton;
- (void)setReloadOverlayOnRestart:(BOOL)fp8;
- (BOOL)reloadOverlayOnRestart;
- (void)setNumberOfPlays:(int)fp8;
- (int)numberOfPlays;
- (void)setVideoDuration:(float)fp8;
- (float)videoDuration;
- (void)setVideoButtons:(id)fp8;
- (id)videoButtons;
- (void)setVideoExpirationDate:(id)fp8;
- (id)videoExpirationDate;
- (void)setAcid:(id)fp8;
- (id)acid;
- (void)setEndURL:(id)fp8;
- (id)endURL;
- (void)setOverlayURL:(id)fp8;
- (id)overlayURL;
- (void)setCacheMissURL:(id)fp8;
- (id)cacheMissURL;
- (void)setVideoContentURL:(id)fp8;
- (id)videoContentURL;
- (void)setOriginalContentURL:(id)fp8;
- (id)originalContentURL;
- (void)setLocalPath:(id)fp8;
- (id)localPath;
- (void)setVideoFileId:(id)fp8;
- (id)videoFileId;
- (void)setVideoId:(id)fp8;
- (id)videoId;
- (void).cxx_destruct;
- (id)arrayForVideoButtons:(id)fp8;
- (void)parseResponse:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithData:(id)fp8 response:(id)fp12 apid:(id)fp16;

@end
