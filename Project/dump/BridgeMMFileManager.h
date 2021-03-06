/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MMJSObject.h"

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSString;

@interface BridgeMMFileManager : MMJSObject <NSURLConnectionDataDelegate>
{
    NSMutableData *downloadData_;
    NSString *downloadDataSavePath_;
}

+ (void)purgeExpiredCreativeCache;
- (void).cxx_destruct;
- (void)removeAtPath:(id)fp8;
- (void)moveFile:(id)fp8;
- (void)writeData:(id)fp8;
- (void)getFileContents:(id)fp8;
- (void)getDirectoryContents:(id)fp8;
- (void)getFreeDiskSpace:(id)fp8;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)downloadFile:(id)fp8;
- (void)dealloc;

@end

