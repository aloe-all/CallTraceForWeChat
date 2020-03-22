//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IGameCenterExt-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"

@class GameCenterIndexTopBanner, GameCenterNotifyContent, GetGameIndex4Response, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface GameCenterHomeLogicControllerV5 : MMObject <IGameCenterMsgNotifyExt, IGameCenterExt>
{
    NSMutableArray *_sectionList;
    NSMutableDictionary *_sectonType2RowNum;
    CDUnknownBlockType _requestHomeFirstPageDataCompleteBlockV5;
    CDUnknownBlockType _nextPageFeedsListCompleteBlock;
    GameCenterIndexTopBanner *_topBanner;
    _Bool _bIsFirstPage;
    _Bool _fromFindFriendEntry;
    _Bool _bHasNextFeeds;
    _Bool _bFetchingNextPageFeedsList;
    _Bool _bHomeDataV5CgiReturned;
    _Bool _bFirstPageFeedsReturned;
    NSMutableSet *_msgCenterRedDotSet;
    GameCenterNotifyContent *_gameCenterBubble;
    GetGameIndex4Response *_homeDataV5;
    NSMutableArray *_feedsListFromCgi;
    NSData *_nextPageInfo;
    NSString *_feedsModuleTitle;
}

@property _Bool bFirstPageFeedsReturned; // @synthesize bFirstPageFeedsReturned=_bFirstPageFeedsReturned;
@property _Bool bHomeDataV5CgiReturned; // @synthesize bHomeDataV5CgiReturned=_bHomeDataV5CgiReturned;
@property _Bool bFetchingNextPageFeedsList; // @synthesize bFetchingNextPageFeedsList=_bFetchingNextPageFeedsList;
@property(nonatomic) _Bool bHasNextFeeds; // @synthesize bHasNextFeeds=_bHasNextFeeds;
@property(retain, nonatomic) NSString *feedsModuleTitle; // @synthesize feedsModuleTitle=_feedsModuleTitle;
@property(retain) NSData *nextPageInfo; // @synthesize nextPageInfo=_nextPageInfo;
@property(retain, nonatomic) NSMutableArray *feedsListFromCgi; // @synthesize feedsListFromCgi=_feedsListFromCgi;
@property(retain, nonatomic) GetGameIndex4Response *homeDataV5; // @synthesize homeDataV5=_homeDataV5;
@property(retain, nonatomic) GameCenterNotifyContent *gameCenterBubble; // @synthesize gameCenterBubble=_gameCenterBubble;
@property(retain, nonatomic) NSMutableSet *msgCenterRedDotSet; // @synthesize msgCenterRedDotSet=_msgCenterRedDotSet;
@property(nonatomic) _Bool fromFindFriendEntry; // @synthesize fromFindFriendEntry=_fromFindFriendEntry;
- (void).cxx_destruct;
- (unsigned long long)typeOfRow:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (unsigned long long)typeOfSection:(long long)arg1;
- (id)getMyMoreGame;
- (id)getFeedsData:(long long)arg1;
- (id)getFeedsModuleTitle;
- (_Bool)hasNextFeeds;
- (id)get3GameRecommData;
- (id)typeNavData;
- (id)getMyGame;
- (id)getMiniGameData;
- (id)getSearchBar;
- (_Bool)shouldShowBubble;
- (void)reloadSectionsAndRows;
- (void)onFetchGameCenterHomeFeedsListV5:(id)arg1 error:(long long)arg2;
- (void)onFetchGameCenterHomeDataV5WithoutFeedsList:(id)arg1 error:(long long)arg2 FromHomeCgi:(_Bool)arg3;
- (id)getGameIndexTopBanner:(_Bool)arg1;
- (_Bool)_requestNextPageFeedsList:(_Bool)arg1;
- (_Bool)loadNextPageFeedsList:(CDUnknownBlockType)arg1;
- (_Bool)_fetchHomeFirstPageDataV5;
- (void)requestHomeFirstPageDataV5:(CDUnknownBlockType)arg1 fromLocalCache:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

