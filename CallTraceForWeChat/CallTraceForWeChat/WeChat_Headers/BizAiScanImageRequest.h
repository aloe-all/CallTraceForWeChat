//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, GoodsObject, NSData;

@interface BizAiScanImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cameraImgH; // @dynamic cameraImgH;
@property(nonatomic) unsigned int cameraImgW; // @dynamic cameraImgW;
@property(retain, nonatomic) GoodsObject *cropObj; // @dynamic cropObj;
@property(nonatomic) unsigned int frameid; // @dynamic frameid;
@property(retain, nonatomic) NSData *imgData; // @dynamic imgData;
@property(nonatomic) _Bool isAiCrop; // @dynamic isAiCrop;
@property(nonatomic) _Bool isUseAi; // @dynamic isUseAi;
@property(nonatomic) unsigned long long sendSvrTime; // @dynamic sendSvrTime;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

