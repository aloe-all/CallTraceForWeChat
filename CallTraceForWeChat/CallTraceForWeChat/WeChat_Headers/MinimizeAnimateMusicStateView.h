//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MinimizeAnimateStateBaseView.h"

@class UIView;

@interface MinimizeAnimateMusicStateView : MinimizeAnimateStateBaseView
{
    _Bool _isInDraggableTaskView;
    UIView *_staticIconSnapShotView;
}

@property(retain, nonatomic) UIView *staticIconSnapShotView; // @synthesize staticIconSnapShotView=_staticIconSnapShotView;
@property(nonatomic) _Bool isInDraggableTaskView; // @synthesize isInDraggableTaskView=_isInDraggableTaskView;
- (void).cxx_destruct;
- (void)stopStateAnimation;
- (void)tryStartStateAnimation;
- (id)initWithGrayBackground:(_Bool)arg1 isMiniVersion:(_Bool)arg2;

@end

