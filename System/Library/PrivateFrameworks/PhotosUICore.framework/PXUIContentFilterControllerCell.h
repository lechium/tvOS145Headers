/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIImage, UIColor;

@interface PXUIContentFilterControllerCell : UITableViewCell {

	long long _filterItemTag;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) UIColor * iconTintColor; 
@property (assign,nonatomic) long long filterItemTag; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIconTintColor:(UIColor *)arg1 ;
-(UIColor *)iconTintColor;
-(void)setFilterItemTag:(long long)arg1 ;
-(long long)filterItemTag;
@end

