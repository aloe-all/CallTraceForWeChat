//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSArray, UISearchController;
@protocol WCPaySelectBankSearchResultViewControllerDelegate;

@interface WCPaySelectBankSearchResultViewController : WCPayBaseViewController
{
    id <WCPaySelectBankSearchResultViewControllerDelegate> _delegate;
    NSArray *_results;
    UISearchController *_searchController;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
}

@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <WCPaySelectBankSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableViewForHeader;
- (void)clickInfoCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)makeSearchBankCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)reloadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLoad;

@end

