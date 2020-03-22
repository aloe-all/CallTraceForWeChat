//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;
@protocol OS_dispatch_queue;

@interface WCFinderWCDB : NSObject
{
    WCTDatabase *_dataBase;
    WCTTable *_contactTable;
    WCTTable *_finderTable;
    WCTTable *_userpageMd5Table;
    WCTTable *_mentionTable;
    WCTTable *_streamFirstPageTable;
    WCTTable *_fansTable;
    WCTTable *_followingTable;
    WCTTable *_blackListTable;
    WCTTable *_likeFirstPageTable;
    WCTTable *_searchHistoryTable;
    WCTTable *_postingCommentTable;
    WCTTable *_dataItemRecommendTable;
    WCTTable *_historyFirstPageTable;
    WCTTable *_contactExtInfoTable;
    NSObject<OS_dispatch_queue> *_cleanQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cleanQueue; // @synthesize cleanQueue=_cleanQueue;
@property(retain, nonatomic) WCTTable *contactExtInfoTable; // @synthesize contactExtInfoTable=_contactExtInfoTable;
@property(retain, nonatomic) WCTTable *historyFirstPageTable; // @synthesize historyFirstPageTable=_historyFirstPageTable;
@property(retain, nonatomic) WCTTable *dataItemRecommendTable; // @synthesize dataItemRecommendTable=_dataItemRecommendTable;
@property(retain, nonatomic) WCTTable *postingCommentTable; // @synthesize postingCommentTable=_postingCommentTable;
@property(retain, nonatomic) WCTTable *searchHistoryTable; // @synthesize searchHistoryTable=_searchHistoryTable;
@property(retain, nonatomic) WCTTable *likeFirstPageTable; // @synthesize likeFirstPageTable=_likeFirstPageTable;
@property(retain, nonatomic) WCTTable *blackListTable; // @synthesize blackListTable=_blackListTable;
@property(retain, nonatomic) WCTTable *followingTable; // @synthesize followingTable=_followingTable;
@property(retain, nonatomic) WCTTable *fansTable; // @synthesize fansTable=_fansTable;
@property(retain, nonatomic) WCTTable *streamFirstPageTable; // @synthesize streamFirstPageTable=_streamFirstPageTable;
@property(retain, nonatomic) WCTTable *mentionTable; // @synthesize mentionTable=_mentionTable;
@property(retain, nonatomic) WCTTable *userpageMd5Table; // @synthesize userpageMd5Table=_userpageMd5Table;
@property(retain, nonatomic) WCTTable *finderTable; // @synthesize finderTable=_finderTable;
@property(retain, nonatomic) WCTTable *contactTable; // @synthesize contactTable=_contactTable;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (void).cxx_destruct;
- (_Bool)updateContactExtInfoUsername:(id)arg1 fansCount:(unsigned long long)arg2 friendFollowCount:(unsigned long long)arg3;
- (id)getContactExtInfoWithFinderUsername:(id)arg1;
- (_Bool)addContactExtInfo:(id)arg1;
- (_Bool)deleteHistoryFirstPage;
- (id)getHistoryCachePage;
- (_Bool)refreshHistoryFirstPageObjects:(id)arg1;
- (_Bool)deleteRecommendInfoWithDataItems:(id)arg1;
- (id)getRecommendInfoWithTid:(id)arg1;
- (_Bool)addRecommendWithDataItemArray:(id)arg1;
- (_Bool)addRecommendWithDataItem:(id)arg1;
- (_Bool)refreshPostingCommentWithTid:(id)arg1 byFetchComments:(id)arg2;
- (id)getPostingFailCommentWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)getPostingCommentFailMergeOfTid;
- (unsigned long long)getPostingCommentsTidCount;
- (unsigned long long)getPostingCommentsCountOfTid:(id)arg1;
- (id)getPostingCommentsWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)deleteObjectFailCommentWithTid:(id)arg1;
- (_Bool)markObjectFailCommentsReadWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)hasPostingFailComment;
- (id)getPostingFailComment;
- (_Bool)markPostingCommentFail:(id)arg1;
- (_Bool)postingCommentSuccessful:(id)arg1;
- (_Bool)deletePostingComment:(id)arg1;
- (_Bool)addPostingComment:(id)arg1;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (id)getLocalSearchHistory;
- (_Bool)addSearchContent:(id)arg1;
- (_Bool)deleteStreamFirstPage;
- (_Bool)refreshStreamFirstPageObjects:(id)arg1;
- (void)cleanExpiredSearchHistory;
- (void)_cleanExpiredSearchHistory;
- (void)cleanExpiredContacts;
- (void)_cleanExpiredContacts;
- (void)cleanExpiredDataItems;
- (void)_cleanExpiredDataItems;
- (void)updateContactCacheTime:(id)arg1;
- (void)updateDataItemsCacheTime:(id)arg1;
- (_Bool)refreshLikeFirstPageObjects:(id)arg1;
- (id)getLocalLikeListWithLastDisplayId:(id)arg1;
- (id)getAllDataItemInUploadQueue;
- (id)getPostUploadingDataItemBeforeCreateTime:(double)arg1 afterCreateTime:(double)arg2;
- (_Bool)makeUploadingFinderDataItemFailWithTid:(id)arg1 errorType:(long long)arg2;
- (unsigned long long)getHalfMentionIDWithType:(unsigned long long)arg1;
- (id)getWechatMentionWithmaxMentionID:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (id)getMentionWithType:(unsigned long long)arg1 scene:(unsigned long long)arg2 maxMentionID:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)getMentionWithType:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (_Bool)deleteFinderMentions:(id)arg1;
- (_Bool)addFinderMentions:(id)arg1;
- (id)userPageFromLocalWithUsername:(id)arg1 needMergeUpload:(_Bool)arg2 maxTid:(id)arg3 limit:(unsigned long long)arg4;
- (id)contactFirstPageMd5:(id)arg1;
- (_Bool)updateUserPage:(id)arg1 firstPageMd5:(id)arg2;
- (id)getBlackContactList;
- (_Bool)updateFirstBlackListContactPage:(id)arg1;
- (id)getFansContactList;
- (_Bool)updateFirstFollowedContactPage:(id)arg1;
- (_Bool)updateContactSpamStatus:(id)arg1;
- (_Bool)changeContactFollowingStatusWithContact:(id)arg1;
- (_Bool)updateContactAuthInfo:(id)arg1 username:(id)arg2;
- (_Bool)addContacts:(id)arg1;
- (_Bool)reloadContactListWithContacts:(id)arg1;
- (_Bool)updateFirstFollowingContactPageWithContacts:(id)arg1;
- (id)getFollowingContactsWithoutUsename:(id)arg1;
- (_Bool)updateContactFollowingWithUsername:(id)arg1 isFollowing:(_Bool)arg2;
- (id)contactWithUsername:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (_Bool)modifyCommentWithComment:(id)arg1 tid:(id)arg2;
- (_Bool)changeCommentLikeStatusWithTid:(id)arg1 commentID:(unsigned long long)arg2 likeStatus:(_Bool)arg3 isAuthor:(_Bool)arg4;
- (_Bool)deleteSubCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2 dataItem:(id)arg3;
- (_Bool)deleteCommentWithComment:(id)arg1 dataItemTid:(id)arg2;
- (_Bool)postDataItemCommentFailWithComment:(id)arg1 tid:(id)arg2;
- (_Bool)updateDataItemHotCommentList:(id)arg1 tid:(id)arg2;
- (_Bool)postDataItemCommentSuccessWithComment:(id)arg1 tid:(id)arg2;
- (_Bool)addDataItemPostCommentWithComment:(id)arg1 dataItemTid:(id)arg2;
- (id)commentReduplictionRemoving:(id)arg1;
- (_Bool)mergeDataItemFirstCommentPageWithTid:(id)arg1 commentArray:(id)arg2 isFirstPage:(_Bool)arg3;
- (_Bool)changeDataItemCloseCommentFlagWithTid:(id)arg1 closeCommentFlag:(_Bool)arg2;
- (_Bool)markDataItemWasDeletedWithTid:(id)arg1;
- (_Bool)deleteDataItemInTidList:(id)arg1;
- (_Bool)deleteAllDataItemWithUsername:(id)arg1 beforeMaxTid:(id)arg2;
- (id)getAllDataItemWithUsername:(id)arg1 beforeMaxTid:(id)arg2;
- (_Bool)deleteAllDataItemWithUsername:(id)arg1 beforeMinTid:(id)arg2 afterMaxTid:(id)arg3;
- (id)getDataItemsWithUsername:(id)arg1 beforeMinTid:(id)arg2 afterMaxTid:(id)arg3;
- (id)getLocalStreamFirstPage;
- (id)getLocalDataItemsWithTidArray:(id)arg1;
- (id)getLocalDataItemWtihTid:(id)arg1;
- (_Bool)updateTimelineDataItem:(id)arg1 isLiked:(_Bool)arg2;
- (id)currentMaxTid;
- (_Bool)updateTimelineDataItem:(id)arg1;
- (_Bool)deleteTimelineDataItem:(id)arg1;
- (_Bool)addTimelineDataItemWithDataItemArray:(id)arg1;
- (_Bool)addFinderDataItem:(id)arg1;
- (id)timelineDataItemMaxTid:(unsigned long long)arg1 limitCount:(unsigned long long)arg2;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)createContactExtInfoTable;
- (_Bool)createFirstHistoryPageTable;
- (_Bool)createFollowingListTable;
- (_Bool)createDataRecommendTable;
- (_Bool)createPostingCommentTable;
- (_Bool)createSearchHistoryTable;
- (_Bool)createLikeFirstPageTable;
- (_Bool)createBlackListTable;
- (_Bool)createFansListTable;
- (_Bool)createStreamFirstPageTable;
- (_Bool)createMentionTable;
- (_Bool)createUserPageMd5Table;
- (_Bool)createFinderTable;
- (_Bool)createFinderContactTable;
- (void)dealloc;
- (void)closeDB;
- (void)createTable;
- (_Bool)setupDataBase;
- (id)init;

@end

