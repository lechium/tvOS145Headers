/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPrinterAccessoryViewDelegate.h>

@class PKPrinter, UIPrinterAccessoryView, UIGestureRecognizer, NSString;

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate> {

	PKPrinter* _printer;
	id _delegate;
	UIPrinterAccessoryView* _printerAccessoryView;
	UIGestureRecognizer* _expandedAccessoryTapRecognizer;

}

@property (assign,nonatomic) int printerState; 
@property (assign,nonatomic,__weak) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL checked; 
@property (nonatomic,retain) UIPrinterAccessoryView * printerAccessoryView;                     //@synthesize printerAccessoryView=_printerAccessoryView - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * expandedAccessoryTapRecognizer;              //@synthesize expandedAccessoryTapRecognizer=_expandedAccessoryTapRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)checked;
-(void)setChecked:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)printerAccessoryViewInfoButtonPressed:(id)arg1 ;
-(void)setPrinterState:(int)arg1 ;
-(int)printerState;
-(void)expandedAccessoryAreaTapped;
-(void)setExpandedAccessoryTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)expandedAccessoryTapRecognizer;
-(UIPrinterAccessoryView *)printerAccessoryView;
-(void)setPrinterAccessoryView:(UIPrinterAccessoryView *)arg1 ;
@end
