//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderMentionExt-Protocol.h"

@class NSArray, NSString, WCFinderNotifyCenterUnit;
@protocol WCFinderNotifyCenterViewModelDelegate;

@interface WCFinderNotifyCenterViewModel : NSObject <WCFinderMentionExt>
{
    id <WCFinderNotifyCenterViewModelDelegate> _delegate;
    NSArray *_commentArray;
    NSArray *_likeArray;
    NSArray *_notifyArray;
    WCFinderNotifyCenterUnit *_commentUnit;
    WCFinderNotifyCenterUnit *_likeUnit;
    WCFinderNotifyCenterUnit *_notifyUnit;
    unsigned long long _scene;
}

+ (id)cellViewModelArrayWithMentions:(id)arg1;
+ (id)finderNotifyCenterViewModelWithScene:(unsigned long long)arg1;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderNotifyCenterUnit *notifyUnit; // @synthesize notifyUnit=_notifyUnit;
@property(retain, nonatomic) WCFinderNotifyCenterUnit *likeUnit; // @synthesize likeUnit=_likeUnit;
@property(retain, nonatomic) WCFinderNotifyCenterUnit *commentUnit; // @synthesize commentUnit=_commentUnit;
@property(copy, nonatomic) NSArray *notifyArray; // @synthesize notifyArray=_notifyArray;
@property(copy, nonatomic) NSArray *likeArray; // @synthesize likeArray=_likeArray;
@property(copy, nonatomic) NSArray *commentArray; // @synthesize commentArray=_commentArray;
@property(nonatomic) __weak id <WCFinderNotifyCenterViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFinderMentionLocalReadIdChangeWithType:(unsigned long long)arg1;
- (unsigned long long)transformToMentionType:(unsigned long long)arg1;
- (unsigned long long)transformMentionType:(unsigned long long)arg1;
- (void)updateUnreadWithType:(unsigned long long)arg1;
- (void)cleanUnreadCountWithType:(unsigned long long)arg1;
- (void)fetchMoreMentionsWithType:(unsigned long long)arg1;
- (void)updateMentionListWithType:(unsigned long long)arg1 mentions:(id)arg2 isLoadMore:(_Bool)arg3;
- (void)appendMentionsToMentionList:(id)arg1 type:(unsigned long long)arg2;
- (void)addMentionsToMentionList:(id)arg1 type:(unsigned long long)arg2;
- (void)fetchLastMentionsWithMentionType:(unsigned long long)arg1;
- (unsigned long long)getMentionCountWithType:(unsigned long long)arg1;
- (id)getUnitWithType:(unsigned long long)arg1;
- (id)getCellViewModelArrayWithType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
