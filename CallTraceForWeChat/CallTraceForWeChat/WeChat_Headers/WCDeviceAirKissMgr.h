//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface WCDeviceAirKissMgr : MMService <MMServiceProtocol>
{
    _Bool m_isStarted;
}

- (_Bool)setWifi:(id)arg1 Password:(id)arg2;
- (id)getTableKey:(id)arg1;
- (id)getAESKey:(id)arg1;
- (id)getWifiPassword:(id)arg1;
- (void)stopAirKiss;
- (_Bool)startAirKiss:(id)arg1 Password:(id)arg2 Key:(id)arg3 ProcInt:(int)arg4 DataInt:(int)arg5;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

