//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface MMPatternLockBufferData : NSObject <PBCoding>
{
    unsigned int uin;
    unsigned int version;
    unsigned int lockStatus;
    NSData *svrPatternHash;
    NSData *sign;
}

+ (void)initialize;
+ (void)PBArrayAdd_sign;
+ (void)PBArrayAdd_lockStatus;
+ (void)PBArrayAdd_svrPatternHash;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_uin;
@property(retain, nonatomic) NSData *sign; // @synthesize sign;
@property(nonatomic) unsigned int lockStatus; // @synthesize lockStatus;
@property(retain, nonatomic) NSData *svrPatternHash; // @synthesize svrPatternHash;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(nonatomic) unsigned int uin; // @synthesize uin;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

