//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneGetRcvrResp;

@protocol WCPayTransferPhoneMainPageDelegate <NSObject>
- (void)onWCPayTransferPhoneMainPageActiveTextField;
- (_Bool)onWCPayTransferPhoneMainPageShowCheckName;
- (NSString *)onWCPayTransferPhoneMainPageShowName;
- (TransferPhoneGetRcvrResp *)onWCPayTransferPhoneMainPageGetRcvrResp;
- (void)onWCPayTransferPhoneMainPageToCheckName:(NSString *)arg1;
- (void)onWCPayTransferPhoneMainPageToNext:(unsigned int)arg1 comment:(NSString *)arg2 mode:(unsigned int)arg3;
- (void)onWCPayTransferPhoneMainPageBack;
@end
