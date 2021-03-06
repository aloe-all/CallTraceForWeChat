//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface WABlueToothDevicePool : MMObject
{
    NSMutableArray *m_devicePool;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
- (id)allDevices;
- (void)clearAllDevice;
- (void)clearDisconnectedDevice;
- (id)getDeviceByUUID:(id)arg1;
- (id)getDeviceByPeripheral:(id)arg1;
- (id)addDeviceWithPeripheral:(id)arg1 RSSI:(id)arg2 adData:(id)arg3;
- (id)initWithLock:(id)arg1;

@end

