/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NMSPTransactionSystemDelegate-Protocol.h"

@class NSObject<SpeechKitDelegate>;

@interface SpeechKitInstance : _ADBannerContentSizeIdentifierLandscape <NMSPTransactionSystemDelegate>
{
    NSObject<SpeechKitDelegate> *delegate;
    BOOL destroying;
}

+ (id)instance;
- (void)setDestroying:(BOOL)fp8;
- (BOOL)destroying;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)destroyed;
- (void)disconnected;
- (void)connected;

@end
