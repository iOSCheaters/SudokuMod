/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface NMSPSentence : _ADBannerContentSizeIdentifierLandscape
{
    struct nmsp_dr_Sentence_ *sentence;
}

- (id)toString;
- (id)getTokenAtCursorPosition:(int)fp8;
- (id)getTokenAt:(int)fp8;
- (int)getTokenCount;
- (id)getAlternatives:(int)fp8:(int)fp12;
- (double)getConfidenceScore;
- (id)initWithNmspSentence:(struct nmsp_dr_Sentence_ *)fp8;

@end

