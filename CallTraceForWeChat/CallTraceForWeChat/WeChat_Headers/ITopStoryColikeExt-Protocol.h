//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol ITopStoryColikeExt <NSObject>

@optional
- (void)onRequestColikePostEnd:(_Bool)arg1 errorMsg:(NSString *)arg2;
- (void)onAllRequestColikeBlockEnd:(long long)arg1 sucCount:(long long)arg2 failCount:(long long)arg3;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(NSMutableArray *)arg3;
- (void)onRequestGetColikeBlockListEndResultBeforeConfigData:(_Bool)arg1 withType:(unsigned int)arg2 list:(NSMutableArray *)arg3 oriList:(NSMutableArray *)arg4;
@end

