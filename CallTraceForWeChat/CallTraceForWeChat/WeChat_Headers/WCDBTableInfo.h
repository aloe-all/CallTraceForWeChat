//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface WCDBTableInfo : NSObject
{
    NSMutableArray *_schemas;
    NSMutableArray *_sequences;
    NSNumber *_count;
}

- (void).cxx_destruct;
- (id)description;
- (void)addSequence:(id)arg1;
- (void)addSchema:(id)arg1;
- (void)setCount:(id)arg1;

@end
