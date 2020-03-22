//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, WCAppAuthAppMetaInfo, WCAppAuthAuthInfo;

@interface WCAppAuthDataItem : MMObject <PBCoding>
{
    WCAppAuthAppMetaInfo *appInfo;
    WCAppAuthAuthInfo *authInfo;
    NSString *tips;
}

+ (void)initialize;
+ (void)PBArrayAdd_tips;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_appInfo;
@property(copy, nonatomic) NSString *tips; // @synthesize tips;
@property(retain, nonatomic) WCAppAuthAuthInfo *authInfo; // @synthesize authInfo;
@property(retain, nonatomic) WCAppAuthAppMetaInfo *appInfo; // @synthesize appInfo;
- (void).cxx_destruct;
- (_Bool)hasUnEditableScope;
- (id)genAuthInfoDescription;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)getScopes;
- (void)dealloc;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

