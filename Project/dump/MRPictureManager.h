/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "MRImageDownloaderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MRImageDownloader, NSURL;

@interface MRPictureManager : _ADBannerContentSizeIdentifierLandscape <UIAlertViewDelegate, MRImageDownloaderDelegate>
{
    id <MRPictureManagerDelegate> _delegate;
    MRImageDownloader *_imageDownloader;
    NSURL *_imageURL;
}

- (void)setImageURL:(id)fp8;
- (id)imageURL;
- (void)setImageDownloader:(id)fp8;
- (id)imageDownloader;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)downloaderDidFailToSaveImageWithURL:(id)fp8 error:(id)fp12;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)storePicture:(id)fp8;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end

