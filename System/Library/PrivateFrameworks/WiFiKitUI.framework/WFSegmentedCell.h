/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell {

	UISegmentedControl* _segmentedControl;
	/*^block*/id _handler;

}

@property (assign,nonatomic,__weak) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (copy) id handler;                                                            //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)addSubview:(id)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)awakeFromNib;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)_segmentedControlDidChange:(id)arg1 ;
@end

