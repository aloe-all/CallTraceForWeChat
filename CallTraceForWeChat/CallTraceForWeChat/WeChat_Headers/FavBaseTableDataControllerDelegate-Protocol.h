//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, MMUIViewController, NSIndexPath;

@protocol FavBaseTableDataControllerDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)onLoadMore;
- (void)onReloadData;
- (void)onShowEmptyView;
- (void)onUpdateUnexistItem:(FavoritesItem *)arg1;
- (void)onSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
@end

