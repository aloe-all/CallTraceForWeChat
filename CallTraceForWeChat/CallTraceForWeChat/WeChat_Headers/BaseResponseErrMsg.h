//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface BaseResponseErrMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (void)ShowAlertWithDefaultMsg:(id)arg1;
- (_Bool)isShowAlert;
- (id)initWithXml:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) NSString *cancel; // @dynamic cancel;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int countdown; // @dynamic countdown;
@property(nonatomic) int delayConnSec; // @dynamic delayConnSec;
@property(nonatomic) int dispSec; // @dynamic dispSec;
@property(retain, nonatomic) NSString *ok; // @dynamic ok;
@property(nonatomic) int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

