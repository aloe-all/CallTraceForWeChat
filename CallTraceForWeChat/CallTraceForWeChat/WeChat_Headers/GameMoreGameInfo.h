//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface GameMoreGameInfo : MMObject <PBCoding>
{
    unsigned int remainingCount;
    unsigned int nextOffset;
    NSMutableArray *appList;
}

+ (void)initialize;
+ (void)PBArrayAdd_remainingCount;
+ (void)PBArrayAdd_appList;
@property(nonatomic) unsigned int nextOffset; // @synthesize nextOffset;
@property(nonatomic) unsigned int remainingCount; // @synthesize remainingCount;
@property(retain, nonatomic) NSMutableArray *appList; // @synthesize appList;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

