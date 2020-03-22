//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRegionPickerViewControllerDelegate-Protocol.h"
#import "settingModifySignDelegate-Protocol.h"

@class NSString, SettingMyAccountExtInfoLogic, WCTableViewManager;

@interface SettingSocialInfoViewController : MMUIViewController <settingModifySignDelegate, MMRegionPickerViewControllerDelegate>
{
    WCTableViewManager *m_tableViewMgr;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

- (void).cxx_destruct;
- (void)showModifySignView;
- (void)showModifyAddressView;
- (void)showModifySexView;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)saveNewSign:(id)arg1;
- (void)onModifySex:(id)arg1;
- (id)getAddressString;
- (id)getSexString;
- (double)getSignCellHeight;
- (id)makeSignView;
- (void)onLinkedIn;
- (void)updateTableCell;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)Save;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

