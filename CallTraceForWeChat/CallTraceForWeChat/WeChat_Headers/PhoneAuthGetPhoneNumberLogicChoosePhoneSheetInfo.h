//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PhoneAuthGetPhoneNumberLogicChoosePhoneSheetInfo : NSObject
{
    NSString *_appid;
    NSString *_avartarImageUrl;
    NSString *_appNickName;
    NSMutableArray *_phoneInfoArray;
    NSString *_authContent;
}

@property(copy, nonatomic) NSString *authContent; // @synthesize authContent=_authContent;
@property(retain, nonatomic) NSMutableArray *phoneInfoArray; // @synthesize phoneInfoArray=_phoneInfoArray;
@property(copy, nonatomic) NSString *appNickName; // @synthesize appNickName=_appNickName;
@property(copy, nonatomic) NSString *avartarImageUrl; // @synthesize avartarImageUrl=_avartarImageUrl;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;

@end

