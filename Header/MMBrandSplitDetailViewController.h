//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSplitDetailViewController.h"

@class MMBrandChatsViewController, MMOfficialAccountsDetailViewController;

__attribute__((visibility("hidden")))
@interface MMBrandSplitDetailViewController : MMSplitDetailViewController
{
    BOOL _showHighlightSelection;
    MMBrandChatsViewController *_brandChatsViewController;
    MMOfficialAccountsDetailViewController *_officialAccountsDetailViewController;
    CDUnknownBlockType _brandChatsSelectionDidChangeBlock;
    id <MMComposeTextViewDelegate> _composeTextViewDelegate;
}

@property(nonatomic) __weak id <MMComposeTextViewDelegate> composeTextViewDelegate; // @synthesize composeTextViewDelegate=_composeTextViewDelegate;
@property(copy, nonatomic) CDUnknownBlockType brandChatsSelectionDidChangeBlock; // @synthesize brandChatsSelectionDidChangeBlock=_brandChatsSelectionDidChangeBlock;
@property(retain, nonatomic) MMOfficialAccountsDetailViewController *officialAccountsDetailViewController; // @synthesize officialAccountsDetailViewController=_officialAccountsDetailViewController;
@property(retain, nonatomic) MMBrandChatsViewController *brandChatsViewController; // @synthesize brandChatsViewController=_brandChatsViewController;
- (void).cxx_destruct;
- (void)setupViews;
- (double)viewAdvancedWidth;
- (void)startChatWithContact:(id)arg1;
@property(nonatomic) BOOL showHighlightSelection; // @synthesize showHighlightSelection=_showHighlightSelection;
- (void)setMasterViewController:(id)arg1;
- (void)selectFirstIfNothingSelected;
- (void)updateComposeTextViewDelegate:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
