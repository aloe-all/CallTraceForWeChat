//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ITopStoryColikeExt-Protocol.h"

@class MMTableViewInfo, NSString;

@interface WSWowBlackListSettingViewController : MMUIViewController <ITopStoryColikeExt>
{
    _Bool _isRequestingHide;
    _Bool _isRequestingBlock;
    _Bool _isRequestHideByClick;
    _Bool _isRequestBlockByClick;
    MMTableViewInfo *_tableViewInfo;
    NSString *_dontSeeCountStr;
    NSString *_dontAllowSeeCountStr;
}

@property(nonatomic) _Bool isRequestBlockByClick; // @synthesize isRequestBlockByClick=_isRequestBlockByClick;
@property(nonatomic) _Bool isRequestHideByClick; // @synthesize isRequestHideByClick=_isRequestHideByClick;
@property(nonatomic) _Bool isRequestingBlock; // @synthesize isRequestingBlock=_isRequestingBlock;
@property(nonatomic) _Bool isRequestingHide; // @synthesize isRequestingHide=_isRequestingHide;
@property(retain, nonatomic) NSString *dontAllowSeeCountStr; // @synthesize dontAllowSeeCountStr=_dontAllowSeeCountStr;
@property(retain, nonatomic) NSString *dontSeeCountStr; // @synthesize dontSeeCountStr=_dontSeeCountStr;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void).cxx_destruct;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3;
- (void)openDontAllowSomebodySee:(id)arg1;
- (void)openDontSeeSomebody:(id)arg1;
- (id)appendUrlString:(id)arg1 withKey:(id)arg2 stringValue:(id)arg3;
- (void)openOpnionFeedback:(id)arg1;
- (void)fixLoadingRect;
- (void)reloadTableView;
- (void)initData;
- (void)initView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initNavBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

