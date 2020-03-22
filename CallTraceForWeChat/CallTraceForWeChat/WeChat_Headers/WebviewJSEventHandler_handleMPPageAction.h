//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MsgImgFullScreenViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class ForwardMessageLogicController, JSAPIHandleMPPageActionFavContext, JSAPIHandleMPPageActionLongPressContext, JSAPIHandleMPPageActionShareContext, NSMutableDictionary, NSString;

@interface WebviewJSEventHandler_handleMPPageAction : WebviewJSEventHandlerBase <MsgImgFullScreenViewControllerDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate>
{
    ForwardMessageLogicController *m_forwardLogicController;
    JSAPIHandleMPPageActionShareContext *m_shareContext;
    JSAPIHandleMPPageActionLongPressContext *m_longpressContext;
    JSAPIHandleMPPageActionFavContext *m_favContext;
    NSMutableDictionary *m_brandMpVideoReporterDict;
    NSMutableDictionary *m_brandLandingPageReportLogicDict;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (id)getMpLandingPageReportLogicByMsg:(id)arg1;
- (id)getBrandMpVideoReporterByVid:(id)arg1;
- (void)onShareEmbedMpVideoEventStr:(id)arg1 videoVid:(id)arg2;
- (void)doShare;
- (void)doFavorite;
- (void)openEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)longPressEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)shareEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)onGetFuncFlag:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShare:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onGetIAPProductInfo:(id)arg1 MPActionEvent:(id)arg2;
- (void)onPaySuccess:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onWriteComment:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShowToast:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)nonchildMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (void)childMode_doAction:(id)arg1 paramters:(id)arg2 event:(id)arg3;
- (_Bool)isNonChildModeSupportAction:(id)arg1;
- (_Bool)isChildModeSupportAction:(id)arg1;
- (void)commonMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (_Bool)isCommonAction:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

