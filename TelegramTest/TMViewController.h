//
//  TMViewController.h
//  Telegram P-Edition
//
//  Created by Dmitry Kondratyev on 12/15/13.
//  Copyright (c) 2013 keepcoder. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TMView.h"
#import "TMTextField.h"


@class TGAttachObject;
@class TMPopover;
@class TMNavigationController;
@interface TMViewController : NSObject
@property (nonatomic) NSRect frameInit;
@property (nonatomic,strong) TMView *view;
@property (nonatomic, strong) TMView *leftNavigationBarView;
@property (nonatomic, strong) TMView *centerNavigationBarView;
@property (nonatomic, strong) TMView *rightNavigationBarView;

@property (nonatomic, strong) TMPopover *popover;

@property (nonatomic,strong,readonly) TMTextField *centerTextField;

@property (nonatomic, strong) TMNavigationController *navigationViewController;
@property (nonatomic) BOOL isNavigationBarHidden;

- (id)initWithFrame:(NSRect)frame;
- (TMView *)view;
- (void)setHidden:(BOOL)isHidden;

- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;

- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;

- (void)setLeftNavigationBarView:(TMView *)leftNavigationBarView animated:(BOOL)animation;
- (void)setRightNavigationBarView:(TMView *)rightNavigationBarView animated:(BOOL)animation;

- (void)rightButtonAction;


+(void)showModalProgress;
+(void)hideModalProgress;


-(void)showModalProgress;
-(void)hideModalProgress;

-(void)hideModalProgressWithSuccess;
+(void)hideModalProgressWithSuccess;


+(void)showPasslock:(passlockCallback)callback;
+(void)hidePasslock;

-(void)showPasslock:(passlockCallback)callback;
-(void)hidePasslock;


+(void)showCreatePasslock:(passlockCallback)callback;
-(void)showCreatePasslock:(passlockCallback)callback;

+(void)showChangePasslock:(passlockCallback)callback;
-(void)showChangePasslock:(passlockCallback)callback;


+(void)showBlockPasslock:(passlockCallback)callback;
-(void)showBlockPasslock:(passlockCallback)callback;



+(void)showAttachmentCaption:(NSArray *)attachments onClose:(dispatch_block_t)onClose;
+(void)hideAttachmentCaption;

+(BOOL)isModalActive;
+(TMView *)modalView;

+(void)becomePasslock;

-(void)_didStackRemoved;

-(BOOL)becomeFirstResponder;

-(void)loadView;

-(TMView *)standartLeftBarView;

-(void)setCenterBarViewText:(NSString *)text;
-(void)setCenterBarViewTextAttributed:(NSAttributedString *)text;


@end
