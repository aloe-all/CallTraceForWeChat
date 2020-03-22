//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LocalJSLogicBase.h"

#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WebSearchMgrDelegate-Protocol.h"

@class FTSWebSearchMgr, NSString;
@protocol FTSJSEventDelegate, FTSWebSearchDataSource;

@interface WXSearchJSLogicImpl : LocalJSLogicBase <MultiSelectContactsViewControllerDelegate, WebSearchMgrDelegate>
{
    id <FTSJSEventDelegate> _delegate;
    id <FTSWebSearchDataSource> _dataSource;
    FTSWebSearchMgr *_webSearchMgr;
}

@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) __weak id <FTSWebSearchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FTSJSEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onWebRecommendInfoUpdate:(id)arg1;
- (void)onWebRecommendNavBarShadowManuallyHidden:(id)arg1;
- (void)onWebRecommendTabSelected:(id)arg1;
- (void)onWebRecommendLeaveFromFindPage:(id)arg1;
- (void)onWebRecommendEnterFromFindPage:(id)arg1;
- (void)onWebSearchCommCgiResult:(id)arg1;
- (void)onWebRecommendCommCgiResult:(id)arg1;
- (void)onWebRecommendNotifyReddotExtMsg:(id)arg1;
- (void)onWebRecommendNotifyReddot:(id)arg1;
- (void)onWebRecommendNotifyNumReddotChange:(id)arg1;
- (void)onWebRecommendPostCommentResult:(id)arg1;
- (void)onWebRecommendSetCommentResult:(id)arg1;
- (void)onSearchSimilarEmoticon:(id)arg1;
- (void)onWidgetDataUpdated:(id)arg1;
- (void)onOpenContactError:(id)arg1 withMessage:(id)arg2;
- (void)onOpenContact:(id)arg1;
- (void)onUpdateLocalImage:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (void)onWebSearchWithQuery:(id)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)onSearchRecmdDataReturn:(id)arg1;
- (void)onWebSearchDataFail:(id)arg1;
- (void)onWebSearchDataChanged:(id)arg1;
- (void)handleJsApiFuncOfHandleHomePageLoadStat:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfNegFeedBack:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleWebViewUIReady:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfHandleHistoryOperation:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenWeAppPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenEmotionPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfClickMusicItem:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSnsMusicList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSearchWord:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSuggestion:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfRealTimeReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenMsgSession:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSearchOperation:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetRcmdData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfResultStat:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOnlineSearchContact:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSnsImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetAvatar:(id)arg1 withCallBackID:(id)arg2;
- (id)getDisplayName:(id)arg1;
- (void)handleJSApiFuncOfGetDisplayNameList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGotoFeedDetail:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenProfile:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPageForWeApp:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfDownloadPageDataForFastLoad:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfCreateWebViewForFastLoad:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfClickReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSearchData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleOpenSearchWebview:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleViewTypeChange:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleMakePhoneCall:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfHandleSelectContact:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleGetMatchContactList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleDeleteSearchHistory:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleGetSearchHistory:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleOpenLocation:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleImagePreview:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleUpdateReddotTimeStamps:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfPostComments:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfSetComments:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfUpdateNumReddot:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfFetchNumReddot:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfFetchReddot:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfQuerySearchWeb:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfQueryWebCommCgi:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfHideNavBarShadow:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfShowNavBarShadow:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfOpenProfileWithOpenId:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfOpenWowColikeSetting:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfQuerySimilarEmotion:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfGotoEmoticonPad:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfPreloadVideo:(id)arg1 withCallBackId:(id)arg2;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (void)handleRcmdDataOfGlobalTab:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)onSysBridgeCompleted;
- (void)sendCallbackWithRet:(int)arg1 error:(id)arg2 data:(id)arg3 callbackId:(id)arg4;
- (void)broadCastJSEventWithSel:(SEL)arg1 params:(id)arg2;
- (void)sendMusicStatusChangedEvent:(id)arg1;
- (void)sendQueryChangedJSEvent:(id)arg1;
- (void)sendSearchJSEvent:(id)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;
- (void)handleJSApiFuncOfPreloadSearchWeapp:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfHideSearchLoading:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfShowSearchLoading:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfShowSearchToast:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfReloadWidgetData:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfOpenSearchCanvas:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfOpenADCanvas:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfReportWeAppSearchRealTime:(id)arg1 callbackId:(id)arg2;
- (void)sendWidgetTapCallback:(id)arg1 withResult:(id)arg2;
- (void)handleJSApiFuncOfTapWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfSearchOpLog:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfCancelSearchActionSheet:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfShowSearchActionSheet:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfOpenWAWidgetLogView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfUpdateWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfRemoveWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfInsertWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleGetWidgetCaptureImgUrl:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfCheckJsApi:(id)arg1 callbackId:(id)arg2;
- (_Bool)functionCallForWeApp:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleJSApiFuncOfGoToRecVideoList:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfOperateVideoPlayer:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfRemoveVideoPlayer:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfUpdateVideoPlayer:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfInsertVideoPlayer:(id)arg1 callbackId:(id)arg2;
- (_Bool)functionCallForBrowseVideo:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

