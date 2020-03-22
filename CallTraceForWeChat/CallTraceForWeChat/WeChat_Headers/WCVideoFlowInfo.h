//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCVideoFlowInfo : NSObject <NSCoding>
{
    _Bool isMiniVideo;
    unsigned int category;
    unsigned int playCount;
    unsigned int realShareCategory;
    NSString *vid;
    NSString *expand;
    NSString *searchId;
    NSString *openId;
    NSString *shareUrl;
    NSString *shareTitle;
    NSString *shareDesc;
    NSString *shareImgUrl;
    NSString *source;
    NSString *sourceImgUrl;
    NSString *sourceUrl;
    NSString *strPlayCount;
    NSString *titleUrl;
    NSMutableArray *extParams;
    NSString *nsTagInfoJSON;
    NSString *_videoChannelTitle;
}

@property(retain, nonatomic) NSString *videoChannelTitle; // @synthesize videoChannelTitle=_videoChannelTitle;
@property(nonatomic) unsigned int realShareCategory; // @synthesize realShareCategory;
@property(nonatomic) _Bool isMiniVideo; // @synthesize isMiniVideo;
@property(retain, nonatomic) NSString *nsTagInfoJSON; // @synthesize nsTagInfoJSON;
@property(retain, nonatomic) NSMutableArray *extParams; // @synthesize extParams;
@property(retain, nonatomic) NSString *titleUrl; // @synthesize titleUrl;
@property(nonatomic) unsigned int playCount; // @synthesize playCount;
@property(retain, nonatomic) NSString *strPlayCount; // @synthesize strPlayCount;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source;
@property(retain, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl;
@property(nonatomic) unsigned int category; // @synthesize category;
@property(retain, nonatomic) NSString *openId; // @synthesize openId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId;
@property(retain, nonatomic) NSString *expand; // @synthesize expand;
@property(retain, nonatomic) NSString *vid; // @synthesize vid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

