//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameHaowanBasePostInfo.h"

@class NSString;

@interface GameHaowanQueryPostInfo : GameHaowanBasePostInfo
{
    _Bool _isBroken;
    NSString *_postId;
}

+ (id)createFromDbItem:(id)arg1;
@property(nonatomic) _Bool isBroken; // @synthesize isBroken=_isBroken;
@property(retain, nonatomic) NSString *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;

@end

