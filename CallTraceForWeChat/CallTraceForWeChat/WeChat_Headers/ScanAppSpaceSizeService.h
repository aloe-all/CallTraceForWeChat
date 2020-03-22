//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface ScanAppSpaceSizeService : MMService <MMServiceProtocol>
{
    _Bool _hasAppSpaceSize;
    int _runStatus;
    long long _appSpaceSize;
}

@property long long appSpaceSize; // @synthesize appSpaceSize=_appSpaceSize;
@property(readonly) int runStatus; // @synthesize runStatus=_runStatus;
@property(readonly) _Bool hasAppSpaceSize; // @synthesize hasAppSpaceSize=_hasAppSpaceSize;
- (void)onServiceTerminate;
- (void)asyncStopTask;
- (_Bool)reAsyncStartTask;
- (void)asyncStartTask;
- (void)folderSizeAtPath:(const char *)arg1;
- (void)onScanTaskFinished;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

