//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_RoomInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int devConnStatus; // @dynamic devConnStatus;
@property(nonatomic) _Bool joinRoom; // @dynamic joinRoom;
@property(retain, nonatomic) NSString *originalMd5; // @dynamic originalMd5;
@property(retain, nonatomic) NSString *roomId; // @dynamic roomId;
@property(nonatomic) unsigned int roomStatus; // @dynamic roomStatus;
@property(nonatomic) unsigned int wxConnStatus; // @dynamic wxConnStatus;

@end

