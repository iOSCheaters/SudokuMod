/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface SKGenericCommand : _ADBannerContentSizeIdentifierLandscape
{
    id <SKGenericCommandDelegate> delegate;
}

+ (id)allocWithZone:(struct _NSZone *)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)cancel;
- (id)initWithLogRevisionCmd:(id)fp8 appId:(id)fp12 logContent:(id)fp16 delegate:(id)fp20;
- (id)initWithResetUserProfileCmd:(id)fp8;

@end

