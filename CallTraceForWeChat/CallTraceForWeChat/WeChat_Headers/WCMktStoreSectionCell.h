//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class CardSortInfo, MMUILabel, UIButton, UIImageView, UIView;
@protocol WCMktStoreSectionCellDelegate;

@interface WCMktStoreSectionCell : MMTableViewCell
{
    id <WCMktStoreSectionCellDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_leftLabel;
    MMUILabel *_rightLabel;
    UIImageView *_rightArrowImgView;
    UIView *_seplineView;
    UIButton *_coverBtn;
    CardSortInfo *_sortInfo;
}

@property(nonatomic) CardSortInfo *sortInfo; // @synthesize sortInfo=_sortInfo;
@property(retain, nonatomic) UIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(retain, nonatomic) UIView *seplineView; // @synthesize seplineView=_seplineView;
@property(retain, nonatomic) UIImageView *rightArrowImgView; // @synthesize rightArrowImgView=_rightArrowImgView;
@property(retain, nonatomic) MMUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) MMUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WCMktStoreSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sortRuleCoverBtnClick;
- (void)updateCellContentWithSortInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

