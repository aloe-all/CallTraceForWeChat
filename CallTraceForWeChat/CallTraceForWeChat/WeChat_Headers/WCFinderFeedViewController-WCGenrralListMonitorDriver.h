//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedViewController.h"

@interface WCFinderFeedViewController (WCGenrralListMonitorDriver)
+ (_Bool)hookScrollViewDidScroll;
+ (_Bool)hookScrollViewDidEndDecelerating;
+ (_Bool)hookScrollViewDidEndDraggingWillDecelerate;
+ (_Bool)hookViewDidDisappear;
+ (_Bool)hookViewDidAppear;
+ (_Bool)hookReloadDataWrap;
+ (_Bool)hookViewDidBePoped;
+ (_Bool)hookViewDidBePushed;
+ (void)load;
- (id)getGeneralListMonitorMgr;
- (_Bool)isOpenGeneralListSessionStatSwitch;
- (void)tsScrollViewDidScroll:(id)arg1;
- (void)tsScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tsScrollViewDidEndDecelerating:(id)arg1;
- (void)tsViewDidDisappear:(_Bool)arg1;
- (void)tsViewDidAppear:(_Bool)arg1;
- (void)tsReloadDataWrap;
- (void)tsViewDidBePoped:(_Bool)arg1;
- (void)tsViewDidBePushed:(_Bool)arg1;
@end

