//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WALaunchCGIReportInfo : NSObject
{
    _Bool _sync;
    unsigned int _debugType;
    unsigned int _appVersion;
    unsigned int _scene;
    unsigned int _appServiceType;
    NSString *_appId;
    long long _beginTime;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

