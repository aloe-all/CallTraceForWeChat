//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCPayGPPhotoViewControllerDelegate-Protocol.h"
#import "WCPayWebImageViewDelegate-Protocol.h"

@class AAQueryDetailRes, MMTableView, MMTipsViewController, NSMutableArray, NSString, WCPayGPPhotoViewController, WCPayWebImageView;
@protocol WCPayGPOrderStatusViewControllerDelegate;

@interface WCPayGPOrderStatusViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, MMTipsViewControllerDelegate, WCPayWebImageViewDelegate, WCPayGPPhotoViewControllerDelegate>
{
    _Bool _bIsAllPayerHasPay;
    _Bool _bIsLoadingImage;
    id <WCPayGPOrderStatusViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    AAQueryDetailRes *_orderDetailData;
    NSMutableArray *_sectionOneData;
    NSMutableArray *_sectionTwoData;
    MMTipsViewController *_payNotifyConfirmTipsView;
    WCPayWebImageView *_remarkImageView;
    WCPayGPPhotoViewController *_photoViewController;
}

@property(nonatomic) _Bool bIsLoadingImage; // @synthesize bIsLoadingImage=_bIsLoadingImage;
@property(retain, nonatomic) WCPayGPPhotoViewController *photoViewController; // @synthesize photoViewController=_photoViewController;
@property(retain, nonatomic) WCPayWebImageView *remarkImageView; // @synthesize remarkImageView=_remarkImageView;
@property(retain, nonatomic) MMTipsViewController *payNotifyConfirmTipsView; // @synthesize payNotifyConfirmTipsView=_payNotifyConfirmTipsView;
@property(nonatomic) _Bool bIsAllPayerHasPay; // @synthesize bIsAllPayerHasPay=_bIsAllPayerHasPay;
@property(retain, nonatomic) NSMutableArray *sectionTwoData; // @synthesize sectionTwoData=_sectionTwoData;
@property(retain, nonatomic) NSMutableArray *sectionOneData; // @synthesize sectionOneData=_sectionOneData;
@property(retain, nonatomic) AAQueryDetailRes *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayGPOrderStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPhtotViewControllerClickSaveImage:(id)arg1;
- (_Bool)shouldShowDeleteMenu;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)showPhotoViewController;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)handleViewRemarkImage;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)pressSendPayNotify;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genOrderStatusSubLabel;
- (_Bool)isCommonAAType;
- (void)pressLaunchNewGroupPay;
- (void)handleViewBalanceLinkClick;
- (void)handlePayBtnPress;
- (void)confirmToCloseOrder;
- (void)pressCloseOrder;
- (_Bool)bHasCloseOrderItem;
- (void)rightBarButtonPress;
- (id)getContactFromUsername:(id)arg1;
- (void)orderDetailVCCancel;
- (void)makeSectionContactWhiteCell:(id)arg1 indexPath:(id)arg2;
- (void)makeSectionContactContentView:(id)arg1 withIndexPath:(id)arg2;
- (void)makeSectionTitleContentView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)genTableFooterView;
- (void)genTableFooterViewAfterReloadData;
- (id)genTableHeaderView;
- (void)setupContentView;
- (void)setupData;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshViewCotnrollerWithControlData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

