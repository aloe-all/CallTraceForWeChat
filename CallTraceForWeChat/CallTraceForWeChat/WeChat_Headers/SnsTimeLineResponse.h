//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t, SnsServerConfig;

@interface SnsTimeLineResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int advertiseCount; // @dynamic advertiseCount;
@property(retain, nonatomic) NSMutableArray *advertiseList; // @dynamic advertiseList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int controlFlag; // @dynamic controlFlag;
@property(nonatomic) unsigned int delAdvertiseCount; // @dynamic delAdvertiseCount;
@property(retain, nonatomic) NSMutableArray *delAdvertiseList; // @dynamic delAdvertiseList;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(nonatomic) unsigned int objectCountForSameMd5; // @dynamic objectCountForSameMd5;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int recCount; // @dynamic recCount;
@property(retain, nonatomic) NSMutableArray *recList; // @dynamic recList;
@property(retain, nonatomic) SnsServerConfig *serverConfig; // @dynamic serverConfig;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;

@end

