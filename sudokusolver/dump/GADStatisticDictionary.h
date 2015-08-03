/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSMutableDictionary;

@interface GADStatisticDictionary : _ADBannerContentSizeIdentifierLandscape
{
    NSMutableDictionary *_statistics;
    BOOL _allowDictionaryModification;
    BOOL _hasEnqueuedNotificationBlock;
    id <GADStatisticDictionaryDelegate> _delegate;
    char *_wasDeallocated;
    struct dispatch_queue_s *_queue;
}

- (void)setHasEnqueuedNotificationBlock:(BOOL)fp8;
- (BOOL)hasEnqueuedNotificationBlock;
- (void)setAllowDictionaryModification:(BOOL)fp8;
- (BOOL)allowDictionaryModification;
- (void)setQueue:(struct dispatch_queue_s *)fp8;
- (struct dispatch_queue_s *)queue;
- (void)setWasDeallocated:(char *)fp8;
- (char *)wasDeallocated;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)dictionary;
- (void)addObject:(id)fp8 toArrayWithKey:(id)fp12 shouldNotifyDelegate:(BOOL)fp16;
- (void)decrementNumberForKey:(id)fp8 shouldNotifyDelegate:(BOOL)fp12;
- (void)incrementNumberForKey:(id)fp8 shouldNotifyDelegate:(BOOL)fp12;
- (void)addDecimalNumber:(id)fp8 toNumberForKey:(id)fp12 shouldNotifyDelegate:(BOOL)fp16;
- (id)objectForKeyedSubscript:(id)fp8;
- (id)objectForKey:(id)fp8;
- (void)setObject:(id)fp8 forKey:(id)fp12 shouldNotifyDelegate:(BOOL)fp16;
- (void)dispatchAsyncShouldNotifyDelegate:(BOOL)fp8 block:(id)fp(null);
- (void)enqueueNotificationBlock;
- (void)didFinishModifying;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)fp8;
- (id)initWithQueueLabel:(const char *)fp8 delegate:(id)fp12;

@end
