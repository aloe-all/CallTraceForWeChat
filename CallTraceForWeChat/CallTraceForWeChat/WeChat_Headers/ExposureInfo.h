//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BtnInfo, DrawLotteryInfo, FollowCardBDMchInfo, LayerInfo, NSMutableArray, NSString;

@interface ExposureInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundImgWhole; // @dynamic backgroundImgWhole;
@property(retain, nonatomic) BtnInfo *btnInfo; // @dynamic btnInfo;
@property(retain, nonatomic) DrawLotteryInfo *drawLotteryInfo; // @dynamic drawLotteryInfo;
@property(retain, nonatomic) NSString *drawLotteryParams; // @dynamic drawLotteryParams;
@property(retain, nonatomic) NSString *exposureInfoModifyParams; // @dynamic exposureInfoModifyParams;
@property(retain, nonatomic) FollowCardBDMchInfo *followCardbdMchInfo; // @dynamic followCardbdMchInfo;
@property(nonatomic) unsigned int isQueryOthers; // @dynamic isQueryOthers;
@property(nonatomic) unsigned int isShowBtn; // @dynamic isShowBtn;
@property(nonatomic) unsigned int isShowLayer; // @dynamic isShowLayer;
@property(retain, nonatomic) LayerInfo *layerInfo; // @dynamic layerInfo;
@property(retain, nonatomic) NSMutableArray *singleExposureInfoList; // @dynamic singleExposureInfoList;
@property(nonatomic) unsigned int userOpertaionType; // @dynamic userOpertaionType;

@end

