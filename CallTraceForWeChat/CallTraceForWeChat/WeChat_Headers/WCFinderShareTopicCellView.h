//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class RichTextView, UIImageView, UILabel, UIView, WCFinderShareTopicCellViewModel;

@interface WCFinderShareTopicCellView : CommonMessageCellView
{
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
    UIView *_separator;
    UIImageView *_tinyIcon;
    UILabel *_finderLabel;
}

@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)addThumbImageView;
- (double)digestMaxWidth;
- (id)digestFont;
- (void)addDetailLabel;
- (void)addTitleLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) WCFinderShareTopicCellViewModel *viewModel; // @dynamic viewModel;

@end

