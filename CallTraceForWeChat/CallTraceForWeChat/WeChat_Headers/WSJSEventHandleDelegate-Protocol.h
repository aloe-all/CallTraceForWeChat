//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, UIView;
@protocol YYWebViewInterface;

@protocol WSJSEventHandleDelegate <NSObject>

@optional
- (void)onGotoEmoticonPad:(NSDictionary *)arg1;
- (void)onQuerySimilarPicSearch:(NSDictionary *)arg1;
- (void)onOpenWowColikeSetting:(NSDictionary *)arg1;
- (void)onOpenProfileWithOpenId:(NSDictionary *)arg1;
- (void)onHideNavBarShadow:(NSDictionary *)arg1;
- (void)onShowNavBarShadow:(NSDictionary *)arg1;
- (void)onQueryWebSearchCommCgi:(NSDictionary *)arg1;
- (void)onQueryCommCgi:(NSDictionary *)arg1;
- (void)onFetchReddot:(NSDictionary *)arg1;
- (void)onUpdateNumReddot:(NSDictionary *)arg1;
- (void)onFetchNumReddot:(NSDictionary *)arg1;
- (void)onPostComments:(NSDictionary *)arg1;
- (void)onSetComments:(NSDictionary *)arg1;
- (void)onOpenProfilePage:(NSDictionary *)arg1;
- (void)onOpenWebRecommend:(NSDictionary *)arg1;
- (void)activeWebPage:(NSDictionary *)arg1;
- (NSMutableDictionary *)onGetSearchHistory:(NSDictionary *)arg1;
- (void)onDeleteSearchHistory:(NSDictionary *)arg1;
- (void)onPlayVideoFlowWithParams:(NSDictionary *)arg1;
- (void)onOperateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onUpdateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onRemoveVideoPlayerWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onSearchHotWord:(NSDictionary *)arg1;
- (NSDictionary *)onGetWidgetCaptureImgUrl:(NSDictionary *)arg1;
- (void)onActionSheet:(NSString *)arg1 clickButtonAtIndex:(long long)arg2;
- (void)onSearchUxOplogDataReady:(NSDictionary *)arg1;
- (void)onWidgetClearCrashProtectCount:(NSDictionary *)arg1;
- (void)onTapWAWidgetWithParams:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)onOpenWAWidgetLogViewWithParams:(NSDictionary *)arg1;
- (void)onUpdateWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onRemoveWAWidgetWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onWSMusicStatusChanged:(NSDictionary *)arg1;
- (void)currentFriendScene:(unsigned int *)arg1 withParams:(NSDictionary *)arg2;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onBrowsingSnsItem:(NSString *)arg1;
- (_Bool)checkBrowsingSnsItem:(NSString *)arg1;
- (void)onWillJumpUrl:(NSString *)arg1;
- (void)onViewTypeChange:(NSDictionary *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onWebViewTerminal:(UIView<YYWebViewInterface> *)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(UIView<YYWebViewInterface> *)arg1;
- (void)onJsbridgeReady:(id <YYWebViewInterface>)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onSwitchSearchContext:(NSDictionary *)arg1;
- (void)onInsertHistoryOperation:(NSDictionary *)arg1;
- (void)onClearHistoryOperation:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onLaunchDetailPageForWeApp:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)enableSearchBar;
- (void)hideSearchKeyboard;
@end

