//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCPagePathUnitConfigModel : MMObject <PBCoding>
{
    NSString *pageName;
    NSMutableArray *businessParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessParams;
+ (void)PBArrayAdd_pageName;
@property(retain, nonatomic) NSMutableArray *businessParams; // @synthesize businessParams;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName;
- (void).cxx_destruct;
- (id)toString;
- (id)initWithPageName:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

