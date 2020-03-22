//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTBaseItemCellView, CContact, CMessageWrap, MMUIViewController, MMWebViewController, NSString, ReaderWrap;

@protocol BTBaseItemCellViewDelegate <NSObject>

@optional
- (void)onLongPressForDebug:(CMessageWrap *)arg1;
- (void)onBrandItemAudioClick:(BTBaseItemCellView *)arg1;
- (void)onBrandItemLongPress:(BTBaseItemCellView *)arg1;
- (void)onReloadItemView:(BTBaseItemCellView *)arg1;
- (MMWebViewController *)getWebViewController:(ReaderWrap *)arg1 url:(NSString *)arg2 forPeek:(_Bool)arg3 fromMsgWrap:(CMessageWrap *)arg4;
- (MMUIViewController *)getViewController;
- (void)onClickHeaderLongPress:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderDeleteMsg:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderRemoveContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderProfile:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderUnTopContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderTopContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
@end

