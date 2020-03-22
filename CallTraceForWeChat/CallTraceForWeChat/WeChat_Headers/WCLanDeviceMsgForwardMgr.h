//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCLanDeviceKissLogicDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, WCLanDeviceBaseKissLogic, WCLanDeviceData;

@interface WCLanDeviceMsgForwardMgr : MMService <WCLanDeviceKissLogicDelegate, MMServiceProtocol>
{
    WCLanDeviceData *m_forwardData;
    NSMutableArray *m_currentDeviceList;
    NSMutableSet *m_deviceLanFlagCache;
    NSMutableSet *m_deviceMD5Set;
    NSMutableSet *m_deviceConnectFlagCache;
    WCLanDeviceBaseKissLogic *m_kissLogic;
    _Bool m_hasOperated;
    long long m_opScene;
}

- (void).cxx_destruct;
- (void)onKissDeviceProgressUpdate:(double)arg1 device:(id)arg2;
- (void)onKissDeviceWithDevice:(id)arg1 errCode:(int)arg2;
- (void)onDeviceFound:(id)arg1;
- (void)boundDevicesFinalFeedBack;
- (void)clearSelf;
- (void)stopAllLogic;
- (void)stopScan;
- (_Bool)hasConnectTask;
- (_Bool)cancelForwarMessageToLanDevice:(id)arg1;
- (_Bool)forwardToLanDevice:(id)arg1;
- (_Bool)startScan;
- (id)availableDevicesInCache;
- (_Bool)hasAvailableDevice;
- (_Bool)hasAvailableDeviceInTimeLineItem:(id)arg1;
- (_Bool)hasAvailableDeviceInMessageWrap:(id)arg1;
- (void)initializeWithTimeLineItem:(id)arg1 mediaItem:(id)arg2 OpScene:(long long)arg3;
- (void)initializeWithMessageWrap:(id)arg1 OpScene:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

