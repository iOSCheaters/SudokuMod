/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface NMSPDictationResult : _ADBannerContentSizeIdentifierLandscape
{
    struct nmsp_dr_DictationResult_ *dictationResult;
}

- (id)getSentenceAt:(int)fp8;
- (int)getSentenceCount;
- (void)dealloc;
- (id)initWithBinaryResult:(id)fp8;
- (id)initWithNmspDictationResult:(struct nmsp_dr_DictationResult_ *)fp8;

@end

