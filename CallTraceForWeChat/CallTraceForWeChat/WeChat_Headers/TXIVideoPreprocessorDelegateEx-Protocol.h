//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TXSVFrame;

@protocol TXIVideoPreprocessorDelegateEx <NSObject>

@optional
- (void)onDetectFacePoints:(NSArray *)arg1;
- (void)didProcessFrame:(char *)arg1 width:(long long)arg2 height:(long long)arg3 format:(long long)arg4 timeStamp:(unsigned long long)arg5;
- (void)didProcessFrame:(TXSVFrame *)arg1;
- (void)onTextureDestoryed;
- (void)onRenderSampleBuferFrame:(TXSVFrame *)arg1;
- (unsigned int)willAddWatermark:(TXSVFrame *)arg1;
@end

