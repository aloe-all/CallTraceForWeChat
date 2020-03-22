//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"
#import "WCPayLQTSelectCardItemDelegate-Protocol.h"
#import "WCPayLQTSelectDateItemDelegate-Protocol.h"

@class NSString, RichTextView, UIButton, UILabel, UITextField, UIView, WCBaseKeyboardToolBar, WCPayLQTSelectCardItem, WCPayLQTSelectDateItem;
@protocol WCPayLQTDepositFillInfoViewControllerDelegate;

@interface WCPayLQTDepositFillInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate, ILinkEventExt, WCPayLQTSelectCardItemDelegate, UITextFieldDelegate, WCPayLQTSelectDateItemDelegate>
{
    id <WCPayLQTDepositFillInfoViewControllerDelegate> m_delegate;
    WCBaseKeyboardToolBar *m_keyboardBar;
    long long controllerType;
    _Bool _isKeyboardShow;
    _Bool _isKeyboardAnimating;
    _Bool _hasClickDateItem;
    _Bool _hasClickCardItem;
    UIView *_headerView;
    UILabel *_productWordLabel;
    UILabel *_marketingWordLabel;
    UILabel *_depositAmountLabel;
    UILabel *_currencyLabel;
    UITextField *_amountTextField;
    UIView *_textFieldLineView;
    UILabel *_tipsLabel;
    UIView *_headerBottomLine;
    WCPayLQTSelectCardItem *_selectCardItem;
    WCPayLQTSelectDateItem *_selectDateItem;
    double _m_minItemLeft;
    UIButton *_confirmButton;
    UIView *_protocolView;
    UIButton *_agreeProtocolButton;
    RichTextView *_protocolTextView;
    UIButton *_tipsInfoBtn;
    double _currentBtnY;
    double _currentProtocolY;
    double _keyboardHeight;
    struct CGPoint _currentOffset;
}

@property _Bool hasClickCardItem; // @synthesize hasClickCardItem=_hasClickCardItem;
@property _Bool hasClickDateItem; // @synthesize hasClickDateItem=_hasClickDateItem;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) double currentProtocolY; // @synthesize currentProtocolY=_currentProtocolY;
@property(nonatomic) double currentBtnY; // @synthesize currentBtnY=_currentBtnY;
@property(nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) UIButton *tipsInfoBtn; // @synthesize tipsInfoBtn=_tipsInfoBtn;
@property(nonatomic) _Bool isKeyboardAnimating; // @synthesize isKeyboardAnimating=_isKeyboardAnimating;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIButton *agreeProtocolButton; // @synthesize agreeProtocolButton=_agreeProtocolButton;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) double m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
@property(retain, nonatomic) WCPayLQTSelectDateItem *selectDateItem; // @synthesize selectDateItem=_selectDateItem;
@property(retain, nonatomic) WCPayLQTSelectCardItem *selectCardItem; // @synthesize selectCardItem=_selectCardItem;
@property(retain, nonatomic) UIView *headerBottomLine; // @synthesize headerBottomLine=_headerBottomLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *textFieldLineView; // @synthesize textFieldLineView=_textFieldLineView;
@property(retain, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property(retain, nonatomic) UILabel *currencyLabel; // @synthesize currencyLabel=_currencyLabel;
@property(retain, nonatomic) UILabel *depositAmountLabel; // @synthesize depositAmountLabel=_depositAmountLabel;
@property(retain, nonatomic) UILabel *marketingWordLabel; // @synthesize marketingWordLabel=_marketingWordLabel;
@property(retain, nonatomic) UILabel *productWordLabel; // @synthesize productWordLabel=_productWordLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)updateTableViewOffset;
- (void)onWCPayLQTSelectDateItemShow;
- (void)onWCPayLQTSelectCardItemAddNewCard;
- (void)textFieldDidChange;
- (void)onConfirm:(id)arg1;
- (void)onAgreementClick:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)updateBottomView;
- (void)clickInfoCell:(struct WCTableViewNormalCellManager *)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)reloadTableView;
- (id)getSelectCardItemBankList;
- (void)updateConfirmButtonStatus;
- (void)infoBtnClick:(id)arg1;
- (void)updateInfoIcon;
- (void)updateTipsLabel;
- (void)updateHeaderView;
- (void)updateTableView;
- (void)initView;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onBack;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)setControllerType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

