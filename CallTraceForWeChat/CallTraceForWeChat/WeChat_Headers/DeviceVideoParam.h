//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class DeviceCamera;

@interface DeviceVideoParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeviceCamera *backCamera; // @dynamic backCamera;
@property(nonatomic) unsigned int cameraNum; // @dynamic cameraNum;
@property(nonatomic) unsigned int focusType; // @dynamic focusType;
@property(nonatomic) unsigned int fpsMax; // @dynamic fpsMax;
@property(nonatomic) unsigned int fpsMin; // @dynamic fpsMin;
@property(retain, nonatomic) DeviceCamera *frontCamera; // @dynamic frontCamera;
@property(nonatomic) unsigned int supportHwenc; // @dynamic supportHwenc;

@end

