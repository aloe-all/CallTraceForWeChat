//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMDBRestore-Protocol.h"

@class MMLoadingView, MMTableViewInfo, NSArray, NSString, WCDBRouterInfo;

@interface WCDBRecoverViewController : MMUIViewController <MMDBRestore>
{
    NSArray *_infos;
    WCDBRouterInfo *_selected;
    MMTableViewInfo *m_tableViewInfo;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)onRestoreProgressUpdate:(float)arg1;
- (void)doAsyncRecover;
- (void)didRecover:(_Bool)arg1;
- (_Bool)doRecover;
- (void)updateProgress:(double)arg1;
- (void)askForConfirm;
- (void)selectCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)makeCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)adjustTableViewRect;
- (void)popBack;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)markAsUnselected;
- (void)markAsSelected:(id)arg1;
- (id)initWithInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

