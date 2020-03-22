//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, WSSimilarEmotItemView;

@interface WSEmoticonModel : NSObject
{
    unsigned int _type;
    NSString *_aesKey;
    NSString *_docID;
    NSString *_encryptUrl;
    NSString *_md5;
    NSString *_productID;
    NSString *_productName;
    NSString *_productUrl;
    NSString *_thumb;
    NSData *_imgData;
    WSSimilarEmotItemView *_weakHolder;
}

@property(nonatomic) __weak WSSimilarEmotItemView *weakHolder; // @synthesize weakHolder=_weakHolder;
@property(retain, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(retain, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
- (void).cxx_destruct;

@end

