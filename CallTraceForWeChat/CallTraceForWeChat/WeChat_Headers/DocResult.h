//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData, NSString, ResultCommContent;

@interface DocResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ResultCommContent *commContent; // @dynamic commContent;
@property(retain, nonatomic) NSString *date; // @dynamic date;
@property(retain, nonatomic) NSData *debugInfo; // @dynamic debugInfo;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *sceneNote; // @dynamic sceneNote;
@property(nonatomic) int showStyle; // @dynamic showStyle;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *weappPath; // @dynamic weappPath;
@property(nonatomic) unsigned int weappVersion; // @dynamic weappVersion;

@end

