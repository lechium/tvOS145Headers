/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {

	UILabel* _valueLabel;

}
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)valueLabel;
-(void)_adjustFrameOfView:(id)arg1 distance:(double)arg2 ;
-(id)effectiveDetailTextLabel;
-(id)effectiveValueTextLabel;
@end
