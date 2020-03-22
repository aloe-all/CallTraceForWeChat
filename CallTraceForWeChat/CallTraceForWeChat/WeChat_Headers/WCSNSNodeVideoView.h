//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIControl.h"

#import "MMDragDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"
#import "WCPlayerConfigViewControllerDelegate-Protocol.h"

@class FullScreenViewController, MMDragManager, NSString, SightIconView, UIDragInteraction, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, WCDataItem, WCMediaItem, WCPlayerConfigControlView, WCPlayerView;
@protocol SNSVideoABTestExt, WCSNSNodeVideoViewDelegate;

@interface WCSNSNodeVideoView : MMUIControl <WCPlayerConfigViewControllerDelegate, WCActionSheetDelegate, WCPlayerConfigDelegate, WCFacadeExt, UIActionSheetDelegate, MMDragDelegate>
{
    _Bool _isImageReady;
    _Bool _bIgnoreLongPress;
    _Bool _isVodeoPlayContinueInFullScreen;
    _Bool _isBufferingViewLoading;
    id <WCSNSNodeVideoViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaData;
    NSString *_sightPath;
    NSString *_cpKey;
    unsigned long long _scene;
    FullScreenViewController<SNSVideoABTestExt> *_videoPlayerVC;
    SightIconView *_playIconView;
    UIImage *_thumbImage;
    UIImageView *_thumbImageView;
    MMDragManager *_dragManager;
    UIImageView *_tmp_liftingImgView;
    UIDragInteraction *_dragInteraction;
    WCPlayerView *_playerView;
    WCPlayerConfigControlView *_playerConfigControlView;
    UITapGestureRecognizer *_singleGestureRecognizer;
    UILongPressGestureRecognizer *_longGestureRecognizer;
}

@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(retain, nonatomic) UILongPressGestureRecognizer *longGestureRecognizer; // @synthesize longGestureRecognizer=_longGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer; // @synthesize singleGestureRecognizer=_singleGestureRecognizer;
@property(retain, nonatomic) WCPlayerConfigControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(nonatomic) _Bool isVodeoPlayContinueInFullScreen; // @synthesize isVodeoPlayContinueInFullScreen=_isVodeoPlayContinueInFullScreen;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) UIImageView *tmp_liftingImgView; // @synthesize tmp_liftingImgView=_tmp_liftingImgView;
@property(retain, nonatomic) MMDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) FullScreenViewController<SNSVideoABTestExt> *videoPlayerVC; // @synthesize videoPlayerVC=_videoPlayerVC;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bIgnoreLongPress; // @synthesize bIgnoreLongPress=_bIgnoreLongPress;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSString *sightPath; // @synthesize sightPath=_sightPath;
@property(nonatomic) _Bool isImageReady; // @synthesize isImageReady=_isImageReady;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCSNSNodeVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapAttachButton:(id)arg1;
- (void)onExistPlayAnimationFinish;
- (void)onCloseFullScreenPlay:(id)arg1;
- (void)onForwardSuccess:(id)arg1;
- (void)onForwardCancle:(id)arg1;
- (unsigned long long)getWCDownloadModeWith:(unsigned long long)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onWillResumePlay:(id)arg1;
- (void)playInFullScreen:(_Bool)arg1;
- (void)silencePauseAtCurrentScreen;
- (void)clearPlayerResource;
- (void)silenceStopAtCurrentScreen;
- (void)silencePlayAtCurrentScreen;
- (void)currentAutoPlayVideoWillChange;
- (void)silencePlay;
- (void)LongPressEvents:(id)arg1;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDownloadFail:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (id)generateConfig;
- (id)genPlayerConfigControlView;
- (id)getPlayerInfoWith:(_Bool)arg1;
- (void)updateThumbImage:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithMediaData:(id)arg1;
- (void)initData:(id)arg1;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (_Bool)isSightVideoExist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

