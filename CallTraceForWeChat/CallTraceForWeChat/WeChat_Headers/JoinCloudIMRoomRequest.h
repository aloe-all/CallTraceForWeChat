//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface JoinCloudIMRoomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(retain, nonatomic) NSString *noncestr; // @dynamic noncestr;
@property(retain, nonatomic) NSString *privateData; // @dynamic privateData;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

