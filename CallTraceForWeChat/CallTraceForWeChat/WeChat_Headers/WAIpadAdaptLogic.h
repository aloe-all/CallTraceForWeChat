//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WAOrientationSuggestionViewControllerDelegate-Protocol.h"

@class MMUIWindow, NSString, WAOrientationSuggestionViewController;
@protocol WAOrientationSuggestionWindowDelegate;

@interface WAIpadAdaptLogic : MMObject <WAOrientationSuggestionViewControllerDelegate>
{
    MMUIWindow *_suggestionWindow;
    WAOrientationSuggestionViewController *_suggestionViewController;
    id <WAOrientationSuggestionWindowDelegate> _delegate;
}

+ (_Bool)needIpadCustomTransition:(_Bool)arg1;
+ (id)IsPresentedByAnotherWeApp:(id)arg1;
+ (_Bool)IsPresentedByMainViewControllerInIpad:(id)arg1;
+ (_Bool)currentNavigationControllerHasPrevWeAppVC:(id)arg1;
+ (_Bool)checkIfNeedIpadSpecialPresentLogic:(id)arg1 PresentingVC:(id *)arg2;
@property(nonatomic) __weak id <WAOrientationSuggestionWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WAOrientationSuggestionViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(retain, nonatomic) MMUIWindow *suggestionWindow; // @synthesize suggestionWindow=_suggestionWindow;
- (void).cxx_destruct;
- (void)onQuitButtonClicked;
- (_Bool)tryAddOrRemoveMaskView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

