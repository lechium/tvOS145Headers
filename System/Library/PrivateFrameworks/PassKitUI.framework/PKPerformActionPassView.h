/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPerformActionBackdropView.h>

@class PKPass, PKPassSnapshotter, UIImageView;

@interface PKPerformActionPassView : PKPerformActionBackdropView {

	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UIImageView* _passView;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_createSubviews;
-(id)initWithPass:(id)arg1 frame:(CGRect)arg2 ;
-(void)shakeImage;
-(void)smallShakeImage;
-(void)_loadSnapshotView;
-(CGSize)_passImageSize;
@end

