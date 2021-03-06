/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, UINavigationItem;

@interface PSSpinnerRecord : NSObject {

	BOOL _hidesBackButton;
	NSArray* _rightItems;
	NSArray* _leftItems;
	UINavigationItem* _navigationItem;

}

@property (nonatomic,copy) NSArray * rightItems;                             //@synthesize rightItems=_rightItems - In the implementation block
@property (nonatomic,copy) NSArray * leftItems;                              //@synthesize leftItems=_leftItems - In the implementation block
@property (nonatomic,retain) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic) BOOL hidesBackButton;                           //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
-(NSArray *)rightItems;
-(void)setRightItems:(NSArray *)arg1 ;
-(NSArray *)leftItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(UINavigationItem *)navigationItem;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(BOOL)hidesBackButton;
-(void)setHidesBackButton:(BOOL)arg1 ;
@end

