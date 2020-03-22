//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IWCMyStoryUserStateUtilExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommentViewFBDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, WCCommentViewFB, WCDataItem;
@protocol ILinkEventExt, WCTimeLineCommentCellViewDelegate;

@interface WCTimeLineCommentCellView : MMUIView <IWCMyStoryUserStateUtilExt, WCActionSheetDelegate, WCCommentViewFBDelegate>
{
    long long _iSection;
    long long _iRow;
    WCDataItem *_mainDataItem;
    id <WCTimeLineCommentCellViewDelegate> m_delegate;
    id <ILinkEventExt> m_urlDelegate;
    UIView *m_likeContainer;
    UIView *m_lineView;
    WCCommentViewFB *m_commentView;
    _Bool m_bHaveActionSheet;
    _Bool m_isFoldCommentclk;
    _Bool _needTopRoundCorner;
    _Bool _needBottomRoundCorner;
    NSMutableArray *_hasNewStoryArray;
}

+ (double)getCommentViewLeftMarginCurOri;
+ (_Bool)isLastComment:(id)arg1 RowIndex:(long long)arg2;
+ (long long)getCommentIndexForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (double)getCellHeightForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (id)getNickNameForDataItem:(id)arg1;
@property(nonatomic) _Bool needBottomRoundCorner; // @synthesize needBottomRoundCorner=_needBottomRoundCorner;
@property(nonatomic) _Bool needTopRoundCorner; // @synthesize needTopRoundCorner=_needTopRoundCorner;
@property(retain, nonatomic) NSMutableArray *hasNewStoryArray; // @synthesize hasNewStoryArray=_hasNewStoryArray;
@property(nonatomic) __weak id <ILinkEventExt> m_urlDelegate; // @synthesize m_urlDelegate;
@property(nonatomic) __weak id <WCTimeLineCommentCellViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) WCDataItem *mainDataItem; // @synthesize mainDataItem=_mainDataItem;
@property(nonatomic) long long iRow; // @synthesize iRow=_iRow;
@property(nonatomic) long long iSection; // @synthesize iSection=_iSection;
- (void).cxx_destruct;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onCommentViewEmotionViewSingleClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFulltextBtnClick:(id)arg1;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)onReloadCommentCellView:(id)arg1;
- (void)onCommentViewClicked:(id)arg1;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showCommentOption:(id)arg1;
- (void)deleteComment:(unsigned long long)arg1;
- (void)setRoundCorner;
- (void)initView;
- (void)initLineView;
- (void)initHasNewStoryArray;
- (void)initLikeContainer;
- (void)reportCommentFoldClk;
- (id)getShowComment;
- (_Bool)isShowLikeCell;
- (id)initWithUrlDelegate:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

