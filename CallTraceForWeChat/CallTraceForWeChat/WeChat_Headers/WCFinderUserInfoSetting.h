//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString, WCFinderUserMentionModel, WCFinderUserMessage;

@interface WCFinderUserInfoSetting : NSObject <PBCoding>
{
    _Bool shouldShowTimelineRedDot;
    _Bool shouldShowPersonCenterRedDot;
    _Bool hasShowFindPostRedDot;
    _Bool hasShowCameraRedDot;
    int unreadMessageCount;
    WCFinderUserMentionModel *mentionModel;
    WCFinderUserMessage *userMessage;
    NSArray *notInterestedConfigArr;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasShowCameraRedDot;
+ (void)PBArrayAdd_hasShowFindPostRedDot;
+ (void)PBArrayAdd_shouldShowPersonCenterRedDot;
+ (void)PBArrayAdd_notInterestedConfigArr;
+ (void)PBArrayAdd_shouldShowTimelineRedDot;
+ (void)PBArrayAdd_userMessage;
+ (void)PBArrayAdd_mentionModel;
+ (void)PBArrayAdd_unreadMessageCount;
@property(nonatomic) _Bool hasShowCameraRedDot; // @synthesize hasShowCameraRedDot;
@property(nonatomic) _Bool hasShowFindPostRedDot; // @synthesize hasShowFindPostRedDot;
@property(nonatomic) _Bool shouldShowPersonCenterRedDot; // @synthesize shouldShowPersonCenterRedDot;
@property(retain, nonatomic) NSArray *notInterestedConfigArr; // @synthesize notInterestedConfigArr;
@property(nonatomic) _Bool shouldShowTimelineRedDot; // @synthesize shouldShowTimelineRedDot;
@property(retain, nonatomic) WCFinderUserMessage *userMessage; // @synthesize userMessage;
@property(retain, nonatomic) WCFinderUserMentionModel *mentionModel; // @synthesize mentionModel;
@property(nonatomic) int unreadMessageCount; // @synthesize unreadMessageCount;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
