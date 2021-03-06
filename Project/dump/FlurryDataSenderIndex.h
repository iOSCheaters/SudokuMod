/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface FlurryDataSenderIndex : _ADBannerContentSizeIdentifierLandscape <NSCoding>
{
    BOOL _sentReportSuccessfully;
    NSMutableDictionary *_indexMap;
}

+ (id)instantiatedIndex;
- (void)setSentReportSuccessfully:(BOOL)fp8;
- (BOOL)sentReportSuccessfully;
- (void)setIndexMap:(id)fp8;
- (id)indexMap;
- (id)notSentBlocksForDataKey:(id)fp8;
- (BOOL)discardOutdatedBlocksForDataKey:(id)fp8;
- (void)setupForCurrentDataKey:(id)fp8;
- (void)removeBlockInfoWithIdentifier:(id)fp8 forDataKey:(id)fp12;
- (void)addBlockInfo:(id)fp8 forDataKey:(id)fp12;
- (void)saveState;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (id)init;

@end

