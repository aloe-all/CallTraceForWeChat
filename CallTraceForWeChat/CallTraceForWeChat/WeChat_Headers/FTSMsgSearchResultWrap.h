//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSMutableArray, NSMutableDictionary, NSString, SearchMatchTip;

@interface FTSMsgSearchResultWrap : NSObject
{
    NSString *_keyword;
    CContact *_sessionContact;
    CContact *_talkerContact;
    SearchMatchTip *_matchTip;
    NSMutableArray *_arrMsgItems;
    NSMutableArray *_arrSessionResult;
    NSMutableDictionary *_dicSessionResult;
}

@property(retain, nonatomic) NSMutableDictionary *dicSessionResult; // @synthesize dicSessionResult=_dicSessionResult;
@property(retain, nonatomic) NSMutableArray *arrSessionResult; // @synthesize arrSessionResult=_arrSessionResult;
@property(retain, nonatomic) NSMutableArray *arrMsgItems; // @synthesize arrMsgItems=_arrMsgItems;
@property(retain, nonatomic) SearchMatchTip *matchTip; // @synthesize matchTip=_matchTip;
@property(retain, nonatomic) CContact *talkerContact; // @synthesize talkerContact=_talkerContact;
@property(retain, nonatomic) CContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (long long)getResultCountForDisplay;
- (void)resetSearchResult;

@end

