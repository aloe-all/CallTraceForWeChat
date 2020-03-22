//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAssetPickerControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FavClickStreamHelper, MMTableView, NSArray, NSString, UILabel;
@protocol MMImagePickerControlCenter;

@interface MMAlbumPickerController : MMUIViewController <MMAssetPickerControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UILabel *tipsLabel;
    _Bool _firstTime;
    _Bool m_isJustReturnMMAsset;
    _Bool m_directToFirstAlbum;
    _Bool m_hasLoadAllAlbum;
    MMTableView *_tableView;
    id <MMImagePickerControlCenter> _controlCenter;
    NSArray *m_albumlist;
    unsigned long long m_adjustRevertIndex;
    FavClickStreamHelper *_favClickStreamHelper;
}

@property(retain, nonatomic) FavClickStreamHelper *favClickStreamHelper; // @synthesize favClickStreamHelper=_favClickStreamHelper;
@property(nonatomic) _Bool m_hasLoadAllAlbum; // @synthesize m_hasLoadAllAlbum;
@property(nonatomic) _Bool m_directToFirstAlbum; // @synthesize m_directToFirstAlbum;
@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex;
@property(retain, nonatomic) NSArray *m_albumlist; // @synthesize m_albumlist;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)onMMAssetPickerControllerClickBack;
- (void)adjustSubviewRects;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)toAlbum:(id)arg1 animated:(_Bool)arg2;
- (void)OnTableViewCellSelected:(id)arg1 animated:(_Bool)arg2;
- (void)cancelImagePicker;
- (void)prepareAlbumsShouldIncludeVideo:(_Bool)arg1 isOnlyShowVideo:(_Bool)arg2;
- (void)reloadTableView;
- (void)reloadAllAlbum;
- (_Bool)toLastAlbum;
- (_Bool)toFirstAlbum;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initTableView;
- (void)initView;
- (void)showEmptyTip;
- (void)showAuthTip;
- (void)showTipWithWording:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

