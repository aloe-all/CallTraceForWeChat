//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, NSLayoutConstraint, RichTextView, UIImageView, UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderWechatMentionCell : UITableViewCell
{
    WCFinderHeadImageView *_headImageView;
    MMWebImageView *_thumbImageView;
    RichTextView *_titleView;
    RichTextView *_contentTextView;
    RichTextView *_refContentTextView;
    UILabel *_timestampLabel;
    UIImageView *_interactImageView;
    UIView *_lineView;
    UILabel *_authorLabel;
    UILabel *_descriptionLabel;
    UIView *_refContentView;
    NSLayoutConstraint *_authorLabelWidthConstraint;
    NSLayoutConstraint *_authorLabelLeadingConstraint;
    NSLayoutConstraint *_titleWidthConstraint;
    NSLayoutConstraint *_refContentBottomConstraint;
    NSLayoutConstraint *_refContentHeightConstraint;
    double _authorLabelWidth;
    UIView *_pureTextBackGroundView;
    RichTextView *_pureTextView;
    UIView *_refContentLineView;
}

@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(nonatomic) __weak RichTextView *pureTextView; // @synthesize pureTextView=_pureTextView;
@property(nonatomic) __weak UIView *pureTextBackGroundView; // @synthesize pureTextBackGroundView=_pureTextBackGroundView;
@property(nonatomic) double authorLabelWidth; // @synthesize authorLabelWidth=_authorLabelWidth;
@property(retain, nonatomic) NSLayoutConstraint *refContentHeightConstraint; // @synthesize refContentHeightConstraint=_refContentHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *refContentBottomConstraint; // @synthesize refContentBottomConstraint=_refContentBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *authorLabelLeadingConstraint; // @synthesize authorLabelLeadingConstraint=_authorLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *authorLabelWidthConstraint; // @synthesize authorLabelWidthConstraint=_authorLabelWidthConstraint;
@property(nonatomic) __weak UIView *refContentView; // @synthesize refContentView=_refContentView;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *interactImageView; // @synthesize interactImageView=_interactImageView;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) __weak RichTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(nonatomic) __weak RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak RichTextView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)setUpViewLayout;
- (void)setupRefContentView;
- (void)setUpPureTextView;
- (void)setUpUI;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

