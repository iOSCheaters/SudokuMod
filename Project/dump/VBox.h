/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "LayoutContainer.h"

@interface VBox : LayoutContainer
{
    BOOL minSizeIsCached;
    struct CGSize minSize;
    float spacing;
}

- (void)setSpacing:(float)fp8;
- (float)spacing;
- (void)invalidateCache;
- (void)layout;
- (struct CGSize)minSize;

@end

