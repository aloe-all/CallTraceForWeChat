//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest;

@interface WCPlayerLoadingRuestTaskInfo : NSObject
{
    unsigned int _downloadSec;
    AVAssetResourceLoadingRequest *_loadingRequest;
    struct _NSRange _dataRange;
}

@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) unsigned int downloadSec; // @synthesize downloadSec=_downloadSec;
@property(nonatomic) struct _NSRange dataRange; // @synthesize dataRange=_dataRange;
- (void).cxx_destruct;
- (_Bool)isEqualToLoadingRequest:(id)arg1;

@end

