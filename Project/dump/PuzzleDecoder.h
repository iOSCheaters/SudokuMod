/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface PuzzleDecoder : _ADBannerContentSizeIdentifierLandscape
{
    unsigned short rows[9];
    unsigned short cols[9];
    unsigned short blocks[9];
    unsigned char values[81];
    char givenFlags[81];
}

- (BOOL)decode:(char *)fp8;
- (void)fillCell:(int)fp8 withValue:(int)fp12;
- (unsigned short)getPossibilitiesForCell:(int)fp8;

@end

