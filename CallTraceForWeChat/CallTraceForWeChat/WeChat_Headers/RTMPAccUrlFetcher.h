//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString;

@interface RTMPAccUrlFetcher : NSObject <NSURLSessionTaskDelegate>
{
    int _errorCode;
    NSString *_streamId;
    NSString *_bizid;
    NSString *_errorInfo;
}

@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *bizid; // @synthesize bizid=_bizid;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void).cxx_destruct;
- (id)getBizidFromStreamUrl:(id)arg1;
- (id)jsonData2Dictionary:(id)arg1;
- (id)dictionary2JsonData:(id)arg1;
- (id)getParamsFromStreamUrl:(id)arg1 streamUrl:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)internalGetAccelerateStreamPlayUrl:(id)arg1;
- (void)getAccelerateStreamPlayUrl:(id)arg1 withStreamID:(id)arg2 txSecret:(id)arg3 txTime:(id)arg4 channelType:(int)arg5 andListener:(CDUnknownBlockType)arg6;
- (long long)getAccRetryCountWithoutSecret;
- (_Bool)checkRTMPAccParams:(_Bool)arg1 bizid:(id)arg2 txTime:(id)arg3 txSecret:(id)arg4;
- (void)resetStreamInfo;
- (int)getAccelerateStreamPlayUrl:(id)arg1 channelType:(int)arg2 listener:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

