//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol ISysCallCheckExt

@optional
- (void)OnSysCallState:(int)arg1 andCallId:(NSString *)arg2;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)EndInterruption;
- (void)BeginInterruption;
@end

