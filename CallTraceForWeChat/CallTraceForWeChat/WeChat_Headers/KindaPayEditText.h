//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKPayEditText-Protocol.h"

@class NSString;

@interface KindaPayEditText : KindaView <MMKPayEditText>
{
}

- (id)getSalt;
- (void)setSalt:(id)arg1;
- (long long)getEditState;
- (void)setEditState:(long long)arg1;
- (id)getInputText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

