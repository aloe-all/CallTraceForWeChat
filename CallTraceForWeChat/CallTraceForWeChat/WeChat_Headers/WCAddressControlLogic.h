//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizControlLogic.h"

#import "WCAddressInfoViewControllerDelegate-Protocol.h"
#import "WCAddressListViewControllerDelegate-Protocol.h"
#import "WCAddressLogicMgrExt-Protocol.h"

@class JSEvent, NSString, WCAddressAuthenticationSturct, WCAddressControlData;

@interface WCAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressInfoViewControllerDelegate, WCAddressListViewControllerDelegate>
{
    JSEvent *m_jsEvent;
    WCAddressControlData *m_data;
    WCAddressAuthenticationSturct *m_oWCAddressAuthenticationStruct;
    NSString *m_nsUserName;
}

- (void).cxx_destruct;
- (void)OnNotAcceptGetLatestAddress;
- (void)OnAcceptGetLatestAddress;
- (void)OnImportYiXunAddress:(id)arg1 importStatus:(int)arg2 Error:(id)arg3;
- (void)OnSetRecentlyUsedAddress:(id)arg1 Error:(id)arg2;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (void)OnDelAddress:(id)arg1 Error:(id)arg2;
- (void)OnAddAddress:(id)arg1 Error:(id)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (_Bool)onError:(id)arg1;
- (void)AddressImport;
- (void)AddressListDelete:(id)arg1;
- (void)AddressListEdit:(id)arg1;
- (void)AddressListAdd;
- (void)AddressListComplete:(id)arg1;
- (void)AddressListBack;
- (void)AddressInfoNext:(id)arg1;
- (void)AddressInfoCancel;
- (void)startLogic;
- (void)EndWCAddressControlLogic;
- (void)stopLogic;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)pause;
- (void)resume;
- (void)stopLoading;
- (void)startLoading;
- (id)getLatestAddress;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 AuthenticationStruct:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

