//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCParams : NSObject
{
    unsigned int _sdkAppId;
    unsigned int _roomId;
    NSString *_userId;
    NSString *_userSig;
    long long _role;
    NSString *_privateMapKey;
    NSString *_bussInfo;
}

@property(retain, nonatomic) NSString *bussInfo; // @synthesize bussInfo=_bussInfo;
@property(retain, nonatomic) NSString *privateMapKey; // @synthesize privateMapKey=_privateMapKey;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (void).cxx_destruct;
- (id)init;

@end

